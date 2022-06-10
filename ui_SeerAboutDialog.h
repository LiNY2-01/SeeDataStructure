/********************************************************************************
** Form generated from reading UI file 'SeerAboutDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEERABOUTDIALOG_H
#define UI_SEERABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_SeerAboutDialogForm
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QTextEdit *textEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SeerAboutDialogForm)
    {
        if (SeerAboutDialogForm->objectName().isEmpty())
            SeerAboutDialogForm->setObjectName(QString::fromUtf8("SeerAboutDialogForm"));
        SeerAboutDialogForm->resize(563, 556);
        gridLayout_2 = new QGridLayout(SeerAboutDialogForm);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(SeerAboutDialogForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFlat(false);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/seer/resources/seer_256x256.png")));
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setFrameShape(QFrame::NoFrame);
        textEdit->setFrameShadow(QFrame::Plain);
        textEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        textEdit->setLineWrapMode(QTextEdit::WidgetWidth);
        textEdit->setReadOnly(true);

        gridLayout->addWidget(textEdit, 1, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(SeerAboutDialogForm);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(SeerAboutDialogForm);
        QObject::connect(buttonBox, SIGNAL(accepted()), SeerAboutDialogForm, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SeerAboutDialogForm, SLOT(reject()));

        QMetaObject::connectSlotsByName(SeerAboutDialogForm);
    } // setupUi

    void retranslateUi(QDialog *SeerAboutDialogForm)
    {
        SeerAboutDialogForm->setWindowTitle(QApplication::translate("SeerAboutDialogForm", "About Seer", nullptr));
        groupBox->setTitle(QString());
        label->setText(QString());
        textEdit->setHtml(QApplication::translate("SeerAboutDialogForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Noto Sans'; font-size:10pt;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SeerAboutDialogForm: public Ui_SeerAboutDialogForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEERABOUTDIALOG_H
