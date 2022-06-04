#include "LogWidget.h"
#include "ui_LogWidget.h"
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFileDialog>
#include <QtWidgets/QMessageBox>
#include <QtWidgets/QScrollBar>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintDialog>
#include <QtGui/QFont>
#include <QtCore/QTextStream>
#include <QtCore/QDebug>
LogWidget::LogWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LogWidget)
{
    ui->setupUi(this);
    QFont font;
    font.setFamily("monospace [Consolas]");
    font.setFixedPitch(true);
    font.setStyleHint(QFont::TypeWriter);

    ui->textEdit->setReadOnly(true);
    ui->textEdit->setFont(font);
    ui->textEdit->setLineWrapMode(QTextEdit::NoWrap);   // No wrap
    ui->wrapTextCheckBox->setCheckState(Qt::Unchecked); // No wrap

    // Connect things.
    QObject::connect(ui->clearButton,       &QPushButton::clicked,      this,  &LogWidget::handleClearButton);
    QObject::connect(ui->printButton,       &QPushButton::clicked,      this,  &LogWidget::handlePrintButton);
    QObject::connect(ui->saveButton,        &QPushButton::clicked,      this,  &LogWidget::handleSaveButton);
    QObject::connect(ui->wrapTextCheckBox,  &QCheckBox::clicked,        this,  &LogWidget::handleWrapTextCheckBox);
    QObject::connect(ui->enableCheckBox,    &QCheckBox::clicked,        this,  &LogWidget::handleEnableCheckBox);
}

LogWidget::~LogWidget()
{
    delete ui;
}

void LogWidget::processText(const QString &text){
    ui->textEdit->append(text);
}


bool LogWidget::isLogEnabled() const{
    return ui->enableCheckBox->isChecked();
}

void LogWidget::setLogEnabled(bool flag){
    ui->enableCheckBox->setChecked(flag);
}

void LogWidget::moveToEnd(){
    QTextCursor cursor = ui->textEdit->textCursor();
    ui->textEdit->moveCursor(QTextCursor::End,          QTextCursor::MoveAnchor);
    ui->textEdit->moveCursor(QTextCursor::StartOfBlock, QTextCursor::MoveAnchor);

    ui->textEdit->verticalScrollBar()->setValue(ui->textEdit->verticalScrollBar()->maximum());
}

void LogWidget::handleText(const QString& text){
    if(isLogEnabled()==false)return;
    processText(text);
    moveToEnd();
}

void LogWidget::handleClearButton(){
    ui->textEdit->clear();
}

void LogWidget::handlePrintButton(){
    QPrinter printer;
    QPrintDialog*  dig=new QPrintDialog(&printer,this);
    if(dig->exec()!=QDialog::Accepted)return ;
    QTextDocument * doc=ui->textEdit->document();
    doc->print(&printer);
}

void LogWidget::handleSaveButton() {

    QFileDialog dialog(this, "Seer log file", "./", "Logs (*.log);;Text files (*.txt);;All files (*.*)");
    dialog.setOptions(QFileDialog::DontUseNativeDialog);
    dialog.setAcceptMode(QFileDialog::AcceptSave);
    dialog.setFileMode(QFileDialog::AnyFile);
    dialog.setDefaultSuffix("log");
    dialog.selectFile("gdboutput.log");

    if (dialog.exec() != QDialog::Accepted) {
        return;
    }

    QStringList files = dialog.selectedFiles();

    if (files.size() == 0) {
        return;
    }

    if (files.size() > 1) {
        QMessageBox::critical(this, tr("Error"), tr("Select only 1 file."));
        return;
    }

    QFile file(files[0]);

    if (file.open(QIODevice::ReadWrite)) {
        QTextStream stream(&file);
        stream << ui->textEdit->toPlainText();
        file.flush();
        file.close();

    }else{
        QMessageBox::critical(this, tr("Error"), tr("Cannot save log to file."));
        return;
    }
}

void LogWidget::handleWrapTextCheckBox(){
    if (ui->wrapTextCheckBox->checkState() == Qt::Unchecked) {
        ui->textEdit->setLineWrapMode(QTextEdit::NoWrap);       // No wrap
    }else{
        ui->textEdit->setLineWrapMode(QTextEdit::WidgetWidth);  // Wrap at end of widget
    }
}

void LogWidget::handleEnableCheckBox(){
    emit logEnabledChanged(ui->enableCheckBox->isChecked());
}
