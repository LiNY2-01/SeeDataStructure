#ifndef DOUBLE_LINK_H
#define DOUBLE_LINK_H

#include <QDialog>
#include <QAction>
#include <QGraphicsDropShadowEffect>
#include<QGraphicsScene>
#include<QGraphicsView>
#include<QGraphicsLineItem>

namespace Ui {
class Double_link;
}
struct cWindow;

class Double_link : public QDialog
{
    Q_OBJECT

public:
    explicit Double_link(QWidget *parent = nullptr);
    ~Double_link();
    void                setVariableName(const QString& name);
    QString             variableName;
    void                setVariableAddress(const QString& address,int id);
    QString             variableAddress;
    QString             pre_name;
    QString             next_name;
private:
    struct node_data{
        int var_id=0;
        int pre=0;
        int next=0;
        QString name="";
        QString addr="";
    };
    struct item_data{
    QGraphicsItemGroup *point=nullptr;
    };
    Ui::Double_link *ui;
    QGraphicsScene* scene;
    cWindow *d;
    void init();
    void draw_line();
    void draw_point(QString,int id,int num);
    void refresh();
    void test();

public:
    QList<node_data>node_list;
    item_data item_list[2000];

    QBrush regBrush = QBrush(QColor(240, 248, 255));
    QBrush accessBrush = QBrush(QColor(30, 144, 255));
    QFont nameFont = QFont("Corbel", 13, QFont::Normal, true);
signals:
    void                evaluateVariableExpression(int expressionid, QString expression);
    void                evaluateMemoryExpression(int expressionid, QString address, int count);

public slots:
    void handleText(const QString& text);
    void handleStoppingPointReached();
protected:
    void mousePressEvent(QMouseEvent *e) Q_DECL_OVERRIDE;
    void mouseReleaseEvent(QMouseEvent *e) Q_DECL_OVERRIDE;
    void mouseMoveEvent(QMouseEvent *e) Q_DECL_OVERRIDE;
private slots:
    void on_pushButton_clicked();

private:
    int                 _variableId;
    int                 _memoryId;

};

#endif // DOUBLE_LINK_H
