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
    void                setVariableAddress(const QString& address);
    QString             variableAddress;
private:
    Ui::Double_link *ui;
    QGraphicsScene* scene;
    QGraphicsItemGroup* last_point = NULL;
    cWindow *d;

    void init();
    void draw_point(QString);
    void refresh();
    void test();

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
};

#endif // DOUBLE_LINK_H
