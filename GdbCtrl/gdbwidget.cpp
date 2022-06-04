#include "gdbwidget.h"
#include "ui_gdbwidget.h"

GdbWidget::GdbWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GdbWidget)
{
    ui->setupUi(this);
}

GdbWidget::~GdbWidget()
{
    delete ui;
}
