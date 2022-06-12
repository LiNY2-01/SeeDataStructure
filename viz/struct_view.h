#ifndef STRUCT_VIEW_H
#define STRUCT_VIEW_H

#include <QDialog>
#include <QObject>
#include <QWidget>
#include <QMenu>
#include <QAction>
#include <QMap>
#include<QGraphicsView>
#include<QGraphicsLineItem>
#include <QGraphicsDropShadowEffect>

namespace Ui {
class Struct_view;
}
struct cWindow;
class Struct_view : public QDialog
{
        Q_OBJECT
public:
    explicit Struct_view(QWidget *parent = nullptr);
    ~Struct_view();
public slots:
    void                handleText(const QString& text);
    void                handleStoppingPointReached();
private:
    Ui::Struct_view *ui;
    QGraphicsScene *scene;

    cWindow *d;

    void DrawTree(int x);
    void refresh();
    void reset();
    void getNodePoint(int x,int &rbound,int depth);
    QMap<qulonglong,int >NodeMap;//pair<level,nodenum>
    QMap<int,int>levelMap;
    QStringList NodeInfo;
    QStringList NodeTitle;
    int nodecnt=0;
    int nownode=0;
    int dataget=false;
    QVector<QVector<int>>NodeEdge;
    QVector<int>Nodefa;
    QVector<QPointF > *NodePoint=0;//x,y



    QBrush regBrush = QBrush(QColor(240,248,255));
    QBrush accessBrush = QBrush(QColor(30 ,144, 255));
    QFont nameFont = QFont("Corbel", 13, QFont::Normal, true);
    QFont hintFont = QFont("Corbel", 12);

signals:
    void refreshStackFrames();
protected:
    void mousePressEvent(QMouseEvent *e) Q_DECL_OVERRIDE;
    void mouseReleaseEvent(QMouseEvent *e) Q_DECL_OVERRIDE;
    void mouseMoveEvent(QMouseEvent *e) Q_DECL_OVERRIDE;
};

#endif // STRUCT_VIEW_H
