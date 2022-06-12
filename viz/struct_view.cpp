#include "struct_view.h"
#include "ui_struct_view.h"
#include"util.h"
#include<QGraphicsRectItem>
#include<QGraphicsTextItem>
#include<QGraphicsItemGroup>
#include<QString>
#include <QMouseEvent>
#include<QVector>
#include<QDebug>

struct cWindow {
    cWindow(QLayout *contentWidget) : contentWidget(contentWidget) {}

    QLayout *contentWidget;
    QPoint mousePressedPosition;
    QPoint windowPositionAsDrag;
};

Struct_view::Struct_view(QWidget *parent) :
        QDialog(parent),
        ui(new Ui::Struct_view) {
    ui->setupUi(this);

    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setWindowFlags(Qt::FramelessWindowHint);

    QGraphicsDropShadowEffect *effect = new QGraphicsDropShadowEffect;

    effect->setOffset(4, 4);
    effect->setColor(QColor(0, 0, 0, 50));
    effect->setBlurRadius(10);
    ui->frame->setGraphicsEffect(effect);

    d = new cWindow(ui->horizontalLayout_2);
    scene = new QGraphicsScene(ui->graphicsView);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform);

    NodeMap.clear();
    NodeEdge.clear();
    NodeTitle.clear();
    NodeInfo.clear();
}

Struct_view::~Struct_view() {
    delete ui;
}

void Struct_view::handleText(const QString &text) {
    QApplication::setOverrideCursor(Qt::BusyCursor);

    if (text.startsWith("^done,stack=[") && text.endsWith("]")) {
        // ^done,stack=[
        //     frame={level=\"0\",addr=\"0x0000000000400d72\",func=\"function1\",file=\"function1.cpp\",fullname=\"/home/erniep/Development/Peak/src/Seer/helloworld/function1.cpp\",line=\"7\",arch=\"i386:x86-64\"},
        //     frame={level=\"1\",addr=\"0x0000000000400cc3\",func=\"main\",file=\"helloworld.cpp\",fullname=\"/home/erniep/Development/Peak/src/Seer/helloworld/helloworld.cpp\",line=\"14\",arch=\"i386:x86-64\"}
        // ]

        //qDebug() << text;

        // If we are simply moving up and down the stack (via frame-select) then the text won't change.
        // If it is different, reconstruct the tree. Select the first frame.

        QString stack_text = SDS::parseFirst(text, "stack=", '[', ']', false);

        if (stack_text != "") {

            // Parse through the frame list and set the current lines that are in the frame list.
            QStringList frame_list = SDS::parse(text, "frame=", '{', '}', false);
            int fa=-1;
            for (QStringList::iterator frame_text = frame_list.end()-1; frame_text != frame_list.begin();frame_text--) {

                QString level_text = SDS::parseFirst(*frame_text, "level=", '"', '"', false);
                QString addr_text = SDS::parseFirst(*frame_text, "addr=", '"', '"', false);
                QString func_text = SDS::parseFirst(*frame_text, "func=", '"', '"', false);
                QString file_text = SDS::parseFirst(*frame_text, "file=", '"', '"', false);
                QString fullname_text = SDS::parseFirst(*frame_text, "fullname=", '"', '"', false);
//                QString line_text = SDS::parseFirst(frame_text, "line=", '"', '"', false);
//                QString arch_text = SDS::parseFirst(frame_text, "arch=", '"', '"', false);

                int level_num=level_text.toInt();

                qulonglong addr_num=addr_text.toULongLong(0,16);
                if(!NodeMap.contains(addr_num))
                {

                    NodeMap[addr_num]=nodecnt;
                    QVector<int>e;

                    NodeEdge.append(e);
                    if(fa!=-1){
                    NodeEdge[fa].append(nodecnt);
                    }
                    NodeTitle.append(func_text);
                    QString tmpinfo=  "addr="       +addr_text
                                   +"\nfile="       +file_text
                                   +"\nfullname="   +fullname_text;
                    NodeInfo.append(tmpinfo);
                    Nodefa.append(fa);
                    nodecnt++;
                }

                fa=NodeMap[addr_num];
                levelMap[level_num]=fa;
                if(level_num==0)
                {
                    nownode=fa;
                }
                qDebug() << level_text << func_text ;

            }
            dataget=1;
        }
    }
    else if (text.startsWith("^done,stack-args=[") && text.endsWith("]") && dataget==1) {
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

            //qDebug() << level_text;
            //qDebug() << args_text;

            QStringList namevalue_list  = SDS::parse(args_text, "",  '{', '}', false);

            int level_num=level_text.toInt();
            int nodenum=levelMap[level_num];
            QString *str=&NodeTitle[nodenum];
            str->append("(");
            // Get the argument names and values for the level.
            for ( const auto& namevalue_text : namevalue_list  ) {

                QString name_text  = SDS::parseFirst(namevalue_text, "name=",  '"', '"', false);
                QString value_text = SDS::parseFirst(namevalue_text, "value=", '"', '"', false);
                str->append(name_text + "=" + value_text + ",");
            }
            str->append(")");
            if(dataget==1)
            {
                dataget=2;
            }
        }

    }
    else if (text.startsWith("^error,msg=\"No registers.\"")) {
        reset();
    }
    else {
// Ignore others.
    }
    if(dataget==2){
    refresh();
    dataget=0;
    }
    QApplication::restoreOverrideCursor();

}

