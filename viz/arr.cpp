#include "arr.h"
#include "ui_arr.h"
#include "util.h"
#include "gdbwidget.h"
#include<QGraphicsRectItem>
#include<QGraphicsTextItem>
#include<QString>
#include<table.h>
#include <QObject>
#include <QWidget>
#include<QTableView>
#include<QHeaderView>
#include<QLabel>
#include<QVBoxLayout>
#include<QStandardItemModel>
#include <QMenu>
#include <QAction>
#include<QTreeWidgetItem>
#include<QTreeWidget>
#include<QMessageBox>
#include<QDebug>
#include<QTimer>
struct cWindow {
cWindow(QWidget *contentWidget) : contentWidget(contentWidget) {}

QWidget *contentWidget;
QPoint mousePressedPosition;
QPoint windowPositionAsDrag;
};


arr::arr(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::arr)
{
    ui->setupUi(this);
    init();

}

arr::~arr()
{
    delete ui;
}

void arr::init()
{
//    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
//    ui->tableView->setContextMenuPolicy(Qt::CustomContextMenu);
//    createRightMenu();
    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setWindowFlags(Qt::FramelessWindowHint);
    QGraphicsDropShadowEffect *effect = new QGraphicsDropShadowEffect;
    effect->setOffset(4,4);
    effect->setColor(QColor(0,0,0,50));
    effect->setBlurRadius(10);
    ui->frame->setGraphicsEffect(effect);
    d = new cWindow(ui->layoutWidget);
//    ui->treeWidget->setColumnHidden(0, true);
//    connect(ui->tableView,SIGNAL(customContextMenuRequested(QPoint)),this,SLOT(clicked_rightMenu(QPoint)));
    connect(this,SIGNAL(add_data(QString)),ui->tableView,SLOT(add_table(QString)));
//    connect(ui->tableView, SIGNAL(var_exist(QString)),this , SLOT(var_exist(QString)));
//    connect(this,SIGNAL(del_var(QModelIndex)),ui->tableView,SLOT(del_var(QModelIndex)));
//    connect(ui->tableView, SIGNAL(add_tree(QString)),this , SLOT(add_tree(QString)));
//    connect(ui->tableView, SIGNAL(del_tree(QString)),this , SLOT(del_tree(QString)));

}
void arr::handleText(const QString& text)
{
//    qDebug()<<"********************handleText***********************"<<endl;
    QApplication::setOverrideCursor(Qt::BusyCursor);


    if (text.startsWith("^done,DataExpressionTable={") && text.endsWith("}")) {

        qDebug() << text;
        // "^done,DataExpressionTable={
        //          entry={id=\"1\",expression=\"s\"},
        //          entry={id=\"2\",expression=\"v\"},
        //          entry={id=\"4\",expression=\"l\"},
        //          entry={id=\"5\",expression=\"m\"}
        //      }"

        ui->treeWidget->clear();

        QString frame_text = SDS::parseFirst(text, "DataExpressionTable=", '{', '}', false);

        QStringList entries_list = SDS::parse(frame_text, "entry=", '{', '}', false);

        for (int i=0; i<entries_list.size(); i++) {

            QString entry_text = entries_list[i];

            QString id_text         = SDS::parseFirst(entry_text, "id=",         '"', '"', false);
            QString expression_text = SDS::parseFirst(entry_text, "expression=", '"', '"', false);

            QTreeWidgetItem* topItem = new QTreeWidgetItem;
            topItem->setText(0, id_text);
            topItem->setText(1, expression_text);
            topItem->setText(2, "");

            ui->treeWidget->addTopLevelItem(topItem);
            emit add_data(expression_text);
        }

    }else if (text.startsWith("^done,DataExpressionAdded={") && text.endsWith("}")) {

        //qDebug() << "Refresh";

        // "^done,DataExpressionAdded={
        //          id=\"5\",
        //          expression=\"m\"
        //      }"

        QString frame_text = SDS::parseFirst(text, "DataExpressionAdded=", '{', '}', false);

        QString id_text         = SDS::parseFirst(frame_text, "id=",         '"', '"', false);
        QString expression_text = SDS::parseFirst(frame_text, "expression=", '"', '"', false);

        QTreeWidgetItem* topItem = new QTreeWidgetItem;
        topItem->setText(0, id_text);
        topItem->setText(1, expression_text);
        topItem->setText(2, "");

        ui->treeWidget->addTopLevelItem(topItem);


    }else if (text.startsWith("^done,DataExpressionDeleted={") && text.endsWith("}")) {

        //qDebug() << text;

        // "^done,DataExpressionDeleted={
        //          entry={id=\"1\",expression=\"s\"},
        //          entry={id=\"3\",expression=\"vb\"}
        //      }"

        QString frame_text = SDS::parseFirst(text, "DataExpressionDeleted=", '{', '}', false);

        QStringList entries_list = SDS::parse(frame_text, "entry=", '{', '}', false);

        for (int i=0; i<entries_list.size(); i++) {

            QString entry_text = entries_list[i];

            QString id_text         = SDS::parseFirst(entry_text, "id=",         '"', '"', false);
            QString expression_text = SDS::parseFirst(entry_text, "expression=", '"', '"', false);

            QList<QTreeWidgetItem*> matches = ui->treeWidget->findItems(id_text, Qt::MatchExactly, 0);

            qDeleteAll(matches);
        }

    }else if (text.contains(QRegExp("^([0-9]+)\\^done,value="))) {

        //qDebug() << text;

        // "6^done,value=\"\\\"abc\\\"\""

        QString id_text    = text.section('^', 0,0);
        QString value_text = SDS::parseFirst(text, "value=", '"', '"', false);

        QList<QTreeWidgetItem*> matches = ui->treeWidget->findItems(id_text, Qt::MatchExactly, 0);

        if (matches.size() > 0) {
            matches.first()->setText(2, SDS::filterEscapes(value_text));
        }

    }else if (text.contains(QRegExp("^([0-9]+)\\^error,msg="))) {

        //qDebug() << text;

        // "1^error,msg=\"No symbol \\\"j\\\" in current context.\""

        QString id_text  = text.section('^', 0,0);
        QString msg_text = SDS::parseFirst(text, "msg=", '"', '"', false);

        QList<QTreeWidgetItem*> matches = ui->treeWidget->findItems(id_text, Qt::MatchExactly, 0);

        if (matches.size() > 0) {
            matches.first()->setText(2, SDS::filterEscapes(msg_text));
        }

    }else if (text.startsWith("^error,msg=\"No registers.\"")) {
        ui->treeWidget->clear();

    }else{
        // Ignore others.
    }

//    ui->treeWidget->resizeColumnToContents(0);
//    ui->treeWidget->resizeColumnToContents(1);
//    ui->treeWidget->resizeColumnToContents(2);

    QApplication::restoreOverrideCursor();
}

