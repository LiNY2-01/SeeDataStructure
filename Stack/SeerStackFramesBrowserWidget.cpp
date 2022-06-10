#include "SeerStackFramesBrowserWidget.h"
#include "util.h"
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QTreeWidgetItemIterator>
#include <QtWidgets/QApplication>
#include <QtCore/QFileInfo>
#include <QtCore/QDebug>
#include <QtCore/QDir>
#include <QtCore/QLoggingCategory>
static QLoggingCategory LC("seer.stack");
SeerStackFramesBrowserWidget::SeerStackFramesBrowserWidget (QWidget* parent) : QWidget(parent) {

    // Construct the UI.
    setupUi(this);

    _previousStackFrameText = "";

    // Setup the widgets
    stackTreeWidget->setMouseTracking(true);
    stackTreeWidget->setSortingEnabled(false);
    stackTreeWidget->resizeColumnToContents(0); // level
    stackTreeWidget->resizeColumnToContents(1); // func
    stackTreeWidget->resizeColumnToContents(2); // file
    stackTreeWidget->resizeColumnToContents(3); // line
    stackTreeWidget->resizeColumnToContents(4); // fullname
    stackTreeWidget->resizeColumnToContents(5); // addr
    stackTreeWidget->resizeColumnToContents(6); // arch

    stackTreeWidget->clear();

    // Connect things.
    QObject::connect(stackTreeWidget, &QTreeWidget::itemDoubleClicked,    this,  &SeerStackFramesBrowserWidget::handleItemDoubleClicked);
    QObject::connect(stackTreeWidget, &QTreeWidget::itemEntered,          this,  &SeerStackFramesBrowserWidget::handleItemEntered);
}

SeerStackFramesBrowserWidget::~SeerStackFramesBrowserWidget () {
}

