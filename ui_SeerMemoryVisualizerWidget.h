/********************************************************************************
** Form generated from reading UI file 'SeerMemoryVisualizerWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEERMEMORYVISUALIZERWIDGET_H
#define UI_SEERMEMORYVISUALIZERWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include <SeerHexWidget.h>

QT_BEGIN_NAMESPACE

class Ui_SeerMemoryVisualizerWidgetForm
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *variableNameLineEdit;
    QLineEdit *variableAddressLineEdit;
    QLineEdit *memoryLengthLineEdit;
    QComboBox *memoryDisplayFormatComboBox;
    QComboBox *charDisplayFormatComboBox;
    QSpinBox *columnCountSpinBox;
    QToolButton *printToolButton;
    QToolButton *saveToolButton;
    QToolButton *refreshToolButton;
    SeerHexWidget *memoryHexEditor;

    void setupUi(QWidget *SeerMemoryVisualizerWidgetForm)
    {
        if (SeerMemoryVisualizerWidgetForm->objectName().isEmpty())
            SeerMemoryVisualizerWidgetForm->setObjectName(QString::fromUtf8("SeerMemoryVisualizerWidgetForm"));
        SeerMemoryVisualizerWidgetForm->resize(834, 657);
        gridLayout = new QGridLayout(SeerMemoryVisualizerWidgetForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        variableNameLineEdit = new QLineEdit(SeerMemoryVisualizerWidgetForm);
        variableNameLineEdit->setObjectName(QString::fromUtf8("variableNameLineEdit"));
        variableNameLineEdit->setClearButtonEnabled(false);

        horizontalLayout->addWidget(variableNameLineEdit);

        variableAddressLineEdit = new QLineEdit(SeerMemoryVisualizerWidgetForm);
        variableAddressLineEdit->setObjectName(QString::fromUtf8("variableAddressLineEdit"));
        variableAddressLineEdit->setReadOnly(true);

        horizontalLayout->addWidget(variableAddressLineEdit);

        memoryLengthLineEdit = new QLineEdit(SeerMemoryVisualizerWidgetForm);
        memoryLengthLineEdit->setObjectName(QString::fromUtf8("memoryLengthLineEdit"));
        memoryLengthLineEdit->setClearButtonEnabled(false);

        horizontalLayout->addWidget(memoryLengthLineEdit);

        memoryDisplayFormatComboBox = new QComboBox(SeerMemoryVisualizerWidgetForm);
        memoryDisplayFormatComboBox->addItem(QString());
        memoryDisplayFormatComboBox->addItem(QString());
        memoryDisplayFormatComboBox->addItem(QString());
        memoryDisplayFormatComboBox->addItem(QString());
        memoryDisplayFormatComboBox->setObjectName(QString::fromUtf8("memoryDisplayFormatComboBox"));

        horizontalLayout->addWidget(memoryDisplayFormatComboBox);

        charDisplayFormatComboBox = new QComboBox(SeerMemoryVisualizerWidgetForm);
        charDisplayFormatComboBox->addItem(QString());
        charDisplayFormatComboBox->addItem(QString());
        charDisplayFormatComboBox->setObjectName(QString::fromUtf8("charDisplayFormatComboBox"));

        horizontalLayout->addWidget(charDisplayFormatComboBox);

        columnCountSpinBox = new QSpinBox(SeerMemoryVisualizerWidgetForm);
        columnCountSpinBox->setObjectName(QString::fromUtf8("columnCountSpinBox"));
        columnCountSpinBox->setMinimum(1);
        columnCountSpinBox->setValue(10);

        horizontalLayout->addWidget(columnCountSpinBox);

        printToolButton = new QToolButton(SeerMemoryVisualizerWidgetForm);
        printToolButton->setObjectName(QString::fromUtf8("printToolButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/RelaxLightIcons/document-print.svg"), QSize(), QIcon::Normal, QIcon::Off);
        printToolButton->setIcon(icon);

        horizontalLayout->addWidget(printToolButton);

        saveToolButton = new QToolButton(SeerMemoryVisualizerWidgetForm);
        saveToolButton->setObjectName(QString::fromUtf8("saveToolButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/RelaxLightIcons/document-save-as.svg"), QSize(), QIcon::Normal, QIcon::Off);
        saveToolButton->setIcon(icon1);

        horizontalLayout->addWidget(saveToolButton);

        refreshToolButton = new QToolButton(SeerMemoryVisualizerWidgetForm);
        refreshToolButton->setObjectName(QString::fromUtf8("refreshToolButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resources/RelaxLightIcons/view-refresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        refreshToolButton->setIcon(icon2);

        horizontalLayout->addWidget(refreshToolButton);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        memoryHexEditor = new SeerHexWidget(SeerMemoryVisualizerWidgetForm);
        memoryHexEditor->setObjectName(QString::fromUtf8("memoryHexEditor"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(100);
        sizePolicy.setHeightForWidth(memoryHexEditor->sizePolicy().hasHeightForWidth());
        memoryHexEditor->setSizePolicy(sizePolicy);

        gridLayout->addWidget(memoryHexEditor, 1, 0, 1, 1);


        retranslateUi(SeerMemoryVisualizerWidgetForm);

        QMetaObject::connectSlotsByName(SeerMemoryVisualizerWidgetForm);
    } // setupUi

    void retranslateUi(QWidget *SeerMemoryVisualizerWidgetForm)
    {
        SeerMemoryVisualizerWidgetForm->setWindowTitle(QApplication::translate("SeerMemoryVisualizerWidgetForm", "Form", nullptr));
#ifndef QT_NO_TOOLTIP
        variableNameLineEdit->setToolTip(QApplication::translate("SeerMemoryVisualizerWidgetForm", "Variable name or expression.", nullptr));
#endif // QT_NO_TOOLTIP
        variableNameLineEdit->setPlaceholderText(QApplication::translate("SeerMemoryVisualizerWidgetForm", "variable name", nullptr));
#ifndef QT_NO_TOOLTIP
        variableAddressLineEdit->setToolTip(QApplication::translate("SeerMemoryVisualizerWidgetForm", "Variable address.", nullptr));
#endif // QT_NO_TOOLTIP
        variableAddressLineEdit->setPlaceholderText(QApplication::translate("SeerMemoryVisualizerWidgetForm", "variable address", nullptr));
#ifndef QT_NO_TOOLTIP
        memoryLengthLineEdit->setToolTip(QApplication::translate("SeerMemoryVisualizerWidgetForm", "Number of bytes to display.", nullptr));
#endif // QT_NO_TOOLTIP
        memoryLengthLineEdit->setInputMask(QString());
        memoryLengthLineEdit->setPlaceholderText(QApplication::translate("SeerMemoryVisualizerWidgetForm", "# Bytes", nullptr));
        memoryDisplayFormatComboBox->setItemText(0, QApplication::translate("SeerMemoryVisualizerWidgetForm", "hex", nullptr));
        memoryDisplayFormatComboBox->setItemText(1, QApplication::translate("SeerMemoryVisualizerWidgetForm", "octal", nullptr));
        memoryDisplayFormatComboBox->setItemText(2, QApplication::translate("SeerMemoryVisualizerWidgetForm", "binary", nullptr));
        memoryDisplayFormatComboBox->setItemText(3, QApplication::translate("SeerMemoryVisualizerWidgetForm", "decimal", nullptr));

#ifndef QT_NO_TOOLTIP
        memoryDisplayFormatComboBox->setToolTip(QApplication::translate("SeerMemoryVisualizerWidgetForm", "Memory display format.", nullptr));
#endif // QT_NO_TOOLTIP
        charDisplayFormatComboBox->setItemText(0, QApplication::translate("SeerMemoryVisualizerWidgetForm", "ascii", nullptr));
        charDisplayFormatComboBox->setItemText(1, QApplication::translate("SeerMemoryVisualizerWidgetForm", "ebcdic", nullptr));

#ifndef QT_NO_TOOLTIP
        charDisplayFormatComboBox->setToolTip(QApplication::translate("SeerMemoryVisualizerWidgetForm", "Character display format.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        columnCountSpinBox->setToolTip(QApplication::translate("SeerMemoryVisualizerWidgetForm", "Number of columns in display.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        printToolButton->setToolTip(QApplication::translate("SeerMemoryVisualizerWidgetForm", "Print the display.", nullptr));
#endif // QT_NO_TOOLTIP
        printToolButton->setText(QApplication::translate("SeerMemoryVisualizerWidgetForm", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        saveToolButton->setToolTip(QApplication::translate("SeerMemoryVisualizerWidgetForm", "Save the display to a file.", nullptr));
#endif // QT_NO_TOOLTIP
        saveToolButton->setText(QApplication::translate("SeerMemoryVisualizerWidgetForm", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        refreshToolButton->setToolTip(QApplication::translate("SeerMemoryVisualizerWidgetForm", "Refresh the display.", nullptr));
#endif // QT_NO_TOOLTIP
        refreshToolButton->setText(QApplication::translate("SeerMemoryVisualizerWidgetForm", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SeerMemoryVisualizerWidgetForm: public Ui_SeerMemoryVisualizerWidgetForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEERMEMORYVISUALIZERWIDGET_H
