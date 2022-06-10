/********************************************************************************
** Form generated from reading UI file 'SeerEditorConfigPage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEEREDITORCONFIGPAGE_H
#define UI_SEEREDITORCONFIGPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include <SeerEditorWidget.h>

QT_BEGIN_NAMESPACE

class Ui_SeerEditorConfigPage
{
public:
    QGridLayout *gridLayout;
    SeerEditorWidget *editorWidget;
    QTableWidget *highlighterTableWidget;
    QHBoxLayout *horizontalLayout;
    QFontComboBox *fontNameComboBox;
    QComboBox *fontSizeComboBox;
    QToolButton *fontDialogButton;
    QTextBrowser *helpTextBrowser;
    QCheckBox *highlighterEnabledCheckBox;

    void setupUi(QWidget *SeerEditorConfigPage)
    {
        if (SeerEditorConfigPage->objectName().isEmpty())
            SeerEditorConfigPage->setObjectName(QString::fromUtf8("SeerEditorConfigPage"));
        SeerEditorConfigPage->resize(729, 472);
        gridLayout = new QGridLayout(SeerEditorConfigPage);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 0, -1, 0);
        editorWidget = new SeerEditorWidget(SeerEditorConfigPage);
        editorWidget->setObjectName(QString::fromUtf8("editorWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(50);
        sizePolicy.setHeightForWidth(editorWidget->sizePolicy().hasHeightForWidth());
        editorWidget->setSizePolicy(sizePolicy);

        gridLayout->addWidget(editorWidget, 2, 0, 1, 1);

        highlighterTableWidget = new QTableWidget(SeerEditorConfigPage);
        if (highlighterTableWidget->columnCount() < 4)
            highlighterTableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        highlighterTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        highlighterTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        highlighterTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        highlighterTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        highlighterTableWidget->setObjectName(QString::fromUtf8("highlighterTableWidget"));
        sizePolicy.setHeightForWidth(highlighterTableWidget->sizePolicy().hasHeightForWidth());
        highlighterTableWidget->setSizePolicy(sizePolicy);
        highlighterTableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        highlighterTableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        highlighterTableWidget->setCornerButtonEnabled(false);
        highlighterTableWidget->horizontalHeader()->setStretchLastSection(false);
        highlighterTableWidget->verticalHeader()->setVisible(true);
        highlighterTableWidget->verticalHeader()->setStretchLastSection(false);

        gridLayout->addWidget(highlighterTableWidget, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        fontNameComboBox = new QFontComboBox(SeerEditorConfigPage);
        fontNameComboBox->setObjectName(QString::fromUtf8("fontNameComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(50);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(fontNameComboBox->sizePolicy().hasHeightForWidth());
        fontNameComboBox->setSizePolicy(sizePolicy1);
        fontNameComboBox->setFontFilters(QFontComboBox::MonospacedFonts);

        horizontalLayout->addWidget(fontNameComboBox);

        fontSizeComboBox = new QComboBox(SeerEditorConfigPage);
        fontSizeComboBox->setObjectName(QString::fromUtf8("fontSizeComboBox"));

        horizontalLayout->addWidget(fontSizeComboBox);

        fontDialogButton = new QToolButton(SeerEditorConfigPage);
        fontDialogButton->setObjectName(QString::fromUtf8("fontDialogButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/font.png"), QSize(), QIcon::Normal, QIcon::Off);
        fontDialogButton->setIcon(icon);

        horizontalLayout->addWidget(fontDialogButton);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        helpTextBrowser = new QTextBrowser(SeerEditorConfigPage);
        helpTextBrowser->setObjectName(QString::fromUtf8("helpTextBrowser"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(25);
        sizePolicy2.setHeightForWidth(helpTextBrowser->sizePolicy().hasHeightForWidth());
        helpTextBrowser->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(helpTextBrowser, 4, 0, 1, 1);

        highlighterEnabledCheckBox = new QCheckBox(SeerEditorConfigPage);
        highlighterEnabledCheckBox->setObjectName(QString::fromUtf8("highlighterEnabledCheckBox"));

        gridLayout->addWidget(highlighterEnabledCheckBox, 1, 0, 1, 1);


        retranslateUi(SeerEditorConfigPage);

        QMetaObject::connectSlotsByName(SeerEditorConfigPage);
    } // setupUi

    void retranslateUi(QWidget *SeerEditorConfigPage)
    {
        SeerEditorConfigPage->setWindowTitle(QApplication::translate("SeerEditorConfigPage", "SeerEditorConfigPage", nullptr));
        QTableWidgetItem *___qtablewidgetitem = highlighterTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("SeerEditorConfigPage", "Weight", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = highlighterTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("SeerEditorConfigPage", "Style", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = highlighterTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("SeerEditorConfigPage", "Foreground", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = highlighterTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("SeerEditorConfigPage", "Background", nullptr));
        fontDialogButton->setText(QString());
        helpTextBrowser->setHtml(QApplication::translate("SeerEditorConfigPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Noto Sans'; font-size:10pt; font-weight:600;\">Specify font and highlighting colors for the code editor.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Noto Sans'; font-size:10pt;\">These formats apply only when highlighting is enabled and if the file is C or C++.</span></p>\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1"
                        ";\"><li style=\" font-family:'Noto Sans'; font-size:10pt;\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Class</li>\n"
"<li style=\" font-family:'Noto Sans'; font-size:10pt;\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Comment</li>\n"
"<li style=\" font-family:'Noto Sans'; font-size:10pt;\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Multiline Comment</li>\n"
"<li style=\" font-family:'Noto Sans'; font-size:10pt;\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Function</li>\n"
"<li style=\" font-family:'Noto Sans'; font-size:10pt;\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Keyword</li>\n"
"<li style=\" font-family:'Noto Sans'; font-size:10pt;\" s"
                        "tyle=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Quotation</li></ul>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Noto Sans'; font-size:10pt;\">These formats apply for any type of file. </span></p>\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" font-family:'Noto Sans'; font-size:10pt;\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Margin</li>\n"
"<li style=\" font-family:'Noto Sans'; font-size:10pt;\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Text</li>\n"
"<li style=\" font-family:'Noto Sans'; font-size:10pt;\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text"
                        "-indent:0px;\">Current Line</li></ul>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Noto Sans'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Noto Sans'; font-size:10pt;\"><br /></span></p></body></html>", nullptr));
#ifndef QT_NO_TOOLTIP
        highlighterEnabledCheckBox->setToolTip(QApplication::translate("SeerEditorConfigPage", "Enable or disable highlighting for C/C++ files.", nullptr));
#endif // QT_NO_TOOLTIP
        highlighterEnabledCheckBox->setText(QApplication::translate("SeerEditorConfigPage", "Enable C/C++ highlighter.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SeerEditorConfigPage: public Ui_SeerEditorConfigPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEEREDITORCONFIGPAGE_H
