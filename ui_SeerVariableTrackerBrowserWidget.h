/********************************************************************************
** Form generated from reading UI file 'SeerVariableTrackerBrowserWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEERVARIABLETRACKERBROWSERWIDGET_H
#define UI_SEERVARIABLETRACKERBROWSERWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SeerVariableTrackerBrowserWidgetForm
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *variableAddLineEdit;
    QToolButton *variableDeleteToolButton;
    QToolButton *variableDeleteAllToolButton;
    QTreeWidget *variablesTreeWidget;

    void setupUi(QWidget *SeerVariableTrackerBrowserWidgetForm)
    {
        if (SeerVariableTrackerBrowserWidgetForm->objectName().isEmpty())
            SeerVariableTrackerBrowserWidgetForm->setObjectName(QString::fromUtf8("SeerVariableTrackerBrowserWidgetForm"));
        SeerVariableTrackerBrowserWidgetForm->resize(794, 528);
        gridLayout = new QGridLayout(SeerVariableTrackerBrowserWidgetForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        variableAddLineEdit = new QLineEdit(SeerVariableTrackerBrowserWidgetForm);
        variableAddLineEdit->setObjectName(QString::fromUtf8("variableAddLineEdit"));
        variableAddLineEdit->setClearButtonEnabled(true);

        horizontalLayout->addWidget(variableAddLineEdit);

        variableDeleteToolButton = new QToolButton(SeerVariableTrackerBrowserWidgetForm);
        variableDeleteToolButton->setObjectName(QString::fromUtf8("variableDeleteToolButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/RelaxLightIcons/list-remove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        variableDeleteToolButton->setIcon(icon);

        horizontalLayout->addWidget(variableDeleteToolButton);

        variableDeleteAllToolButton = new QToolButton(SeerVariableTrackerBrowserWidgetForm);
        variableDeleteAllToolButton->setObjectName(QString::fromUtf8("variableDeleteAllToolButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/RelaxLightIcons/edit-delete.svg"), QSize(), QIcon::Normal, QIcon::Off);
        variableDeleteAllToolButton->setIcon(icon1);

        horizontalLayout->addWidget(variableDeleteAllToolButton);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        variablesTreeWidget = new QTreeWidget(SeerVariableTrackerBrowserWidgetForm);
        variablesTreeWidget->setObjectName(QString::fromUtf8("variablesTreeWidget"));
        variablesTreeWidget->setColumnCount(3);

        gridLayout->addWidget(variablesTreeWidget, 1, 0, 1, 1);


        retranslateUi(SeerVariableTrackerBrowserWidgetForm);

        QMetaObject::connectSlotsByName(SeerVariableTrackerBrowserWidgetForm);
    } // setupUi

    void retranslateUi(QWidget *SeerVariableTrackerBrowserWidgetForm)
    {
        SeerVariableTrackerBrowserWidgetForm->setWindowTitle(QApplication::translate("SeerVariableTrackerBrowserWidgetForm", "Form", nullptr));
#ifndef QT_NO_TOOLTIP
        variableAddLineEdit->setToolTip(QApplication::translate("SeerVariableTrackerBrowserWidgetForm", "Add a variable to track.", nullptr));
#endif // QT_NO_TOOLTIP
        variableAddLineEdit->setPlaceholderText(QApplication::translate("SeerVariableTrackerBrowserWidgetForm", "Enter a variable name to track", nullptr));
#ifndef QT_NO_TOOLTIP
        variableDeleteToolButton->setToolTip(QApplication::translate("SeerVariableTrackerBrowserWidgetForm", "Delete selected variables.", nullptr));
#endif // QT_NO_TOOLTIP
        variableDeleteToolButton->setText(QApplication::translate("SeerVariableTrackerBrowserWidgetForm", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        variableDeleteAllToolButton->setToolTip(QApplication::translate("SeerVariableTrackerBrowserWidgetForm", "Delete all variables.", nullptr));
#endif // QT_NO_TOOLTIP
        variableDeleteAllToolButton->setText(QApplication::translate("SeerVariableTrackerBrowserWidgetForm", "...", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = variablesTreeWidget->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("SeerVariableTrackerBrowserWidgetForm", "Value", nullptr));
        ___qtreewidgetitem->setText(1, QApplication::translate("SeerVariableTrackerBrowserWidgetForm", "Name", nullptr));
        ___qtreewidgetitem->setText(0, QApplication::translate("SeerVariableTrackerBrowserWidgetForm", "ID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SeerVariableTrackerBrowserWidgetForm: public Ui_SeerVariableTrackerBrowserWidgetForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEERVARIABLETRACKERBROWSERWIDGET_H
