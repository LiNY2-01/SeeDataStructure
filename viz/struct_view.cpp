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
    ui(new Ui::Struct_view)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setWindowFlags(Qt::FramelessWindowHint);
    QGraphicsDropShadowEffect *effect = new QGraphicsDropShadowEffect;
    effect->setOffset(4,4);
    effect->setColor(QColor(0,0,0,50));
    effect->setBlurRadius(10);
    ui->frame->setGraphicsEffect(effect);
    d = new cWindow(ui->horizontalLayout_2);
    init();
}

Struct_view::~Struct_view()
{
    delete ui;
}

void Struct_view::handleText(const QString &text)
{
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

            QString firstLiveFrameLevel = "";
            QString firstLiveFrameFile = "";
            QString firstLiveFrameFullname = "";
            QString firstLiveFrameLine = "";
            reset();
            for (const auto& frame_text : frame_list) {

                QString level_text = SDS::parseFirst(frame_text, "level=", '"', '"', false);
                QString addr_text = SDS::parseFirst(frame_text, "addr=", '"', '"', false);
                QString func_text = SDS::parseFirst(frame_text, "func=", '"', '"', false);
                QString file_text = SDS::parseFirst(frame_text, "file=", '"', '"', false);
                QString fullname_text = SDS::parseFirst(frame_text, "fullname=", '"', '"', false);
                QString line_text = SDS::parseFirst(frame_text, "line=", '"', '"', false);
                QString arch_text = SDS::parseFirst(frame_text, "arch=", '"', '"', false);

                 qDebug() << level_text << func_text << line_text;
                 f.push_front(func_text);
}}}
    if (text.startsWith("^error,msg=\"No registers.\"")) {

    reset();
    }
else {
// Ignore others.
    }
    refresh();
    QApplication::restoreOverrideCursor();

}

void Struct_view::handleStoppingPointReached()
{
//    emit refreshThreadFrames();
    emit refreshStackFrames();
}

void Struct_view::init()
{
    scene = new QGraphicsScene(ui->graphicsView);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform);
//    refresh();
}

void Struct_view::draw_point(QString frame,bool now,int num)
{
    QPen pen;
    pen.setWidth(3);
    pen.setStyle(Qt::SolidLine);
    pen.setBrush(QColor(58, 143, 192, 100));
    pen.setCapStyle(Qt::RoundCap);
    pen.setJoinStyle(Qt::RoundJoin);

    QGraphicsTextItem* title = new QGraphicsTextItem(frame);
    title->setFont(nameFont);

    QRectF rect = title->boundingRect();
    QGraphicsRectItem* item = new QGraphicsRectItem(rect);
    item->setPen(pen);
    if(now==1)
        item->setBrush(accessBrush);
    else
        item->setBrush(regBrush);
    QGraphicsItemGroup* point = new QGraphicsItemGroup;
    point->addToGroup(item);
    point->addToGroup(title);
    point->setFlags(
        QGraphicsItem::ItemIsSelectable
        | QGraphicsItem::ItemSendsGeometryChanges
    );
    point->setPos(0,num*60);

    scene->addItem(point);
    if(last_level!=NULL)
    {
        QLineF Line(last_level->pos()+QPointF(last_level->boundingRect().width()/2,last_level->boundingRect().height()),point->pos()+QPointF(point->boundingRect().width()/2,0));
        QGraphicsLineItem *l = new QGraphicsLineItem(Line);
        l->setPen(pen);
        scene->addItem(l);
    }
    last_level = point;
}

void Struct_view::refresh()
{
    if(f.length()==0)
        return ;
    if(f.length()==1)
    {
        draw_point(f[f.size() - 1], 1,f.size());
        return ;
    }
    for (int i = 0; i < f.size()-1; i++)
        draw_point(f[i],0,i);
    draw_point(f[f.size() - 1], 1,f.size());
}

void Struct_view::reset()
{
    scene->clear();
    f.clear();
    last_level=NULL;
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
