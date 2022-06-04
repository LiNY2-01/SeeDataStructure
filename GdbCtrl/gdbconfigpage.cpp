#include "gdbconfigpage.h"
#include "ui_gdbconfigpage.h"
#include <QtWidgets/QWidget>
#include <QtWidgets/QFileDialog>
#include <QtGlobal>
GdbConfigPage::GdbConfigPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GdbConfigPage)
{
    ui->setupUi(this);

    //connet things;
    QObject::connect(ui->gdbTestToolButton      ,&QToolButton::clicked      ,this,&GdbConfigPage::handleGdbTestToolButton);
    QObject::connect(ui->gdbProgramToolButton   ,&QToolButton::clicked      ,this,&GdbConfigPage::handleGdbProgramToolButton);
}

GdbConfigPage::~GdbConfigPage()
{
    delete ui;
}


QString GdbConfigPage::gdbProgram() const{
    return ui->gdbProgramLineEdit->text();
}

QString GdbConfigPage::gdbArguments() const{
    return ui->gdbArgumentsLineEdit->text();
}

bool GdbConfigPage::gdbAsyncMode() const{
    return ui->gdbAsyncModeCheckBox->isChecked();
}

bool GdbConfigPage::gdbHandleTerminatingException() const{
    return ui->gdbHandleTerminateExceptionCheckBox->isChecked();
}

void GdbConfigPage::setGdbProgram(const QString &program){
    ui->gdbProgramLineEdit->setText(program);
}

void GdbConfigPage::setGdbArguments(const QString &arguments){
    ui->gdbArgumentsLineEdit->setText(arguments);
}

void GdbConfigPage::setGdbAsyncMode(bool flag){
    ui->gdbAsyncModeCheckBox->setChecked(flag);
}

void GdbConfigPage::setGdbHandleTerminatingException(bool flag){
    ui->gdbHandleTerminateExceptionCheckBox->setChecked(flag);
}

void GdbConfigPage::handleGdbProgramToolButton(){
    QString program = QFileDialog::getOpenFileName(this,"选择gdb程序作为你的调试器",gdbProgram(),"",nullptr
                                                   ,QFileDialog::DontUseNativeDialog);
    if (program != ""){
        setGdbProgram(program);
    }

}
void GdbConfigPage::handleGdbTestToolButton(){
    //TODO: 测试gdb运行
}








