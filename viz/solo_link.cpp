#include "solo_link.h"
#include "ui_solo_link.h"
#include"util.h"
#include<QDebug>
#include<QMessageBox>
#include <complex>
#include<cmath>

struct cWindow {
cWindow(QLayout *contentWidget) : contentWidget(contentWidget) {}

QLayout *contentWidget;
QPoint mousePressedPosition;
QPoint windowPositionAsDrag;
};

Solo_link::Solo_link(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Solo_link)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setWindowFlags(Qt::FramelessWindowHint);
    QGraphicsDropShadowEffect *effect = new QGraphicsDropShadowEffect;
    effect->setOffset(4,4);
    effect->setColor(QColor(0,0,0,50));
    effect->setBlurRadius(10);
    ui->frame->setGraphicsEffect(effect);
    d = new cWindow(ui->gridLayout);
    init();
}

Solo_link::~Solo_link()
{
    delete ui;
}

void Solo_link::setVariableName(const QString &name)
{

}

void Solo_link::setVariableAddress(const QString &address)
{
    if (address.startsWith("0x")) {

        bool ok = false;

        address.toULong(&ok, 16);

        if (ok == true) {
            variableAddress = address;
        }
        else {
            variableAddress = "not an address";
        }

    }
    else {
        variableAddress = "not an address";
    }
    if(!num)
        draw_point(variableName);
    else draw_point("point"+QString::number(num));
    num++;
    _variableId = SDS::createID();
    _memoryId = SDS::createID();
    variableName=variableName+"."+link;
    qDebug() <<variableName << "**********************" << _variableId << endl;
    emit evaluateVariableExpression(_variableId, variableName);

//    refresh();
}
void Solo_link::handleStoppingPointReached()
{
    refresh();
}
void Solo_link::init()
{
    scene = new QGraphicsScene(ui->graphicsView);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform);
    refresh();
}

void Solo_link::draw_point(QString var_nem)
{
    QPen pen;
    pen.setWidth(3);
    pen.setStyle(Qt::SolidLine);
    pen.setBrush(QColor(58, 143, 192, 100));
    pen.setCapStyle(Qt::RoundCap);
    pen.setJoinStyle(Qt::RoundJoin);

    QGraphicsTextItem* title = new QGraphicsTextItem(var_nem);
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

void Solo_link::refresh()
{
//    QList<QString>f;
//    f.append("head");
//    f.append("point1");
//    f.append("point2");
//    f.append("point3");
//    for (int i = 0; i < f.size() ; i++)
//        draw_point(f[i], i);
//    emit evaluateMemoryExpression(_memoryId, variableAddress,1);
    scene->clear();
    num=0;
    last_point=NULL;
    QString head_name = ui->headEdit->text();
    QString link_name = ui->linkEdit->text();
    if(head_name==""||link_name=="")
        return ;
    link = link_name;
    _variableId = SDS::createID();
    _memoryId = SDS::createID();
    variableName = head_name;
    setVariableName(head_name);
    emit evaluateVariableExpression(_variableId, head_name);
}
struct a
{
    QString var_name;
    QString data;
    QString address;
};
//void Solo_link::handle_data(QString str)
//{
//        a head;
//        head.var_name=str;
//        head.data="0";
//        head.address="0x7ffff";
//        draw_point(head.var_name);
////        if(head.address!="NULL")
////            emit get_data_by_address(head.address);

//}

void Solo_link::handleText(const QString &text)
{
    if (text.contains(QRegExp("^([0-9]+)\\^done,value="))) {

        // 10^done,value="1"
        // 11^done,value="0x7fffffffd538"

        QString id_text = text.section('^', 0, 0);
        //qDebug() << text << "**********************" << _variableId << endl;
        //qDebug() << text << "**********************" << id_text.toInt() << endl;
                if (id_text.toInt() == _variableId) {

        QStringList words = SDS::filterEscapes(SDS::parseFirst(text, "value=", '"', '"', false)).split(' ', QString::SkipEmptyParts);

        setVariableAddress(words.first());
                }

    }

    else {
        // Ignore anything else.
    }
}

void Solo_link::on_pushButton_clicked()
{
    scene->clear();
    last_point=NULL;
    num=0;
    QString head_name = ui->headEdit->text();
    QString link_name = ui->linkEdit->text();
    link = link_name;
    _variableId = SDS::createID();
    _memoryId = SDS::createID();
    variableName = head_name;
    setVariableName(head_name);
    emit evaluateVariableExpression(_variableId, head_name);
}

//void Solo_link::test(QString str)
//{
//    handle_data(str);
//}








void Solo_link::mousePressEvent(QMouseEvent *e) {
d->mousePressedPosition = e->globalPos();
d->windowPositionAsDrag = pos();
}

void Solo_link::mouseReleaseEvent(QMouseEvent *e) {
Q_UNUSED(e)
d->mousePressedPosition = QPoint();
}

void Solo_link::mouseMoveEvent(QMouseEvent *e) {
if (!d->mousePressedPosition.isNull()) {
QPoint delta = e->globalPos() - d->mousePressedPosition;
move(d->windowPositionAsDrag + delta);
    }
}