//void arr::clicked_rightMenu(const QPoint &pos)
//{
//    rightMenu->exec(QCursor::pos());
//    qDebug()<<pos << endl;
//    QModelIndex index = ui->tableView->indexAt((pos));
//    emit del_var(index);
//}

//void arr::createRightMenu()
//{
//    rightMenu = new QMenu;
//    del = new QAction("删除",this);
//    rightMenu->addAction(del);
//}

void arr::setVariableName(const QString &name)
{

}

void arr::setVariableAddress(const QString &address)
{

}

void arr::on_pushButton_clicked()
{

    QString var = ui->lineEdit->text();
    ui->lineEdit->clear();
    if (var != "") {
        emit get_data(var);
        QTimer::singleShot(200, this, &arr::refresh);
    }

}

void arr::handleStoppingPointReached()
{
    refresh();
}

void arr::refresh()
{
    emit refreshVariableTrackerNames();
    emit refreshVariableTrackerValues();
}

void arr::refreshValues()
{
    emit refreshVariableTrackerValues();
}


void arr::handleDel()
{
    QList<QTreeWidgetItem*> items = ui->treeWidget->selectedItems();

    // Build a string that is a list of variable ids.
    QString variableids;

    QList<QTreeWidgetItem*>::iterator i;
    for (i = items.begin(); i != items.end(); ++i) {

        if (i != items.begin()) {
            variableids += " ";
        }

        variableids += (*i)->text(0);
    }

    // Don't do anything if the list of variables is empty.
    if (variableids == "") {
        return;
    }

    // Send the signal.
    emit deleteVariableExpressions(variableids);
}

void arr::handleItemEnter(QTreeWidgetItem* item, int column)
{
    Q_UNUSED(column);

    item->setToolTip(0, item->text(1) + " : " + item->text(2));

    for (int i=1; i<ui->treeWidget->columnCount(); i++) { // Copy tooltip to other columns.
        item->setToolTip(i, item->toolTip(0));
    }
}

void arr::showEvent(QShowEvent *event)
{
    QWidget::showEvent(event);

    refresh();
}
void arr::mousePressEvent(QMouseEvent *e) {
d->mousePressedPosition = e->globalPos();
d->windowPositionAsDrag = pos();
}

void arr::mouseReleaseEvent(QMouseEvent *e) {
Q_UNUSED(e)
d->mousePressedPosition = QPoint();
}

void arr::mouseMoveEvent(QMouseEvent *e) {
if (!d->mousePressedPosition.isNull()) {
QPoint delta = e->globalPos() - d->mousePressedPosition;
move(d->windowPositionAsDrag + delta);
    }
}
