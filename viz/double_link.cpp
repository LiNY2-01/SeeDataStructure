#include "double_link.h"
#include "ui_double_link.h"
#include"util.h"
#include <QMouseEvent>
#include <complex>
#include<cmath>
#include <QDebug>
struct cWindow {
cWindow(QLayout *contentWidget) : contentWidget(contentWidget) {}

QLayout *contentWidget;
QPoint mousePressedPosition;
QPoint windowPositionAsDrag;
};

Double_link::Double_link(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Double_link)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setWindowFlags(Qt::FramelessWindowHint);

    d = new cWindow(ui->gridLayout);
    init();
}

Double_link::~Double_link()
{
    delete ui;
}

void Double_link::init()
{
    scene = new QGraphicsScene(ui->graphicsView);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform);
    refresh();
    test();
}

void Double_link::draw_point(QString var_name)
{
    QPen pen;
    pen.setWidth(3);
    pen.setStyle(Qt::SolidLine);
    pen.setBrush(QColor(58, 143, 192, 100));
    pen.setCapStyle(Qt::RoundCap);
    pen.setJoinStyle(Qt::RoundJoin);

    QGraphicsTextItem* title = new QGraphicsTextItem(var_name);
    title->setFont(nameFont);

    QRectF rect = title->boundingRect();
    QGraphicsRectItem* item = new QGraphicsRectItem(rect);
    item->setPen(pen);
    item->setBrush(regBrush);
    QGraphicsItemGroup* point = new QGraphicsItemGroup;
    point->addToGroup(item);
    point->addToGroup(title);
    point->setFlags(
        QGraphicsItem::ItemIsSelectable
        | QGraphicsItem::ItemSendsGeometryChanges
    );
    if(last_point==NULL)
        point->setPos(0, 0);
    else
    {
        qreal wid = last_point->boundingRect().width();
        point->setPos(last_point->pos().rx()+wid*2, 0);
    }

    scene->addItem(point);
    if (last_point != NULL)
    {
        QLineF Line(last_point->pos() + QPointF(last_point->boundingRect().width(), last_point->boundingRect().height()/2), point->pos() + QPointF(0,point->boundingRect().height()/2));
        QGraphicsLineItem* l = new QGraphicsLineItem(Line);
        double PI = 3.14;
        int arrowLength=10;
        double angle = ::acos(Line.dx() / Line.length());
        QPointF arrowP1 = Line.p2()- QPointF(sin(angle+PI/3)*arrowLength,cos(angle+PI/3)*arrowLength);
        QPointF arrowP2 = Line.p2() - QPointF(sin(angle+PI - PI/3)*arrowLength,cos(angle+PI-PI/3)*arrowLength);
        QLineF a1(Line.p2(),arrowP1);
        QLineF a2(Line.p2(),arrowP2);
        QGraphicsLineItem* l1 = new QGraphicsLineItem(a1);
        QGraphicsLineItem* l2 = new QGraphicsLineItem(a2);
        l->setPen(pen);
        l1->setPen(pen);
        l2->setPen(pen);
        scene->addItem(l);
        scene->addItem(l1);
        scene->addItem(l2);
    }
    last_point = point;
}

void Double_link::refresh()
{
//    scene->clear();
//    num = 0;
//    last_point = NULL;
//    QString head_name = ui->headEdit->text();
//    QString next_name = ui->nextEdit->text();
//    QString pre_name = ui->frontEdit->text();
//    if (head_name == "" || next_name == ""||pre_name=="")
//        return;
//    link = link_name;
//    _variableId = SDS::createID();
//    _memoryId = SDS::createID();
//    variableName = head_name;
//    setVariableName(head_name);
//    emit evaluateVariableExpression(_variableId, head_name);

}

struct a
{
    QString var_name;
    QString data;
    QString address;
};
//void Double_link::handle_data(QString)
//{
//    a head;
//    head.var_name="head";
//    head.data="0";
//    head.address="0x7ffff";
//    draw_point(head.var_name);
//    if(head.address!="NULL")
//        emit get_data_by_address(head.address);
//}





void Double_link::test()
{
    for(int i=0;i<=10;i++)
    {
        a head;
        head.var_name="function";
        head.data="0";
        head.address="0x7ffff";
        draw_point(head.var_name);
    }

}

void Double_link::handleText(const QString &text)
{
//    if (text.contains(QRegExp("^([0-9]+)\\^done,value="))) {

//        // 10^done,value="1"
//        // 11^done,value="0x7fffffffd538"

//        QString id_text = text.section('^', 0, 0);
////        qDebug() << text << "**********************" << _variableId << endl;
//        qDebug() << text << "**********************" << id_text.toInt() << endl;
//        if (id_text.toInt() == _variableId) {

//            QStringList words = SDS::filterEscapes(SDS::parseFirst(text, "value=", '"', '"', false)).split(' ', QString::SkipEmptyParts);

//            setVariableAddress(words.first());
//        }

//    }

//    else {
//        // Ignore anything else.
//    }
}

void Double_link::handleStoppingPointReached()
{
    refresh();
}






void Double_link::mousePressEvent(QMouseEvent *e) {
d->mousePressedPosition = e->globalPos();
d->windowPositionAsDrag = pos();
}

void Double_link::mouseReleaseEvent(QMouseEvent *e) {
Q_UNUSED(e)
d->mousePressedPosition = QPoint();
}

void Double_link::mouseMoveEvent(QMouseEvent *e) {
if (!d->mousePressedPosition.isNull()) {
QPoint delta = e->globalPos() - d->mousePressedPosition;
move(d->windowPositionAsDrag + delta);
    }
}
