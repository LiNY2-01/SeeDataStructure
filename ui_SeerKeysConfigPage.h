/********************************************************************************
** Form generated from reading UI file 'SeerKeysConfigPage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEERKEYSCONFIGPAGE_H
#define UI_SEERKEYSCONFIGPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SeerKeysConfigPage
{
public:
    QGridLayout *gridLayout_4;
    QTextBrowser *textBrowser;
    QGroupBox *gdbAndEditorKeysGroupBox;
    QGridLayout *gridLayout_3;
    QTableWidget *keysTableWidget;

    void setupUi(QWidget *SeerKeysConfigPage)
    {
        if (SeerKeysConfigPage->objectName().isEmpty())
            SeerKeysConfigPage->setObjectName(QString::fromUtf8("SeerKeysConfigPage"));
        SeerKeysConfigPage->resize(901, 652);
        gridLayout_4 = new QGridLayout(SeerKeysConfigPage);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(-1, 0, -1, 0);
        textBrowser = new QTextBrowser(SeerKeysConfigPage);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(25);
        sizePolicy.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(textBrowser, 1, 0, 1, 1);

        gdbAndEditorKeysGroupBox = new QGroupBox(SeerKeysConfigPage);
        gdbAndEditorKeysGroupBox->setObjectName(QString::fromUtf8("gdbAndEditorKeysGroupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(75);
        sizePolicy1.setHeightForWidth(gdbAndEditorKeysGroupBox->sizePolicy().hasHeightForWidth());
        gdbAndEditorKeysGroupBox->setSizePolicy(sizePolicy1);
        gridLayout_3 = new QGridLayout(gdbAndEditorKeysGroupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        keysTableWidget = new QTableWidget(gdbAndEditorKeysGroupBox);
        if (keysTableWidget->columnCount() < 2)
            keysTableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        keysTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        keysTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        keysTableWidget->setObjectName(QString::fromUtf8("keysTableWidget"));

        gridLayout_3->addWidget(keysTableWidget, 0, 0, 1, 1);


        gridLayout_4->addWidget(gdbAndEditorKeysGroupBox, 0, 0, 1, 1);


        retranslateUi(SeerKeysConfigPage);

        QMetaObject::connectSlotsByName(SeerKeysConfigPage);
    } // setupUi

    void retranslateUi(QWidget *SeerKeysConfigPage)
    {
        SeerKeysConfigPage->setWindowTitle(QApplication::translate("SeerKeysConfigPage", "SeerKeysConfigPage", nullptr));
        textBrowser->setHtml(QApplication::translate("SeerKeysConfigPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Noto Sans'; font-size:10pt; font-weight:600;\">Specify key bindings for important Seer operations.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Noto Sans'; font-size:10pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Noto Sans'; font-size:10pt;\"><b"
                        "r /></p></body></html>", nullptr));
        gdbAndEditorKeysGroupBox->setTitle(QApplication::translate("SeerKeysConfigPage", "Gdb and Editor Keys", nullptr));
        QTableWidgetItem *___qtablewidgetitem = keysTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("SeerKeysConfigPage", "Shortcut", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = keysTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("SeerKeysConfigPage", "Description", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SeerKeysConfigPage: public Ui_SeerKeysConfigPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEERKEYSCONFIGPAGE_H
