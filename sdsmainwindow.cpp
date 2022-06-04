#include "sdsmainwindow.h"
#include "ui_sdsmainwindow.h"

sdsMainWindow::sdsMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::sdsMainWindow)
{
    ui->setupUi(this);
}

sdsMainWindow::~sdsMainWindow()
{
    delete ui;
}


