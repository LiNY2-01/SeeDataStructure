/********************************************************************************
** Form generated from reading UI file 'SeerVariableLoggerBrowserWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEERVARIABLELOGGERBROWSERWIDGET_H
#define UI_SEERVARIABLELOGGERBROWSERWIDGET_H

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

class Ui_SeerVariableLoggerBrowserWidgetForm
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *variableAddLineEdit;
    QToolButton *variableDeleteToolButton;
    QToolButton *variableDeleteAllToolButton;
    QTreeWidget *variablesTreeWidget;

    void setupUi(QWidget *SeerVariableLoggerBrowserWidgetForm)
    {
        if (SeerVariableLoggerBrowserWidgetForm->objectName().isEmpty())
            SeerVariableLoggerBrowserWidgetForm->setObjectName(QString::fromUtf8("SeerVariableLoggerBrowserWidgetForm"));
        SeerVariableLoggerBrowserWidgetForm->resize(794, 528);
        gridLayout = new QGridLayout(SeerVariableLoggerBrowserWidgetForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        variableAddLineEdit = new QLineEdit(SeerVariableLoggerBrowserWidgetForm);
        variableAddLineEdit->setObjectName(QString::fromUtf8("variableAddLineEdit"));
        variableAddLineEdit->setClearButtonEnabled(true);

        horizontalLayout->addWidget(variableAddLineEdit);

        variableDeleteToolButton = new QToolButton(SeerVariableLoggerBrowserWidgetForm);
        variableDeleteToolButton->setObjectName(QString::fromUtf8("variableDeleteToolButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/RelaxLightIcons/list-remove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        variableDeleteToolButton->setIcon(icon);

        horizontalLayout->addWidget(variableDeleteToolButton);

        variableDeleteAllToolButton = new QToolButton(SeerVariableLoggerBrowserWidgetForm);
        variableDeleteAllToolButton->setObjectName(QString::fromUtf8("variableDeleteAllToolButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/RelaxLightIcons/edit-delete.svg"), QSize(), QIcon::Normal, QIcon::Off);
        variableDeleteAllToolButton->setIcon(icon1);

        horizontalLayout->addWidget(variableDeleteAllToolButton);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        variablesTreeWidget = new QTreeWidget(SeerVariableLoggerBrowserWidgetForm);
        variablesTreeWidget->setObjectName(QString::fromUtf8("variablesTreeWidget"));
        variablesTreeWidget->setColumnCount(4);

        gridLayout->addWidget(variablesTreeWidget, 1, 0, 1, 1);


        retranslateUi(SeerVariableLoggerBrowserWidgetForm);

        QMetaObject::connectSlotsByName(SeerVariableLoggerBrowserWidgetForm);
    } // setupUi

    void retranslateUi(QWidget *SeerVariableLoggerBrowserWidgetForm)
    {
        SeerVariableLoggerBrowserWidgetForm->setWindowTitle(QApplication::translate("SeerVariableLoggerBrowserWidgetForm", "Form", nullptr));
#ifndef QT_NO_TOOLTIP
        variableAddLineEdit->setToolTip(QApplication::translate("SeerVariableLoggerBrowserWidgetForm", "Add a variable to the loggger.", nullptr));
#endif // QT_NO_TOOLTIP
        variableAddLineEdit->setPlaceholderText(QApplication::translate("SeerVariableLoggerBrowserWidgetForm", "Enter a variable name to log", nullptr));
#ifndef QT_NO_TOOLTIP
        variableDeleteToolButton->setToolTip(QApplication::translate("SeerVariableLoggerBrowserWidgetForm", "Delete selected variables.", nullptr));
#endif // QT_NO_TOOLTIP
        variableDeleteToolButton->setText(QApplication::translate("SeerVariableLoggerBrowserWidgetForm", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        variableDeleteAllToolButton->setToolTip(QApplication::translate("SeerVariableLoggerBrowserWidgetForm", "Delete all variables.", nullptr));
#endif // QT_NO_TOOLTIP
        variableDeleteAllToolButton->setText(QApplication::translate("SeerVariableLoggerBrowserWidgetForm", "...", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = variablesTreeWidget->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("SeerVariableLoggerBrowserWidgetForm", "Value", nullptr));
        ___qtreewidgetitem->setText(2, QApplication::translate("SeerVariableLoggerBrowserWidgetForm", "Name", nullptr));
        ___qtreewidgetitem->setText(1, QApplication::translate("SeerVariableLoggerBrowserWidgetForm", "Timestamp", nullptr));
        ___qtreewidgetitem->setText(0, QApplication::translate("SeerVariableLoggerBrowserWidgetForm", "ID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SeerVariableLoggerBrowserWidgetForm: public Ui_SeerVariableLoggerBrowserWidgetForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEERVARIABLELOGGERBROWSERWIDGET_H
