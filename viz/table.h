#ifndef TABLE_H
#define TABLE_H

#include <QObject>
#include <QWidget>
#include<QTableView>
#include<QLabel>
#include<QVBoxLayout>
#include<QStandardItemModel>
#include <QMenu>
#include <QContextMenuEvent>

class Table : public QTableView
{
    Q_OBJECT
public:
    Table(QWidget *parent = nullptr);
    QStandardItemModel* model;

    void                setVariableName                     (const QString& name);
    QString             variableName                        ;
    void                setVariableAddress                  (const QString& address);
    QString             variableAddress                     ;

private:
    int num=0;
    QList<QString>var_list;
    void refresh();
//    void contextmenuevent(QContextMenuEvent *rc);
signals:
    void var_exist(QString s);
    void add_tree(QString s);
    void del_tree(QString s);
signals:
    void                evaluateVariableExpression          (int expressionid, QString expression);
    void                evaluateMemoryExpression            (int expressionid, QString address, int count);
private slots:
    void del_var(QModelIndex);
public slots:
    void add_table(QString var_name);
    void handleText(const QString& text);
private:
    int                 _variableId;
    int                 _memoryId;
};

#endif // TABLE_H
