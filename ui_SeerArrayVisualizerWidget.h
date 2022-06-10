/********************************************************************************
** Form generated from reading UI file 'SeerArrayVisualizerWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEERARRAYVISUALIZERWIDGET_H
#define UI_SEERARRAYVISUALIZERWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <SeerArrayWidget.h>
#include "QZoomChartView.h"

QT_BEGIN_NAMESPACE

class Ui_SeerArrayVisualizerWidgetForm
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_1;
    QLineEdit *variableNameLineEdit;
    QLineEdit *variableAddressLineEdit;
    QLineEdit *arrayLengthLineEdit;
    QLineEdit *arrayOffsetLineEdit;
    QLineEdit *arrayStrideLineEdit;
    QComboBox *arrayDisplayFormatComboBox;
    QToolButton *refreshToolButton;
    QSplitter *splitter;
    SeerArrayWidget *arrayTableWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QZoomChartView *arrayChartView;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *titleLineEdit;
    QFrame *line_1;
    QRadioButton *lineRadioButton;
    QRadioButton *splineRadioButton;
    QRadioButton *scatterRadioButton;
    QFrame *line_2;
    QCheckBox *pointsCheckBox;
    QCheckBox *labelsCheckBox;
    QButtonGroup *lineTypeButtonGroup;

    void setupUi(QWidget *SeerArrayVisualizerWidgetForm)
    {
        if (SeerArrayVisualizerWidgetForm->objectName().isEmpty())
            SeerArrayVisualizerWidgetForm->setObjectName(QString::fromUtf8("SeerArrayVisualizerWidgetForm"));
        SeerArrayVisualizerWidgetForm->resize(967, 773);
        gridLayout = new QGridLayout(SeerArrayVisualizerWidgetForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_1 = new QHBoxLayout();
        horizontalLayout_1->setObjectName(QString::fromUtf8("horizontalLayout_1"));
        variableNameLineEdit = new QLineEdit(SeerArrayVisualizerWidgetForm);
        variableNameLineEdit->setObjectName(QString::fromUtf8("variableNameLineEdit"));
        variableNameLineEdit->setClearButtonEnabled(true);

        horizontalLayout_1->addWidget(variableNameLineEdit);

        variableAddressLineEdit = new QLineEdit(SeerArrayVisualizerWidgetForm);
        variableAddressLineEdit->setObjectName(QString::fromUtf8("variableAddressLineEdit"));
        variableAddressLineEdit->setReadOnly(true);
        variableAddressLineEdit->setClearButtonEnabled(false);

        horizontalLayout_1->addWidget(variableAddressLineEdit);

        arrayLengthLineEdit = new QLineEdit(SeerArrayVisualizerWidgetForm);
        arrayLengthLineEdit->setObjectName(QString::fromUtf8("arrayLengthLineEdit"));
        arrayLengthLineEdit->setClearButtonEnabled(true);

        horizontalLayout_1->addWidget(arrayLengthLineEdit);

        arrayOffsetLineEdit = new QLineEdit(SeerArrayVisualizerWidgetForm);
        arrayOffsetLineEdit->setObjectName(QString::fromUtf8("arrayOffsetLineEdit"));
        arrayOffsetLineEdit->setClearButtonEnabled(true);

        horizontalLayout_1->addWidget(arrayOffsetLineEdit);

        arrayStrideLineEdit = new QLineEdit(SeerArrayVisualizerWidgetForm);
        arrayStrideLineEdit->setObjectName(QString::fromUtf8("arrayStrideLineEdit"));
        arrayStrideLineEdit->setClearButtonEnabled(true);

        horizontalLayout_1->addWidget(arrayStrideLineEdit);

        arrayDisplayFormatComboBox = new QComboBox(SeerArrayVisualizerWidgetForm);
        arrayDisplayFormatComboBox->addItem(QString());
        arrayDisplayFormatComboBox->addItem(QString());
        arrayDisplayFormatComboBox->addItem(QString());
        arrayDisplayFormatComboBox->addItem(QString());
        arrayDisplayFormatComboBox->addItem(QString());
        arrayDisplayFormatComboBox->addItem(QString());
        arrayDisplayFormatComboBox->addItem(QString());
        arrayDisplayFormatComboBox->addItem(QString());
        arrayDisplayFormatComboBox->setObjectName(QString::fromUtf8("arrayDisplayFormatComboBox"));

        horizontalLayout_1->addWidget(arrayDisplayFormatComboBox);

        refreshToolButton = new QToolButton(SeerArrayVisualizerWidgetForm);
        refreshToolButton->setObjectName(QString::fromUtf8("refreshToolButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/RelaxLightIcons/view-refresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        refreshToolButton->setIcon(icon);

        horizontalLayout_1->addWidget(refreshToolButton);


        gridLayout->addLayout(horizontalLayout_1, 0, 0, 1, 1);

        splitter = new QSplitter(SeerArrayVisualizerWidgetForm);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setOrientation(Qt::Horizontal);
        arrayTableWidget = new SeerArrayWidget(splitter);
        arrayTableWidget->setObjectName(QString::fromUtf8("arrayTableWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(arrayTableWidget->sizePolicy().hasHeightForWidth());
        arrayTableWidget->setSizePolicy(sizePolicy1);
        splitter->addWidget(arrayTableWidget);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        arrayChartView = new QZoomChartView(layoutWidget);
        arrayChartView->setObjectName(QString::fromUtf8("arrayChartView"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(100);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(arrayChartView->sizePolicy().hasHeightForWidth());
        arrayChartView->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(arrayChartView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        titleLineEdit = new QLineEdit(layoutWidget);
        titleLineEdit->setObjectName(QString::fromUtf8("titleLineEdit"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(titleLineEdit->sizePolicy().hasHeightForWidth());
        titleLineEdit->setSizePolicy(sizePolicy3);
        titleLineEdit->setClearButtonEnabled(true);

        horizontalLayout_2->addWidget(titleLineEdit);

        line_1 = new QFrame(layoutWidget);
        line_1->setObjectName(QString::fromUtf8("line_1"));
        line_1->setFrameShape(QFrame::VLine);
        line_1->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_1);

        lineRadioButton = new QRadioButton(layoutWidget);
        lineTypeButtonGroup = new QButtonGroup(SeerArrayVisualizerWidgetForm);
        lineTypeButtonGroup->setObjectName(QString::fromUtf8("lineTypeButtonGroup"));
        lineTypeButtonGroup->addButton(lineRadioButton);
        lineRadioButton->setObjectName(QString::fromUtf8("lineRadioButton"));

        horizontalLayout_2->addWidget(lineRadioButton);

        splineRadioButton = new QRadioButton(layoutWidget);
        lineTypeButtonGroup->addButton(splineRadioButton);
        splineRadioButton->setObjectName(QString::fromUtf8("splineRadioButton"));

        horizontalLayout_2->addWidget(splineRadioButton);

        scatterRadioButton = new QRadioButton(layoutWidget);
        lineTypeButtonGroup->addButton(scatterRadioButton);
        scatterRadioButton->setObjectName(QString::fromUtf8("scatterRadioButton"));

        horizontalLayout_2->addWidget(scatterRadioButton);

        line_2 = new QFrame(layoutWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_2);

        pointsCheckBox = new QCheckBox(layoutWidget);
        pointsCheckBox->setObjectName(QString::fromUtf8("pointsCheckBox"));

        horizontalLayout_2->addWidget(pointsCheckBox);

        labelsCheckBox = new QCheckBox(layoutWidget);
        labelsCheckBox->setObjectName(QString::fromUtf8("labelsCheckBox"));

        horizontalLayout_2->addWidget(labelsCheckBox);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalLayout->setStretch(0, 25);
        splitter->addWidget(layoutWidget);

        gridLayout->addWidget(splitter, 1, 0, 1, 1);


        retranslateUi(SeerArrayVisualizerWidgetForm);

        QMetaObject::connectSlotsByName(SeerArrayVisualizerWidgetForm);
    } // setupUi

    void retranslateUi(QWidget *SeerArrayVisualizerWidgetForm)
    {
        SeerArrayVisualizerWidgetForm->setWindowTitle(QApplication::translate("SeerArrayVisualizerWidgetForm", "Form", nullptr));
#ifndef QT_NO_TOOLTIP
        variableNameLineEdit->setToolTip(QApplication::translate("SeerArrayVisualizerWidgetForm", "Variable name or expression.", nullptr));
#endif // QT_NO_TOOLTIP
        variableNameLineEdit->setPlaceholderText(QApplication::translate("SeerArrayVisualizerWidgetForm", "variable name", nullptr));
#ifndef QT_NO_TOOLTIP
        variableAddressLineEdit->setToolTip(QApplication::translate("SeerArrayVisualizerWidgetForm", "Variable address.", nullptr));
#endif // QT_NO_TOOLTIP
        variableAddressLineEdit->setPlaceholderText(QApplication::translate("SeerArrayVisualizerWidgetForm", "variable address", nullptr));
#ifndef QT_NO_TOOLTIP
        arrayLengthLineEdit->setToolTip(QApplication::translate("SeerArrayVisualizerWidgetForm", "Total number of elements in array.", nullptr));
#endif // QT_NO_TOOLTIP
        arrayLengthLineEdit->setInputMask(QString());
        arrayLengthLineEdit->setPlaceholderText(QApplication::translate("SeerArrayVisualizerWidgetForm", "# elements", nullptr));
#ifndef QT_NO_TOOLTIP
        arrayOffsetLineEdit->setToolTip(QApplication::translate("SeerArrayVisualizerWidgetForm", "Element offset into array. (default=0)", nullptr));
#endif // QT_NO_TOOLTIP
        arrayOffsetLineEdit->setInputMask(QString());
        arrayOffsetLineEdit->setText(QString());
        arrayOffsetLineEdit->setPlaceholderText(QApplication::translate("SeerArrayVisualizerWidgetForm", "array offset", nullptr));
#ifndef QT_NO_TOOLTIP
        arrayStrideLineEdit->setToolTip(QApplication::translate("SeerArrayVisualizerWidgetForm", "Element stride between values. (default=1)", nullptr));
#endif // QT_NO_TOOLTIP
        arrayStrideLineEdit->setInputMask(QString());
        arrayStrideLineEdit->setPlaceholderText(QApplication::translate("SeerArrayVisualizerWidgetForm", "array stride", nullptr));
        arrayDisplayFormatComboBox->setItemText(0, QApplication::translate("SeerArrayVisualizerWidgetForm", "int16", nullptr));
        arrayDisplayFormatComboBox->setItemText(1, QApplication::translate("SeerArrayVisualizerWidgetForm", "int32", nullptr));
        arrayDisplayFormatComboBox->setItemText(2, QApplication::translate("SeerArrayVisualizerWidgetForm", "int64", nullptr));
        arrayDisplayFormatComboBox->setItemText(3, QApplication::translate("SeerArrayVisualizerWidgetForm", "unt16", nullptr));
        arrayDisplayFormatComboBox->setItemText(4, QApplication::translate("SeerArrayVisualizerWidgetForm", "uin32", nullptr));
        arrayDisplayFormatComboBox->setItemText(5, QApplication::translate("SeerArrayVisualizerWidgetForm", "uin64", nullptr));
        arrayDisplayFormatComboBox->setItemText(6, QApplication::translate("SeerArrayVisualizerWidgetForm", "float32", nullptr));
        arrayDisplayFormatComboBox->setItemText(7, QApplication::translate("SeerArrayVisualizerWidgetForm", "float64", nullptr));

#ifndef QT_NO_TOOLTIP
        arrayDisplayFormatComboBox->setToolTip(QApplication::translate("SeerArrayVisualizerWidgetForm", "Array data type.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        refreshToolButton->setToolTip(QApplication::translate("SeerArrayVisualizerWidgetForm", "Refresh the display.", nullptr));
#endif // QT_NO_TOOLTIP
        refreshToolButton->setText(QApplication::translate("SeerArrayVisualizerWidgetForm", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        titleLineEdit->setToolTip(QApplication::translate("SeerArrayVisualizerWidgetForm", "Set chart title.", nullptr));
#endif // QT_NO_TOOLTIP
        titleLineEdit->setPlaceholderText(QApplication::translate("SeerArrayVisualizerWidgetForm", "chart title", nullptr));
        lineRadioButton->setText(QApplication::translate("SeerArrayVisualizerWidgetForm", "Line", nullptr));
        splineRadioButton->setText(QApplication::translate("SeerArrayVisualizerWidgetForm", "Spline", nullptr));
        scatterRadioButton->setText(QApplication::translate("SeerArrayVisualizerWidgetForm", "Scatter", nullptr));
#ifndef QT_NO_TOOLTIP
        pointsCheckBox->setToolTip(QApplication::translate("SeerArrayVisualizerWidgetForm", "Show chart data points.", nullptr));
#endif // QT_NO_TOOLTIP
        pointsCheckBox->setText(QApplication::translate("SeerArrayVisualizerWidgetForm", "Points", nullptr));
#ifndef QT_NO_TOOLTIP
        labelsCheckBox->setToolTip(QApplication::translate("SeerArrayVisualizerWidgetForm", "Show chart data labels.", nullptr));
#endif // QT_NO_TOOLTIP
        labelsCheckBox->setText(QApplication::translate("SeerArrayVisualizerWidgetForm", "Labels", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SeerArrayVisualizerWidgetForm: public Ui_SeerArrayVisualizerWidgetForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEERARRAYVISUALIZERWIDGET_H
