/********************************************************************************
** Form generated from reading UI file 'SeerVariableBrowserWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEERVARIABLEBROWSERWIDGET_H
#define UI_SEERVARIABLEBROWSERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SeerVariableBrowserWidgetForm
{
public:
    QGridLayout *gridLayout;
    QLineEdit *variableNameSearchLineEdit;
    QLineEdit *variableTypeSearchLineEdit;
    QTreeWidget *variableTreeWidget;

    void setupUi(QWidget *SeerVariableBrowserWidgetForm)
    {
        if (SeerVariableBrowserWidgetForm->objectName().isEmpty())
            SeerVariableBrowserWidgetForm->setObjectName(QString::fromUtf8("SeerVariableBrowserWidgetForm"));
        SeerVariableBrowserWidgetForm->resize(730, 698);
        gridLayout = new QGridLayout(SeerVariableBrowserWidgetForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        variableNameSearchLineEdit = new QLineEdit(SeerVariableBrowserWidgetForm);
        variableNameSearchLineEdit->setObjectName(QString::fromUtf8("variableNameSearchLineEdit"));
        variableNameSearchLineEdit->setClearButtonEnabled(true);

        gridLayout->addWidget(variableNameSearchLineEdit, 0, 0, 1, 1);

        variableTypeSearchLineEdit = new QLineEdit(SeerVariableBrowserWidgetForm);
        variableTypeSearchLineEdit->setObjectName(QString::fromUtf8("variableTypeSearchLineEdit"));
        variableTypeSearchLineEdit->setClearButtonEnabled(true);

        gridLayout->addWidget(variableTypeSearchLineEdit, 0, 1, 1, 1);

        variableTreeWidget = new QTreeWidget(SeerVariableBrowserWidgetForm);
        variableTreeWidget->setObjectName(QString::fromUtf8("variableTreeWidget"));
        variableTreeWidget->setColumnCount(6);

        gridLayout->addWidget(variableTreeWidget, 1, 0, 1, 2);


        retranslateUi(SeerVariableBrowserWidgetForm);

        QMetaObject::connectSlotsByName(SeerVariableBrowserWidgetForm);
    } // setupUi

    void retranslateUi(QWidget *SeerVariableBrowserWidgetForm)
    {
        SeerVariableBrowserWidgetForm->setWindowTitle(QApplication::translate("SeerVariableBrowserWidgetForm", "Variable Browser", nullptr));
#ifndef QT_NO_TOOLTIP
        variableNameSearchLineEdit->setToolTip(QApplication::translate("SeerVariableBrowserWidgetForm", "Search for variable names. \"*\" is allowed.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        variableNameSearchLineEdit->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        variableNameSearchLineEdit->setPlaceholderText(QApplication::translate("SeerVariableBrowserWidgetForm", "Variable names", nullptr));
#ifndef QT_NO_TOOLTIP
        variableTypeSearchLineEdit->setToolTip(QApplication::translate("SeerVariableBrowserWidgetForm", "Search for variable types. \"*\" is allowed.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        variableTypeSearchLineEdit->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        variableTypeSearchLineEdit->setPlaceholderText(QApplication::translate("SeerVariableBrowserWidgetForm", "Variable types", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = variableTreeWidget->headerItem();
        ___qtreewidgetitem->setText(5, QApplication::translate("SeerVariableBrowserWidgetForm", "Description", nullptr));
        ___qtreewidgetitem->setText(4, QApplication::translate("SeerVariableBrowserWidgetForm", "Full Name", nullptr));
        ___qtreewidgetitem->setText(3, QApplication::translate("SeerVariableBrowserWidgetForm", "Line", nullptr));
        ___qtreewidgetitem->setText(2, QApplication::translate("SeerVariableBrowserWidgetForm", "File", nullptr));
        ___qtreewidgetitem->setText(1, QApplication::translate("SeerVariableBrowserWidgetForm", "Type", nullptr));
        ___qtreewidgetitem->setText(0, QApplication::translate("SeerVariableBrowserWidgetForm", "Variable", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SeerVariableBrowserWidgetForm: public Ui_SeerVariableBrowserWidgetForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEERVARIABLEBROWSERWIDGET_H
