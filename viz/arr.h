#ifndef ARR_H
#define ARR_H

#include <QDialog>
#include <QMainWindow>
#include<QGraphicsScene>
#include<QWidget>
#include<table.h>
#include <QMenu>
#include <QAction>
#include <QGraphicsDropShadowEffect>
#include<QTreeWidget>

namespace Ui {
class arr;
}
struct cWindow;
class arr : public QDialog
{
    Q_OBJECT

public:
    explicit arr(QWidget *parent = nullptr);
    ~arr();
//    QMenu *rightMenu;
//    QAction *del;
//    void createRightMenu();
    void                setVariableName                     (const QString& name);
    QString             variableName                        () const;
    void                setVariableAddress                  (const QString& address);
    QString             variableAddress                     () const;

private:
    Ui::arr *ui;
    QGraphicsScene *scene;
    cWindow *d;
    void init();

public slots:
    void handleText(const QString& text);
    void on_pushButton_clicked();
    void                handleStoppingPointReached      ();
    void                refresh                         ();
    void                refreshValues                   ();
    void handleDel();
    void handleItemEnter(QTreeWidgetItem* item, int column);
protected:
    void showEvent(QShowEvent* event);

//private slots:
//    void clicked_rightMenu(const QPoint &pos);
//    void var_exist(QString);
//    void add_tree(QString);
//    void del_tree(QString);

signals:
    void                evaluateVariableExpression          (int expressionid, QString expression);
    void                evaluateMemoryExpression (int expressionid, QString address, int count);
    void add_data(QString var_name);
    void get_data(QString var_name);
//    void del_var(QModelIndex);
    void                refreshVariableTrackerNames     ();
    void                refreshVariableTrackerValues    ();
    void                addVariableExpression           (QString expression);
    void                deleteVariableExpressions       (QString expressionids);
protected:
    void mousePressEvent(QMouseEvent *e) Q_DECL_OVERRIDE;
    void mouseReleaseEvent(QMouseEvent *e) Q_DECL_OVERRIDE;
    void mouseMoveEvent(QMouseEvent *e) Q_DECL_OVERRIDE;

};

#endif // ARR_H
