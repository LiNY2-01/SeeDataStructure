#ifndef SOLO_LINK_H
#define SOLO_LINK_H

#include <QDialog>
#include<QGraphicsScene>
#include<QGraphicsView>
#include<QGraphicsLineItem>
#include<QWidget>
#include<table.h>
#include <QMenu>
#include <QAction>
#include <QGraphicsDropShadowEffect>

namespace Ui {
class Solo_link;
}
struct cWindow;
class Solo_link : public QDialog
{
    Q_OBJECT

public:
    explicit Solo_link(QWidget *parent = nullptr);
    ~Solo_link();
    void                setVariableName(const QString& name);
    QString             variableName;
    void                setVariableAddress(const QString& address);
    QString             variableAddress;
private:
    Ui::Solo_link *ui;
    QGraphicsScene* scene;
    QGraphicsItemGroup* last_point = NULL;
    cWindow* d;
    QString head;
    QString link;
    int num;
    void init();
    void draw_point(QString);
    void refresh();

    QBrush regBrush = QBrush(QColor(240, 248, 255));
    QBrush accessBrush = QBrush(QColor(30, 144, 255 ));
    QFont nameFont = QFont("Corbel", 13, QFont::Normal, true);

signals:
    void                evaluateVariableExpression(int expressionid, QString expression);
    void                evaluateMemoryExpression(int expressionid, QString address, int count);

public slots:
    void handleText(const QString& text);
    void handleStoppingPointReached();
private slots:
    void on_pushButton_clicked();

private:
    int                 _variableId;
    int                 _memoryId;

protected:
    void mousePressEvent(QMouseEvent* e) Q_DECL_OVERRIDE;
    void mouseReleaseEvent(QMouseEvent* e) Q_DECL_OVERRIDE;
    void mouseMoveEvent(QMouseEvent* e) Q_DECL_OVERRIDE;
};

#endif // SOLO_LINK_H
