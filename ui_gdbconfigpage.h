/********************************************************************************
** Form generated from reading UI file 'gdbconfigpage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GDBCONFIGPAGE_H
#define UI_GDBCONFIGPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GdbConfigPage
{
public:
    QGroupBox *gdbGroupBox;
    QGridLayout *gridLayout_2;
    QCheckBox *gdbAsyncModeCheckBox;
    QLineEdit *gdbProgramLineEdit;
    QToolButton *gdbProgramToolButton;
    QLabel *gdbArgumentsLabel;
    QLineEdit *gdbArgumentsLineEdit;
    QLabel *gdbProgramLabel;
    QCheckBox *gdbHandleTerminateExceptionCheckBox;
    QToolButton *gdbTestToolButton;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *GdbConfigPage)
    {
        if (GdbConfigPage->objectName().isEmpty())
            GdbConfigPage->setObjectName(QString::fromUtf8("GdbConfigPage"));
        GdbConfigPage->resize(860, 466);
        gdbGroupBox = new QGroupBox(GdbConfigPage);
        gdbGroupBox->setObjectName(QString::fromUtf8("gdbGroupBox"));
        gdbGroupBox->setGeometry(QRect(10, 10, 839, 148));
        gridLayout_2 = new QGridLayout(gdbGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gdbAsyncModeCheckBox = new QCheckBox(gdbGroupBox);
        gdbAsyncModeCheckBox->setObjectName(QString::fromUtf8("gdbAsyncModeCheckBox"));

        gridLayout_2->addWidget(gdbAsyncModeCheckBox, 2, 0, 1, 1);

        gdbProgramLineEdit = new QLineEdit(gdbGroupBox);
        gdbProgramLineEdit->setObjectName(QString::fromUtf8("gdbProgramLineEdit"));

        gridLayout_2->addWidget(gdbProgramLineEdit, 0, 2, 1, 1);

        gdbProgramToolButton = new QToolButton(gdbGroupBox);
        gdbProgramToolButton->setObjectName(QString::fromUtf8("gdbProgramToolButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/RelaxLightIcons/document-open.svg"), QSize(), QIcon::Normal, QIcon::Off);
        gdbProgramToolButton->setIcon(icon);

        gridLayout_2->addWidget(gdbProgramToolButton, 0, 3, 1, 1);

        gdbArgumentsLabel = new QLabel(gdbGroupBox);
        gdbArgumentsLabel->setObjectName(QString::fromUtf8("gdbArgumentsLabel"));

        gridLayout_2->addWidget(gdbArgumentsLabel, 1, 0, 1, 1);

        gdbArgumentsLineEdit = new QLineEdit(gdbGroupBox);
        gdbArgumentsLineEdit->setObjectName(QString::fromUtf8("gdbArgumentsLineEdit"));

        gridLayout_2->addWidget(gdbArgumentsLineEdit, 1, 2, 1, 1);

        gdbProgramLabel = new QLabel(gdbGroupBox);
        gdbProgramLabel->setObjectName(QString::fromUtf8("gdbProgramLabel"));

        gridLayout_2->addWidget(gdbProgramLabel, 0, 0, 1, 1);

        gdbHandleTerminateExceptionCheckBox = new QCheckBox(gdbGroupBox);
        gdbHandleTerminateExceptionCheckBox->setObjectName(QString::fromUtf8("gdbHandleTerminateExceptionCheckBox"));

        gridLayout_2->addWidget(gdbHandleTerminateExceptionCheckBox, 2, 2, 1, 1);

        gdbTestToolButton = new QToolButton(gdbGroupBox);
        gdbTestToolButton->setObjectName(QString::fromUtf8("gdbTestToolButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(10);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gdbTestToolButton->sizePolicy().hasHeightForWidth());
        gdbTestToolButton->setSizePolicy(sizePolicy);
        gdbTestToolButton->setSizeIncrement(QSize(0, 0));
        gdbTestToolButton->setMouseTracking(false);
        gdbTestToolButton->setLayoutDirection(Qt::LeftToRight);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/icons/test.svg"), QSize(), QIcon::Normal, QIcon::Off);
        gdbTestToolButton->setIcon(icon1);
        gdbTestToolButton->setCheckable(false);
        gdbTestToolButton->setChecked(false);

        gridLayout_2->addWidget(gdbTestToolButton, 1, 3, 1, 1);

        textBrowser = new QTextBrowser(GdbConfigPage);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 170, 839, 281));

        retranslateUi(GdbConfigPage);

        QMetaObject::connectSlotsByName(GdbConfigPage);
    } // setupUi

    void retranslateUi(QWidget *GdbConfigPage)
    {
        GdbConfigPage->setWindowTitle(QApplication::translate("GdbConfigPage", "sdsGdbConfigPage", nullptr));
        gdbGroupBox->setTitle(QApplication::translate("GdbConfigPage", "Gdb\350\256\276\347\275\256", nullptr));
#ifndef QT_NO_TOOLTIP
        gdbAsyncModeCheckBox->setToolTip(QApplication::translate("GdbConfigPage", "Turn gdb 'async' mode on or off.", nullptr));
#endif // QT_NO_TOOLTIP
        gdbAsyncModeCheckBox->setText(QApplication::translate("GdbConfigPage", "GDB asycn \346\250\241\345\274\217", nullptr));
#ifndef QT_NO_TOOLTIP
        gdbProgramLineEdit->setToolTip(QApplication::translate("GdbConfigPage", "gdb\350\260\203\350\257\225\345\231\250\345\217\257\346\211\247\350\241\214\346\226\207\344\273\266\347\232\204\344\275\215\347\275\256", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        gdbProgramToolButton->setToolTip(QApplication::translate("GdbConfigPage", "\351\200\211\346\213\251gdb\344\275\215\347\275\256", nullptr));
#endif // QT_NO_TOOLTIP
        gdbProgramToolButton->setText(QString());
        gdbArgumentsLabel->setText(QApplication::translate("GdbConfigPage", "GDB \350\277\220\350\241\214\345\217\202\346\225\260", nullptr));
#ifndef QT_NO_TOOLTIP
        gdbArgumentsLineEdit->setToolTip(QApplication::translate("GdbConfigPage", "\344\274\240\351\200\222\347\273\231gdb\350\260\203\350\257\225\345\231\250\347\232\204\345\217\202\346\225\260", nullptr));
#endif // QT_NO_TOOLTIP
        gdbProgramLabel->setText(QApplication::translate("GdbConfigPage", "GDB \347\250\213\345\272\217\344\275\215\347\275\256", nullptr));
#ifndef QT_NO_TOOLTIP
        gdbHandleTerminateExceptionCheckBox->setToolTip(QApplication::translate("GdbConfigPage", "Handle terminating exceptions when calling functions.", nullptr));
#endif // QT_NO_TOOLTIP
        gdbHandleTerminateExceptionCheckBox->setText(QApplication::translate("GdbConfigPage", "\345\244\204\347\220\206 terminating-exception", nullptr));
#ifndef QT_NO_TOOLTIP
        gdbTestToolButton->setToolTip(QApplication::translate("GdbConfigPage", "\346\265\213\350\257\225gdb\346\230\257\345\220\246\346\255\243\345\270\270", nullptr));
#endif // QT_NO_TOOLTIP
        gdbTestToolButton->setText(QApplication::translate("GdbConfigPage", "\346\265\213\350\257\225GDB", nullptr));
        textBrowser->setHtml(QApplication::translate("GdbConfigPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">\345\234\250\350\277\231\351\207\214\346\214\207\345\256\232\344\275\240\347\232\204gdb\345\217\257\346\211\247\350\241\214\346\226\207\344\273\266\347\233\256\345\275\225\357\274\214\345\271\266\346\214\207\345\256\232\345\217\202\346\225\260\343\200\202</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Noto Sans'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; m"
                        "argin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Noto Sans'; font-size:10pt;\">\346\234\254\351\241\271\347\233\256\344\276\235\350\265\226\344\272\216gdb\344\270\255\345\206\205\347\275\256\347\232\204&quot;mi&quot;\350\247\243\351\207\212\345\231\250. </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Noto Sans'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Noto Sans'; font-size:10pt;\">Async\357\274\214\344\271\237\345\260\261\346\230\257\345\274\202\346\255\245\346\250\241\345\274\217\345\205\201\350\256\270\346\211\200\346\234\211\347\232\204gdb\345\212\250\344\275\234\345\234\250\345\220\216\345\217\260\350\277\220\350\241\214\343\200\202\350\277\231\346\240\267\344\275\240\345\260\261\345\217\257\344"
                        "\273\245\346\211\223\346\226\255\347\250\213\345\272\217\347\232\204\350\277\220\350\241\214\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Noto Sans'; font-size:10pt;\">\345\275\223\350\257\267\346\261\202gdb\350\260\203\347\224\250\347\250\213\345\272\217\344\270\255\347\232\204\345\207\275\346\225\260\346\227\266\357\274\214\345\217\257\350\203\275\344\274\232\345\217\221\347\224\237\347\273\210\346\255\242\345\274\202\345\270\270terminating-exception\343\200\202\345\246\202\346\236\234\345\207\275\346\225\260\346\212\233\345\207\272\345\274\202\345\270\270\357\274\214gdb\345\217\257\344\273\245\351\200\232\350\277\207\346\212\221\345\210\266\345\274\202\345\270\270\346\210\226\345\205\201\350\256\270\347\250\213\345\272\217\347\273\210\346\255\242\346\235\245\345\244\204\347\220\206\345\256\203\343\200\202\345\217\257\344\273\245\345\217\202\350\200\203:</span></p>\n"
"<p style=\""
                        "-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Noto Sans'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'ui-monospace,SFMono-Regular,SF Mono,Menlo,Consolas,Liberation Mono,monospace'; font-size:10pt; color:#24292f; background-color:transparent;\">    unwind-on-terminating-exception on|off</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'ui-monospace,SFMono-Regular,SF Mono,Menlo,Consolas,Liberation Mono,monospace'; font-size:10pt; color:#24292f;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'ui-monospace,SFMono-Regular,SF Mono,Menlo,Consolas,L"
                        "iberation Mono,monospace'; font-size:10pt; color:#24292f; background-color:transparent;\">\347\202\271\345\207\273\346\265\213\350\257\225\346\214\211\351\222\256</span><img src=\":/resources/icons/test.svg\" width=\"20\" height=\"20\" /><span style=\" font-family:'ui-monospace,SFMono-Regular,SF Mono,Menlo,Consolas,Liberation Mono,monospace'; font-size:10pt; color:#24292f; background-color:transparent;\">\346\265\213\350\257\225\346\202\250\346\214\207\345\256\232\347\232\204\345\217\202\346\225\260\346\230\257\345\220\246\350\203\275\346\255\243\347\241\256\345\220\257\345\212\250gdb</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GdbConfigPage: public Ui_GdbConfigPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GDBCONFIGPAGE_H
