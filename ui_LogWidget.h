/********************************************************************************
** Form generated from reading UI file 'LogWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGWIDGET_H
#define UI_LOGWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogWidget
{
public:
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QPushButton *clearButton;
    QPushButton *printButton;
    QPushButton *saveButton;
    QCheckBox *wrapTextCheckBox;
    QCheckBox *enableCheckBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *LogWidget)
    {
        if (LogWidget->objectName().isEmpty())
            LogWidget->setObjectName(QString::fromUtf8("LogWidget"));
        LogWidget->resize(615, 361);
        gridLayout = new QGridLayout(LogWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textEdit = new QTextEdit(LogWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(100);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);
        textEdit->setLineWrapMode(QTextEdit::NoWrap);
        textEdit->setReadOnly(false);

        gridLayout->addWidget(textEdit, 0, 0, 6, 1);

        clearButton = new QPushButton(LogWidget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/seer/resources/RelaxLightIcons/edit-clear.svg"), QSize(), QIcon::Normal, QIcon::Off);
        clearButton->setIcon(icon);

        gridLayout->addWidget(clearButton, 0, 1, 1, 1);

        printButton = new QPushButton(LogWidget);
        printButton->setObjectName(QString::fromUtf8("printButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/seer/resources/RelaxLightIcons/document-print.svg"), QSize(), QIcon::Normal, QIcon::Off);
        printButton->setIcon(icon1);

        gridLayout->addWidget(printButton, 1, 1, 1, 1);

        saveButton = new QPushButton(LogWidget);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/seer/resources/RelaxLightIcons/document-save-as.svg"), QSize(), QIcon::Normal, QIcon::Off);
        saveButton->setIcon(icon2);

        gridLayout->addWidget(saveButton, 2, 1, 1, 1);

        wrapTextCheckBox = new QCheckBox(LogWidget);
        wrapTextCheckBox->setObjectName(QString::fromUtf8("wrapTextCheckBox"));

        gridLayout->addWidget(wrapTextCheckBox, 3, 1, 1, 1);

        enableCheckBox = new QCheckBox(LogWidget);
        enableCheckBox->setObjectName(QString::fromUtf8("enableCheckBox"));
        enableCheckBox->setChecked(true);

        gridLayout->addWidget(enableCheckBox, 4, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 188, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 1, 1, 1);


        retranslateUi(LogWidget);

        QMetaObject::connectSlotsByName(LogWidget);
    } // setupUi

    void retranslateUi(QWidget *LogWidget)
    {
        LogWidget->setWindowTitle(QApplication::translate("LogWidget", "Log", nullptr));
        textEdit->setPlaceholderText(QApplication::translate("LogWidget", "[gdb output]", nullptr));
#ifndef QT_NO_TOOLTIP
        clearButton->setToolTip(QApplication::translate("LogWidget", "\346\270\205\351\231\244\350\276\223\345\207\272", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        clearButton->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        clearButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        printButton->setToolTip(QApplication::translate("LogWidget", "\346\211\223\345\215\260\350\276\223\345\207\272", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        printButton->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        printButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        saveButton->setToolTip(QApplication::translate("LogWidget", "\345\260\206\350\276\223\345\207\272\345\206\231\345\205\245\345\210\260\346\226\207\344\273\266", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        saveButton->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        saveButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        wrapTextCheckBox->setToolTip(QApplication::translate("LogWidget", "\345\274\200\345\220\257\350\207\252\345\212\250\346\215\242\350\241\214", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        wrapTextCheckBox->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        wrapTextCheckBox->setText(QApplication::translate("LogWidget", "\350\207\252\345\212\250\346\215\242\350\241\214", nullptr));
#ifndef QT_NO_TOOLTIP
        enableCheckBox->setToolTip(QApplication::translate("LogWidget", "\345\274\200\345\220\257/\345\205\263\351\227\255\350\256\260\345\275\225", nullptr));
#endif // QT_NO_TOOLTIP
        enableCheckBox->setText(QApplication::translate("LogWidget", "\345\274\200\345\220\257\350\256\260\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogWidget: public Ui_LogWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGWIDGET_H
