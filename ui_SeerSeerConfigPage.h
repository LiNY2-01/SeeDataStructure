/********************************************************************************
** Form generated from reading UI file 'SeerSeerConfigPage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEERSEERCONFIGPAGE_H
#define UI_SEERSEERCONFIGPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SeerSeerConfigPage
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *manualGdbCommandsGroupBox;
    QGridLayout *gridLayout_2;
    QSpinBox *rememberGdbCommandsSpinBox;
    QCheckBox *clearHistoryCheckBox;
    QLabel *rememberGdbCommandsLabel;
    QSpacerItem *horizontalSpacer;
    QGroupBox *windowSizesGroupBox;
    QGridLayout *gridLayout;
    QCheckBox *rememberSizescheckBox;
    QTextBrowser *textBrowser;
    QGroupBox *consoleModeGroupBox;
    QGridLayout *gridLayout_4;
    QRadioButton *minimizedRadioButton;
    QSpacerItem *horizontalSpacer_2;
    QRadioButton *normalRadioButton;
    QRadioButton *hiddenRadioButton;
    QSpinBox *consoleScrollLinesSpinBox;
    QSpacerItem *horizontalSpacer_3;
    QLabel *consoleScrollLinesLabel;
    QButtonGroup *modeButtonGroup;

    void setupUi(QWidget *SeerSeerConfigPage)
    {
        if (SeerSeerConfigPage->objectName().isEmpty())
            SeerSeerConfigPage->setObjectName(QString::fromUtf8("SeerSeerConfigPage"));
        SeerSeerConfigPage->resize(671, 611);
        gridLayout_3 = new QGridLayout(SeerSeerConfigPage);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(-1, 0, -1, 0);
        manualGdbCommandsGroupBox = new QGroupBox(SeerSeerConfigPage);
        manualGdbCommandsGroupBox->setObjectName(QString::fromUtf8("manualGdbCommandsGroupBox"));
        gridLayout_2 = new QGridLayout(manualGdbCommandsGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        rememberGdbCommandsSpinBox = new QSpinBox(manualGdbCommandsGroupBox);
        rememberGdbCommandsSpinBox->setObjectName(QString::fromUtf8("rememberGdbCommandsSpinBox"));

        gridLayout_2->addWidget(rememberGdbCommandsSpinBox, 0, 1, 1, 1);

        clearHistoryCheckBox = new QCheckBox(manualGdbCommandsGroupBox);
        clearHistoryCheckBox->setObjectName(QString::fromUtf8("clearHistoryCheckBox"));

        gridLayout_2->addWidget(clearHistoryCheckBox, 1, 0, 1, 1);

        rememberGdbCommandsLabel = new QLabel(manualGdbCommandsGroupBox);
        rememberGdbCommandsLabel->setObjectName(QString::fromUtf8("rememberGdbCommandsLabel"));

        gridLayout_2->addWidget(rememberGdbCommandsLabel, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 2, 1, 1);


        gridLayout_3->addWidget(manualGdbCommandsGroupBox, 2, 0, 1, 1);

        windowSizesGroupBox = new QGroupBox(SeerSeerConfigPage);
        windowSizesGroupBox->setObjectName(QString::fromUtf8("windowSizesGroupBox"));
        gridLayout = new QGridLayout(windowSizesGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        rememberSizescheckBox = new QCheckBox(windowSizesGroupBox);
        rememberSizescheckBox->setObjectName(QString::fromUtf8("rememberSizescheckBox"));

        gridLayout->addWidget(rememberSizescheckBox, 0, 0, 1, 1);


        gridLayout_3->addWidget(windowSizesGroupBox, 1, 0, 1, 1);

        textBrowser = new QTextBrowser(SeerSeerConfigPage);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        gridLayout_3->addWidget(textBrowser, 3, 0, 1, 1);

        consoleModeGroupBox = new QGroupBox(SeerSeerConfigPage);
        consoleModeGroupBox->setObjectName(QString::fromUtf8("consoleModeGroupBox"));
        gridLayout_4 = new QGridLayout(consoleModeGroupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        minimizedRadioButton = new QRadioButton(consoleModeGroupBox);
        modeButtonGroup = new QButtonGroup(SeerSeerConfigPage);
        modeButtonGroup->setObjectName(QString::fromUtf8("modeButtonGroup"));
        modeButtonGroup->addButton(minimizedRadioButton);
        minimizedRadioButton->setObjectName(QString::fromUtf8("minimizedRadioButton"));

        gridLayout_4->addWidget(minimizedRadioButton, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(218, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 0, 4, 1, 1);

        normalRadioButton = new QRadioButton(consoleModeGroupBox);
        modeButtonGroup->addButton(normalRadioButton);
        normalRadioButton->setObjectName(QString::fromUtf8("normalRadioButton"));

        gridLayout_4->addWidget(normalRadioButton, 0, 0, 1, 1);

        hiddenRadioButton = new QRadioButton(consoleModeGroupBox);
        modeButtonGroup->addButton(hiddenRadioButton);
        hiddenRadioButton->setObjectName(QString::fromUtf8("hiddenRadioButton"));

        gridLayout_4->addWidget(hiddenRadioButton, 2, 0, 1, 1);

        consoleScrollLinesSpinBox = new QSpinBox(consoleModeGroupBox);
        consoleScrollLinesSpinBox->setObjectName(QString::fromUtf8("consoleScrollLinesSpinBox"));
        consoleScrollLinesSpinBox->setMaximum(99999);
        consoleScrollLinesSpinBox->setValue(1000);

        gridLayout_4->addWidget(consoleScrollLinesSpinBox, 0, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        consoleScrollLinesLabel = new QLabel(consoleModeGroupBox);
        consoleScrollLinesLabel->setObjectName(QString::fromUtf8("consoleScrollLinesLabel"));

        gridLayout_4->addWidget(consoleScrollLinesLabel, 0, 2, 1, 1);


        gridLayout_3->addWidget(consoleModeGroupBox, 0, 0, 1, 1);

        windowSizesGroupBox->raise();
        textBrowser->raise();
        consoleModeGroupBox->raise();
        manualGdbCommandsGroupBox->raise();

        retranslateUi(SeerSeerConfigPage);

        QMetaObject::connectSlotsByName(SeerSeerConfigPage);
    } // setupUi

    void retranslateUi(QWidget *SeerSeerConfigPage)
    {
        SeerSeerConfigPage->setWindowTitle(QApplication::translate("SeerSeerConfigPage", "SeerSeerConfigPage", nullptr));
        manualGdbCommandsGroupBox->setTitle(QApplication::translate("SeerSeerConfigPage", "Manual Gdb commands", nullptr));
#ifndef QT_NO_TOOLTIP
        rememberGdbCommandsSpinBox->setToolTip(QApplication::translate("SeerSeerConfigPage", "Number of manual commands to rememvber. 0 means all.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        clearHistoryCheckBox->setToolTip(QApplication::translate("SeerSeerConfigPage", "Clear all manual gdb commands.", nullptr));
#endif // QT_NO_TOOLTIP
        clearHistoryCheckBox->setText(QApplication::translate("SeerSeerConfigPage", "Clear history", nullptr));
        rememberGdbCommandsLabel->setText(QApplication::translate("SeerSeerConfigPage", "Number of manual gdb/mi commands to remember", nullptr));
        windowSizesGroupBox->setTitle(QApplication::translate("SeerSeerConfigPage", "Window sizes", nullptr));
        rememberSizescheckBox->setText(QApplication::translate("SeerSeerConfigPage", "Remember window sizes.", nullptr));
        textBrowser->setHtml(QApplication::translate("SeerSeerConfigPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Specify general settings for the Seer program itself.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">On startup, the Seer Console can be shown normal, minimized, or hidden. Also, the console can limit the number of lines in its scroll history. 0 means all lines.</p>\n"
"<p style=\"-"
                        "qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The window sizes can be remembered if they get changed. On startup, Seer will start with the remembered sizes.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Also, 'N' of the most recent manually entered gdb/mi commands will be remembered. 0 means all.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        consoleModeGroupBox->setTitle(QApplication::translate("SeerSeerConfigPage", "Console mode on startup", nullptr));
#ifndef QT_NO_TOOLTIP
        minimizedRadioButton->setToolTip(QApplication::translate("SeerSeerConfigPage", "The console is shown minimized in the task bar.", nullptr));
#endif // QT_NO_TOOLTIP
        minimizedRadioButton->setText(QApplication::translate("SeerSeerConfigPage", "Minimized", nullptr));
#ifndef QT_NO_TOOLTIP
        normalRadioButton->setToolTip(QApplication::translate("SeerSeerConfigPage", "The console is shown normally.", nullptr));
#endif // QT_NO_TOOLTIP
        normalRadioButton->setText(QApplication::translate("SeerSeerConfigPage", "Normal", nullptr));
#ifndef QT_NO_TOOLTIP
        hiddenRadioButton->setToolTip(QApplication::translate("SeerSeerConfigPage", "The console is totally hidden. Can be reshown with: View->Console->Normal", nullptr));
#endif // QT_NO_TOOLTIP
        hiddenRadioButton->setText(QApplication::translate("SeerSeerConfigPage", "Hidden", nullptr));
#ifndef QT_NO_TOOLTIP
        consoleScrollLinesSpinBox->setToolTip(QApplication::translate("SeerSeerConfigPage", "Maximum number of scroll lines. 0 means unlimited.", nullptr));
#endif // QT_NO_TOOLTIP
        consoleScrollLinesLabel->setText(QApplication::translate("SeerSeerConfigPage", "Number of scroll lines", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SeerSeerConfigPage: public Ui_SeerSeerConfigPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEERSEERCONFIGPAGE_H
