#include "double_link.h"
#include "ui_double_link.h"
#include"util.h"
#include <QMouseEvent>
#include <complex>
#include<cmath>
#include<QDebug>
#include<QThread>
#include<QTimer>

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

void Double_link::setVariableName(const QString &name)
{

}

void Double_link::setVariableAddress(const QString &address,int id)
{
    if (address.startsWith("0x")) {

        bool ok = false;

        address.toULong(&ok, 16);

        if (ok == true) {
            variableAddress = address;
        }
        else {
            variableAddress = "not an address";
            return;
        }

    }
    else {
        variableAddress = "not an address";
        return ;
    }
    for(int i=0;i<node_list.length();i++)
    {
        qDebug()<<node_list[i].addr<<endl;
        if(node_list[i].addr==address)
        {
            for(int j=0;j<node_list.length();j++)
                if(node_list[j].var_id==id)
                    node_list[j].var_id=node_list[i].var_id;
                else if(node_list[j].pre==id)
                    node_list[j].pre=node_list[i].var_id;
                else if(node_list[j].next==id)
                    node_list[j].next=node_list[i].var_id;
            return;
        }
    }
    for(int i=0;i<node_list.length();i++)
    {
        if(node_list[i].var_id==id)
        {
            if(address=="0xbaadf00dbaadf00d"||address=="0x0")
            {
                node_list[i].var_id=0;
                return ;
            }
            node_list[i].addr=address;
            _variableId = SDS::createID();
            _memoryId = SDS::createID();
            variableName=node_list[i].name+"."+next_name;
            emit evaluateVariableExpression(_variableId, variableName);
            node_list[i].next=_variableId;
            node_data temp;
            temp.var_id=_variableId;
            temp.name=variableName;
            node_list.push_back(temp);

            _variableId = SDS::createID();
            _memoryId = SDS::createID();
            variableName=node_list[i].name+"."+pre_name;
            emit evaluateVariableExpression(_variableId, variableName);
            node_list[i].pre=_variableId;
            temp.var_id=_variableId;
            temp.name=variableName;
            node_list.push_back(temp);
            break;
        }
    }
}

void Double_link::init()
{
    scene = new QGraphicsScene(ui->graphicsView);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform);
}

void Double_link::draw_line()
{
    QPen pen;
    pen.setWidth(3);
    pen.setStyle(Qt::SolidLine);
    pen.setBrush(QColor(58, 143, 192, 100));
    pen.setCapStyle(Qt::RoundCap);
    pen.setJoinStyle(Qt::RoundJoin);

    node_data this_node;
    for(int i=0;i<node_list.length();i++)
    {
        if(node_list[i].var_id==0)
            continue;
        this_node=node_list[i];
        QGraphicsItemGroup *point = item_list[this_node.var_id].point;
        qDebug() <<this_node.pre<<"**********************"<<item_list[this_node.pre].point<< endl;
        qDebug() <<this_node.next<<"**********************"<< item_list[this_node.next].point<<endl;
        if ((this_node.pre != 0)&&(item_list[this_node.pre].point!=nullptr))
        {
            QGraphicsItemGroup *last_point = item_list[this_node.pre].point;
            QLineF Line(point->pos() + QPointF(0,point->boundingRect().height()*0.75),last_point->pos() + QPointF(last_point->boundingRect().width(), last_point->boundingRect().height()*0.75));
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
            qDebug() <<"pre节点绘制成功**********************"<< endl;
        }
        if ((this_node.next != 0)&&(item_list[this_node.next].point!=nullptr))
        {
            QGraphicsItemGroup *next_point = item_list[this_node.next].point;
            QLineF Line(point->pos() + QPointF(point->boundingRect().width(),point->boundingRect().height()*0.25),next_point->pos() + QPointF(/*next_point->boundingRect().width()*/0, next_point->boundingRect().height()*0.25));
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
            qDebug() <<"next节点绘制成功**********************"<< endl;
        }
    }
}

void Double_link::draw_point(QString var_name,int id,int num)
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
    if(num==0)
        point->setPos(0, 0);
    else
    {
//        qreal wid = point->boundingRect().width();
        point->setPos(num*120, 0);
    }
    item_list[id].point = point;
    scene->addItem(point);
    qDebug() <<"节点绘制成功**********************"<< endl;
}

void Double_link::refresh()
{
    scene->clear();
    node_list.clear();
    for(int i=0;i<2000;i++)
       item_list[i].point=nullptr;
    QString head_name = ui->headEdit->text();
    next_name = ui->nextEdit->text();
    pre_name = ui->frontEdit->text();
    if (head_name == "" || next_name == ""||pre_name=="")
        return;
    _variableId = (SDS::createID()%2000)+1;
    _memoryId = (SDS::createID()%2000)+1;
    variableName = head_name;
    node_data head_node;
    head_node.var_id=_variableId;
    head_node.name=variableName;
    node_list.push_back(head_node);
    emit evaluateVariableExpression(_variableId, head_name);

}


void Double_link::test()
{
}

void Double_link::handleText(const QString &text)
{
    if (text.contains(QRegExp("^([0-9]+)\\^done,value="))) {

        // 10^done,value="1"
        // 11^done,value="0x7fffffffd538"

        QString id_text = text.section('^', 0, 0);
//        qDebug() << text << "**********************" << _variableId << endl;
//        qDebug() << text << "**********************" << id_text.toInt() << endl;
            QStringList words = SDS::filterEscapes(SDS::parseFirst(text, "value=", '"', '"', false)).split(' ', QString::SkipEmptyParts);

            setVariableAddress(words.first(),id_text.toInt());

    }

    else {
        // Ignore anything else.
    }
}

void Double_link::handleStoppingPointReached()
{

    refresh();
}
bool vis[2000];
void Double_link::on_pushButton_clicked()
{
//    refresh();
    scene->clear();
    int j=0;
    for(int i=0;i<node_list.length();i++)
    {
        if(node_list[i].var_id==0)
            continue;

        if(!i&&!vis[node_list[i].var_id])
        {
            qDebug() <<"**********************" << node_list[i].var_id << endl;
            draw_point(node_list[i].name,node_list[i].var_id,0);
                    j++;
        }
        else if(!vis[node_list[i].var_id])
        {
            qDebug() <<"**********************" << node_list[i].var_id << endl;
            draw_point("point"+QString::number(j),node_list[i].var_id,j);
                    j++;
        }
        vis[node_list[i].var_id]=1;

    }
    draw_line();
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