void SeerStackFramesBrowserWidget::handleText (const QString& text) {

    // Stackframes is important. Always do it.
    //
    // Don't do any work if the widget is hidden.
    // if (isHidden()) {
    //     return;
    // }

    QApplication::setOverrideCursor(Qt::BusyCursor);

    if (text.startsWith("^done,stack=[") && text.endsWith("]")) {

        // ^done,stack=[
        //     frame={level=\"0\",addr=\"0x0000000000400d72\",func=\"function1\",file=\"function1.cpp\",fullname=\"/home/erniep/Development/Peak/src/Seer/helloworld/function1.cpp\",line=\"7\",arch=\"i386:x86-64\"},
        //     frame={level=\"1\",addr=\"0x0000000000400cc3\",func=\"main\",file=\"helloworld.cpp\",fullname=\"/home/erniep/Development/Peak/src/Seer/helloworld/helloworld.cpp\",line=\"14\",arch=\"i386:x86-64\"}
        // ]

        //qDebug() << text;

        // If we are simply moving up and down the stack (via frame-select) then the text won't change.
        // If it is different, reconstruct the tree. Select the first frame.
        if (text != _previousStackFrameText) {

            _previousStackFrameText = text;

            stackTreeWidget->clear();

            QString stack_text = SDS::parseFirst(text, "stack=", '[', ']', false);

            if (stack_text != "") {

                // Parse through the frame list and set the current lines that are in the frame list.
                QStringList frame_list = SDS::parse(text, "frame=", '{', '}', false);

                QString firstLiveFrameLevel     = "";
                QString firstLiveFrameFile      = "";
                QString firstLiveFrameFullname  = "";
                QString firstLiveFrameLine      = "";

                for ( const auto& frame_text : frame_list  ) {

                    QString level_text    = SDS::parseFirst(frame_text, "level=",    '"', '"', false);
                    QString addr_text     = SDS::parseFirst(frame_text, "addr=",     '"', '"', false);
                    QString func_text     = SDS::parseFirst(frame_text, "func=",     '"', '"', false);
                    QString file_text     = SDS::parseFirst(frame_text, "file=",     '"', '"', false);
                    QString fullname_text = SDS::parseFirst(frame_text, "fullname=", '"', '"', false);
                    QString line_text     = SDS::parseFirst(frame_text, "line=",     '"', '"', false);
                    QString arch_text     = SDS::parseFirst(frame_text, "arch=",     '"', '"', false);
                    fullname_text=QDir::toNativeSeparators(fullname_text);
                    // qDebug() << file_text << fullname_text << line_text;

                    // Create the item.
                    QTreeWidgetItem* item = new QTreeWidgetItem;
                    item->setText(0, level_text);
                    item->setText(1, func_text);
                    item->setText(2, QFileInfo(file_text).fileName());
                    item->setText(3, line_text);
                    item->setText(4, fullname_text);
                    item->setText(5, addr_text);
                    item->setText(6, arch_text);

                    // Enable/disable interaction with this row depending if there is a valid file and line number.
                    if (file_text != "" && fullname_text != "" && line_text != "") {

                        item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable | Qt::ItemIsEnabled | Qt::ItemIsDragEnabled | Qt::ItemIsDropEnabled);

                        // Save the first live frame (that has a valid file and lineno) so we can select it automatically.
                        // This only happens if the stack text is different (a stop point is reached).
                        if (firstLiveFrameLevel == "") {
                            firstLiveFrameLevel    = level_text;
                            firstLiveFrameFile     = QFileInfo(file_text).fileName();
                            firstLiveFrameFullname = fullname_text;
                            firstLiveFrameLine     = line_text;
                        }

                    }else{
                        item->setFlags(Qt::NoItemFlags);
                    }

                    // Add the frame to the tree.
                    stackTreeWidget->addTopLevelItem(item);
                }

                // Automatically bring up the file for the first live frame.
                if (firstLiveFrameLevel != "") {
                    emit selectedFile(firstLiveFrameFile, firstLiveFrameFullname, firstLiveFrameLine.toInt());
                    emit selectedFrame(firstLiveFrameLevel.toInt());
                }
            }

            // Select the first frame level.
            // ??? Perhaps show the current frame level somehow.
            stackTreeWidget->clearSelection();

            QList<QTreeWidgetItem*> matches = stackTreeWidget->findItems("0", Qt::MatchExactly, 0);
            if (matches.size() > 0) {
                stackTreeWidget->setCurrentItem(matches.first());
            }
        }

    }else if (text.startsWith("^done,stack-args=[") && text.endsWith("]")) {
        //qDebug() << text;
        // ^done,stack-args=[
        //     frame={level="0",args=[
        //                            {name="message",value="\"Hello, World!\""}
        //                           ]},
        //     frame={level="1",args=[
        //                            {name="argc",value="1"},
        //                            {name="argv",value="0x7fffffffd5b8"}
        //                           ]}
        // ]
        // "level=\"0\",args=[{name=\"message\",value=\"\\\"Hello, World!\\\"\"}]",
        // "level=\"1\",args=[{name=\"argc\",value=\"1\"},{name=\"argv\",value=\"0x7fffffffd5b8\"}]"
        QStringList frame_list = SDS::parse(text, "frame=", '{', '}', false);

        //qDebug() << frame_list.count() << frame_list;

        for ( const auto& frame_text : frame_list  ) {

            //qDebug() << frame_text;

            QString level_text = SDS::parseFirst(frame_text, "level=", '"', '"', false);
            QString args_text  = SDS::parseFirst(frame_text, "args=",  '[', ']', false);
            int level=level_text.toInt();
            //qDebug() << level_text;
            //qDebug() << args_text;

            QStringList namevalue_list  = SDS::parse(args_text, "",  '{', '}', false);

            // Add the level to the tree.

            qCDebug(LC) << level_text;
            qCDebug(LC) << level;
            QTreeWidgetItem* topItem=stackTreeWidget->topLevelItem(level);
            while(topItem->childCount()>0)
            {
                QTreeWidgetItem* tmpchild=topItem->child(0);
                topItem->removeChild(tmpchild);
            }
            QTreeWidgetItem* levelItem = new QTreeWidgetItem;
            levelItem->setText(1, "参数");
            levelItem->setText(2, "名称");
            levelItem->setText(3, "值");

            topItem->addChild(levelItem);
            // Get the argument names and values for the level.
            for ( const auto& namevalue_text : namevalue_list  ) {

                QString name_text  = SDS::parseFirst(namevalue_text, "name=",  '"', '"', false);
                QString value_text = SDS::parseFirst(namevalue_text, "value=", '"', '"', false);

                QTreeWidgetItem* item = new QTreeWidgetItem;
                item->setText(1, name_text); // Set the name and value. Don't set the level.
                item->setText(2, SDS::filterEscapes(value_text));

                topItem->addChild(item);
            }

            // Expand all items for the level.
            stackTreeWidget->expandItem(topItem);
        }

    }
    else if (text.startsWith("^error,msg=\"No registers.\"")) {
        stackTreeWidget->clear();

    }else{
        // Ignore others.
    }

    stackTreeWidget->resizeColumnToContents(0);
    stackTreeWidget->resizeColumnToContents(1);
    stackTreeWidget->resizeColumnToContents(2);
    stackTreeWidget->resizeColumnToContents(3);
    stackTreeWidget->resizeColumnToContents(4);
    stackTreeWidget->resizeColumnToContents(5);
    stackTreeWidget->resizeColumnToContents(6);

    QApplication::restoreOverrideCursor();
}

void SeerStackFramesBrowserWidget::handleStoppingPointReached () {

    // Stackframes is important. Always do it.
    //
    // Don't do any work if the widget is hidden.
    // if (isHidden()) {
    //     return;
    // }

    refresh();
}

void SeerStackFramesBrowserWidget::refresh () {
    emit refreshStackFrames();
}

void SeerStackFramesBrowserWidget::handleItemDoubleClicked (QTreeWidgetItem* item, int column) {

    Q_UNUSED(column);

    int lineno = item->text(3).toInt();

    //qDebug() << "Emit selectedFile and selectedFrame";

    emit selectedFile(item->text(2), item->text(4), lineno);
    emit selectedFrame(item->text(0).toInt());
}

void SeerStackFramesBrowserWidget::handleItemEntered (QTreeWidgetItem* item, int column) {

    Q_UNUSED(column);

    //qDebug() << item->text(0) << column;

    item->setToolTip(0, item->text(0) + " : " + item->text(1) + " : " + item->text(2) + " : " + item->text(3));

    for (int i=1; i<stackTreeWidget->columnCount(); i++) { // Copy tooltip to other columns.
        item->setToolTip(i, item->toolTip(0));
    }
}

void SeerStackFramesBrowserWidget::showEvent (QShowEvent* event) {

    QWidget::showEvent(event);

    refresh();
}