void Struct_view::handleStoppingPointReached() {
//    emit refreshThreadFrames();
    emit refreshStackFrames();
}



void Struct_view::DrawTree(int x) {
    QPen pen;
    pen.setWidth(3);
    pen.setStyle(Qt::SolidLine);
    pen.setBrush(QColor(58, 143, 192, 100));
    pen.setCapStyle(Qt::RoundCap);
    pen.setJoinStyle(Qt::RoundJoin);

    QGraphicsTextItem *title = new QGraphicsTextItem();
    title->setFont(nameFont);
    title->setPlainText(NodeTitle[x]);

    QRectF rect = title->boundingRect();
    QGraphicsRectItem *item = new QGraphicsRectItem(rect);
    item->setPen(pen);
    item->setToolTip(NodeInfo[x]);
    if (nownode == x)
        item->setBrush(accessBrush);
    else
        item->setBrush(regBrush);
    QGraphicsItemGroup *point = new QGraphicsItemGroup;
    point->addToGroup(item);
    point->addToGroup(title);
    point->setFlags(
            QGraphicsItem::ItemIsSelectable
            | QGraphicsItem::ItemSendsGeometryChanges
    );

    point->setPos((*NodePoint)[x]);
    scene->addItem(point);

//    if (last_level != NULL) {
//        QLineF Line(last_level->pos() +
//                    QPointF(last_level->boundingRect().width() / 2, last_level->boundingRect().height()),
//                    point->pos() + QPointF(point->boundingRect().width() / 2, 0));
//        QGraphicsLineItem *l = new QGraphicsLineItem(Line);
//        l->setPen(pen);
//        scene->addItem(l);
//    }
//    last_level = point;
    for(auto to: NodeEdge[x])
    {
        QLineF Line((*NodePoint)[x],
                    (*NodePoint)[to]);
    }
}

void Struct_view::refresh() {
    int rbound=0;
    NodePoint=new QVector<QPointF >(nodecnt);
    getNodePoint(0,rbound,1);
    scene->clear();
    for (int i=1;i<=nodecnt;i++)
        DrawTree(i);
}
void Struct_view::getNodePoint(int x,int &rbound,int depth)
{
    int l=rbound;
    for(auto to: NodeEdge[x])
    {
        getNodePoint(to,rbound,depth+1);
    }
    if(NodeEdge[x].size())
    {
        (*NodePoint)[x]=QPoint((l+rbound)>>1,60*depth);
        rbound+=0;
    }
    else
    {
//        int wid=NodeTitle[x];
        (*NodePoint)[x]=QPoint(rbound+100,60*depth);
        rbound+=100;
    }

}
void Struct_view::reset() {
    scene->clear();

}

void Struct_view::mousePressEvent(QMouseEvent *e) {
    d->mousePressedPosition = e->globalPos();
    d->windowPositionAsDrag = pos();
}

void Struct_view::mouseReleaseEvent(QMouseEvent *e) {
    Q_UNUSED(e)
    d->mousePressedPosition = QPoint();
}

void Struct_view::mouseMoveEvent(QMouseEvent *e) {
    if (!d->mousePressedPosition.isNull()) {
        QPoint delta = e->globalPos() - d->mousePressedPosition;
        move(d->windowPositionAsDrag + delta);

    }
}
