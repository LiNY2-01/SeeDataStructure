/********************************************************************************
** Form generated from reading UI file 'SeerBreakpointsBrowserWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEERBREAKPOINTSBROWSERWIDGET_H
#define UI_SEERBREAKPOINTSBROWSERWIDGET_H

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

class Ui_SeerBreakpointsBrowserWidgetForm
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *breakpointsTreeWidget;
    QVBoxLayout *verticalLayout;
    QToolButton *refreshBreakpointsToolButton;
    QToolButton *addBreakpointToolButton;
    QToolButton *deleteBreakpointsToolButton;
    QToolButton *enableBreakpointsToolButton;
    QToolButton *disableBreakpointsToolButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SeerBreakpointsBrowserWidgetForm)
    {
        if (SeerBreakpointsBrowserWidgetForm->objectName().isEmpty())
            SeerBreakpointsBrowserWidgetForm->setObjectName(QString::fromUtf8("SeerBreakpointsBrowserWidgetForm"));
        SeerBreakpointsBrowserWidgetForm->resize(794, 528);
        gridLayout = new QGridLayout(SeerBreakpointsBrowserWidgetForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        breakpointsTreeWidget = new QTreeWidget(SeerBreakpointsBrowserWidgetForm);
        breakpointsTreeWidget->setObjectName(QString::fromUtf8("breakpointsTreeWidget"));
        breakpointsTreeWidget->setColumnCount(12);

        gridLayout->addWidget(breakpointsTreeWidget, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        refreshBreakpointsToolButton = new QToolButton(SeerBreakpointsBrowserWidgetForm);
        refreshBreakpointsToolButton->setObjectName(QString::fromUtf8("refreshBreakpointsToolButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/RelaxLightIcons/view-refresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        refreshBreakpointsToolButton->setIcon(icon);

        verticalLayout->addWidget(refreshBreakpointsToolButton);

        addBreakpointToolButton = new QToolButton(SeerBreakpointsBrowserWidgetForm);
        addBreakpointToolButton->setObjectName(QString::fromUtf8("addBreakpointToolButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/RelaxLightIcons/document-new.svg"), QSize(), QIcon::Normal, QIcon::Off);
        addBreakpointToolButton->setIcon(icon1);

        verticalLayout->addWidget(addBreakpointToolButton);

        deleteBreakpointsToolButton = new QToolButton(SeerBreakpointsBrowserWidgetForm);
        deleteBreakpointsToolButton->setObjectName(QString::fromUtf8("deleteBreakpointsToolButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resources/RelaxLightIcons/edit-delete.svg"), QSize(), QIcon::Normal, QIcon::Off);
        deleteBreakpointsToolButton->setIcon(icon2);

        verticalLayout->addWidget(deleteBreakpointsToolButton);

        enableBreakpointsToolButton = new QToolButton(SeerBreakpointsBrowserWidgetForm);
        enableBreakpointsToolButton->setObjectName(QString::fromUtf8("enableBreakpointsToolButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/resources/RelaxLightIcons/list-add.svg"), QSize(), QIcon::Normal, QIcon::Off);
        enableBreakpointsToolButton->setIcon(icon3);

        verticalLayout->addWidget(enableBreakpointsToolButton);

        disableBreakpointsToolButton = new QToolButton(SeerBreakpointsBrowserWidgetForm);
        disableBreakpointsToolButton->setObjectName(QString::fromUtf8("disableBreakpointsToolButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/resources/RelaxLightIcons/list-remove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        disableBreakpointsToolButton->setIcon(icon4);

        verticalLayout->addWidget(disableBreakpointsToolButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);


        retranslateUi(SeerBreakpointsBrowserWidgetForm);

        QMetaObject::connectSlotsByName(SeerBreakpointsBrowserWidgetForm);
    } // setupUi

    void retranslateUi(QWidget *SeerBreakpointsBrowserWidgetForm)
    {
        SeerBreakpointsBrowserWidgetForm->setWindowTitle(QApplication::translate("SeerBreakpointsBrowserWidgetForm", "Form", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = breakpointsTreeWidget->headerItem();
        ___qtreewidgetitem->setText(11, QApplication::translate("SeerBreakpointsBrowserWidgetForm", "Original Location", nullptr));
        ___qtreewidgetitem->setText(10, QApplication::translate("SeerBreakpointsBrowserWidgetForm", "Times", nullptr));
        ___qtreewidgetitem->setText(9, QApplication::translate("SeerBreakpointsBrowserWidgetForm", "Thread Groups", nullptr));
        ___qtreewidgetitem->setText(8, QApplication::translate("SeerBreakpointsBrowserWidgetForm", "Line", nullptr));
        ___qtreewidgetitem->setText(7, QApplication::translate("SeerBreakpointsBrowserWidgetForm", "Fullname", nullptr));
        ___qtreewidgetitem->setText(6, QApplication::translate("SeerBreakpointsBrowserWidgetForm", "File", nullptr));
        ___qtreewidgetitem->setText(5, QApplication::translate("SeerBreakpointsBrowserWidgetForm", "Function", nullptr));
        ___qtreewidgetitem->setText(4, QApplication::translate("SeerBreakpointsBrowserWidgetForm", "Address", nullptr));
        ___qtreewidgetitem->setText(3, QApplication::translate("SeerBreakpointsBrowserWidgetForm", "Enabled", nullptr));
        ___qtreewidgetitem->setText(2, QApplication::translate("SeerBreakpointsBrowserWidgetForm", "Disposition", nullptr));
        ___qtreewidgetitem->setText(1, QApplication::translate("SeerBreakpointsBrowserWidgetForm", "Type", nullptr));
        ___qtreewidgetitem->setText(0, QApplication::translate("SeerBreakpointsBrowserWidgetForm", "Number", nullptr));
#ifndef QT_NO_TOOLTIP
        refreshBreakpointsToolButton->setToolTip(QApplication::translate("SeerBreakpointsBrowserWidgetForm", "Refresh the list of breakpoints.", nullptr));
#endif // QT_NO_TOOLTIP
        refreshBreakpointsToolButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        addBreakpointToolButton->setToolTip(QApplication::translate("SeerBreakpointsBrowserWidgetForm", "Add a new breakpoint.", nullptr));
#endif // QT_NO_TOOLTIP
        addBreakpointToolButton->setText(QApplication::translate("SeerBreakpointsBrowserWidgetForm", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        deleteBreakpointsToolButton->setToolTip(QApplication::translate("SeerBreakpointsBrowserWidgetForm", "Delete selected breakpoints.", nullptr));
#endif // QT_NO_TOOLTIP
        deleteBreakpointsToolButton->setText(QApplication::translate("SeerBreakpointsBrowserWidgetForm", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        enableBreakpointsToolButton->setToolTip(QApplication::translate("SeerBreakpointsBrowserWidgetForm", "Enable selected breakpoints.", nullptr));
#endif // QT_NO_TOOLTIP
        enableBreakpointsToolButton->setText(QApplication::translate("SeerBreakpointsBrowserWidgetForm", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        disableBreakpointsToolButton->setToolTip(QApplication::translate("SeerBreakpointsBrowserWidgetForm", "Disable selected breakpoints.", nullptr));
#endif // QT_NO_TOOLTIP
        disableBreakpointsToolButton->setText(QApplication::translate("SeerBreakpointsBrowserWidgetForm", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SeerBreakpointsBrowserWidgetForm: public Ui_SeerBreakpointsBrowserWidgetForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEERBREAKPOINTSBROWSERWIDGET_H
