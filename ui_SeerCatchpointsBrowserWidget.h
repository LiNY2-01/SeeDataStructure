/********************************************************************************
** Form generated from reading UI file 'SeerCatchpointsBrowserWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEERCATCHPOINTSBROWSERWIDGET_H
#define UI_SEERCATCHPOINTSBROWSERWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SeerCatchpointsBrowserWidgetForm
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *catchpointsTreeWidget;
    QVBoxLayout *verticalLayout;
    QToolButton *refreshCatchpointsToolButton;
    QToolButton *addCatchpointToolButton;
    QToolButton *deleteCatchpointsToolButton;
    QToolButton *enableCatchpointsToolButton;
    QToolButton *disableCatchpointsToolButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SeerCatchpointsBrowserWidgetForm)
    {
        if (SeerCatchpointsBrowserWidgetForm->objectName().isEmpty())
            SeerCatchpointsBrowserWidgetForm->setObjectName(QString::fromUtf8("SeerCatchpointsBrowserWidgetForm"));
        SeerCatchpointsBrowserWidgetForm->resize(794, 528);
        gridLayout = new QGridLayout(SeerCatchpointsBrowserWidgetForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        catchpointsTreeWidget = new QTreeWidget(SeerCatchpointsBrowserWidgetForm);
        catchpointsTreeWidget->setObjectName(QString::fromUtf8("catchpointsTreeWidget"));
        catchpointsTreeWidget->setColumnCount(10);

        gridLayout->addWidget(catchpointsTreeWidget, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        refreshCatchpointsToolButton = new QToolButton(SeerCatchpointsBrowserWidgetForm);
        refreshCatchpointsToolButton->setObjectName(QString::fromUtf8("refreshCatchpointsToolButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/RelaxLightIcons/view-refresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        refreshCatchpointsToolButton->setIcon(icon);

        verticalLayout->addWidget(refreshCatchpointsToolButton);

        addCatchpointToolButton = new QToolButton(SeerCatchpointsBrowserWidgetForm);
        addCatchpointToolButton->setObjectName(QString::fromUtf8("addCatchpointToolButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/RelaxLightIcons/document-new.svg"), QSize(), QIcon::Normal, QIcon::Off);
        addCatchpointToolButton->setIcon(icon1);

        verticalLayout->addWidget(addCatchpointToolButton);

        deleteCatchpointsToolButton = new QToolButton(SeerCatchpointsBrowserWidgetForm);
        deleteCatchpointsToolButton->setObjectName(QString::fromUtf8("deleteCatchpointsToolButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resources/RelaxLightIcons/edit-delete.svg"), QSize(), QIcon::Normal, QIcon::Off);
        deleteCatchpointsToolButton->setIcon(icon2);

        verticalLayout->addWidget(deleteCatchpointsToolButton);

        enableCatchpointsToolButton = new QToolButton(SeerCatchpointsBrowserWidgetForm);
        enableCatchpointsToolButton->setObjectName(QString::fromUtf8("enableCatchpointsToolButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/resources/RelaxLightIcons/list-add.svg"), QSize(), QIcon::Normal, QIcon::Off);
        enableCatchpointsToolButton->setIcon(icon3);

        verticalLayout->addWidget(enableCatchpointsToolButton);

        disableCatchpointsToolButton = new QToolButton(SeerCatchpointsBrowserWidgetForm);
        disableCatchpointsToolButton->setObjectName(QString::fromUtf8("disableCatchpointsToolButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/resources/RelaxLightIcons/list-remove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        disableCatchpointsToolButton->setIcon(icon4);

        verticalLayout->addWidget(disableCatchpointsToolButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);


        retranslateUi(SeerCatchpointsBrowserWidgetForm);

        QMetaObject::connectSlotsByName(SeerCatchpointsBrowserWidgetForm);
    } // setupUi

    void retranslateUi(QWidget *SeerCatchpointsBrowserWidgetForm)
    {
        SeerCatchpointsBrowserWidgetForm->setWindowTitle(QApplication::translate("SeerCatchpointsBrowserWidgetForm", "Form", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = catchpointsTreeWidget->headerItem();
        ___qtreewidgetitem->setText(9, QApplication::translate("SeerCatchpointsBrowserWidgetForm", "Used", nullptr));
        ___qtreewidgetitem->setText(8, QApplication::translate("SeerCatchpointsBrowserWidgetForm", "Times", nullptr));
        ___qtreewidgetitem->setText(7, QApplication::translate("SeerCatchpointsBrowserWidgetForm", "Thread Groups", nullptr));
        ___qtreewidgetitem->setText(6, QApplication::translate("SeerCatchpointsBrowserWidgetForm", "Name", nullptr));
        ___qtreewidgetitem->setText(5, QApplication::translate("SeerCatchpointsBrowserWidgetForm", "Catch Type", nullptr));
        ___qtreewidgetitem->setText(4, QApplication::translate("SeerCatchpointsBrowserWidgetForm", "What", nullptr));
        ___qtreewidgetitem->setText(3, QApplication::translate("SeerCatchpointsBrowserWidgetForm", "Enabled", nullptr));
        ___qtreewidgetitem->setText(2, QApplication::translate("SeerCatchpointsBrowserWidgetForm", "Disposition", nullptr));
        ___qtreewidgetitem->setText(1, QApplication::translate("SeerCatchpointsBrowserWidgetForm", "Type", nullptr));
        ___qtreewidgetitem->setText(0, QApplication::translate("SeerCatchpointsBrowserWidgetForm", "Number", nullptr));
#ifndef QT_NO_TOOLTIP
        refreshCatchpointsToolButton->setToolTip(QApplication::translate("SeerCatchpointsBrowserWidgetForm", "Refresh the list of catchpoints.", nullptr));
#endif // QT_NO_TOOLTIP
        refreshCatchpointsToolButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        addCatchpointToolButton->setToolTip(QApplication::translate("SeerCatchpointsBrowserWidgetForm", "Add a new catchpoint.", nullptr));
#endif // QT_NO_TOOLTIP
        addCatchpointToolButton->setText(QApplication::translate("SeerCatchpointsBrowserWidgetForm", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        deleteCatchpointsToolButton->setToolTip(QApplication::translate("SeerCatchpointsBrowserWidgetForm", "Delete selected catchpoints.", nullptr));
#endif // QT_NO_TOOLTIP
        deleteCatchpointsToolButton->setText(QApplication::translate("SeerCatchpointsBrowserWidgetForm", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        enableCatchpointsToolButton->setToolTip(QApplication::translate("SeerCatchpointsBrowserWidgetForm", "Enable selected catchpoints.", nullptr));
#endif // QT_NO_TOOLTIP
        enableCatchpointsToolButton->setText(QApplication::translate("SeerCatchpointsBrowserWidgetForm", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        disableCatchpointsToolButton->setToolTip(QApplication::translate("SeerCatchpointsBrowserWidgetForm", "Disable selected catchpoints.", nullptr));
#endif // QT_NO_TOOLTIP
        disableCatchpointsToolButton->setText(QApplication::translate("SeerCatchpointsBrowserWidgetForm", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SeerCatchpointsBrowserWidgetForm: public Ui_SeerCatchpointsBrowserWidgetForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEERCATCHPOINTSBROWSERWIDGET_H
