#ifndef SDSMAINWINDOW_H
#define SDSMAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class sdsMainWindow; }
QT_END_NAMESPACE

class sdsMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    sdsMainWindow(QWidget *parent = nullptr);
    ~sdsMainWindow();

private:
    Ui::sdsMainWindow *ui;
};
#endif // SDSMAINWINDOW_H
