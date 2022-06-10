/********************************************************************************
** Form generated from reading UI file 'SeerFunctionBrowserWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEERFUNCTIONBROWSERWIDGET_H
#define UI_SEERFUNCTIONBROWSERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SeerFunctionBrowserWidgetForm
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *functionTreeWidget;
    QLineEdit *functionSearchLineEdit;

    void setupUi(QWidget *SeerFunctionBrowserWidgetForm)
    {
        if (SeerFunctionBrowserWidgetForm->objectName().isEmpty())
            SeerFunctionBrowserWidgetForm->setObjectName(QString::fromUtf8("SeerFunctionBrowserWidgetForm"));
        SeerFunctionBrowserWidgetForm->resize(730, 698);
        gridLayout = new QGridLayout(SeerFunctionBrowserWidgetForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        functionTreeWidget = new QTreeWidget(SeerFunctionBrowserWidgetForm);
        functionTreeWidget->setObjectName(QString::fromUtf8("functionTreeWidget"));
        functionTreeWidget->setColumnCount(6);

        gridLayout->addWidget(functionTreeWidget, 1, 0, 1, 2);

        functionSearchLineEdit = new QLineEdit(SeerFunctionBrowserWidgetForm);
        functionSearchLineEdit->setObjectName(QString::fromUtf8("functionSearchLineEdit"));

        gridLayout->addWidget(functionSearchLineEdit, 0, 0, 1, 2);


        retranslateUi(SeerFunctionBrowserWidgetForm);

        QMetaObject::connectSlotsByName(SeerFunctionBrowserWidgetForm);
    } // setupUi

    void retranslateUi(QWidget *SeerFunctionBrowserWidgetForm)
    {
        SeerFunctionBrowserWidgetForm->setWindowTitle(QApplication::translate("SeerFunctionBrowserWidgetForm", "Function Browser", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = functionTreeWidget->headerItem();
        ___qtreewidgetitem->setText(5, QApplication::translate("SeerFunctionBrowserWidgetForm", "Description", nullptr));
        ___qtreewidgetitem->setText(4, QApplication::translate("SeerFunctionBrowserWidgetForm", "Type", nullptr));
        ___qtreewidgetitem->setText(3, QApplication::translate("SeerFunctionBrowserWidgetForm", "Full Name", nullptr));
        ___qtreewidgetitem->setText(2, QApplication::translate("SeerFunctionBrowserWidgetForm", "Line", nullptr));
        ___qtreewidgetitem->setText(1, QApplication::translate("SeerFunctionBrowserWidgetForm", "File", nullptr));
        ___qtreewidgetitem->setText(0, QApplication::translate("SeerFunctionBrowserWidgetForm", "Function", nullptr));
#ifndef QT_NO_TOOLTIP
        functionSearchLineEdit->setToolTip(QApplication::translate("SeerFunctionBrowserWidgetForm", "Search in the list of functions. \"*\" is allowed.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        functionSearchLineEdit->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
    } // retranslateUi

};

namespace Ui {
    class SeerFunctionBrowserWidgetForm: public Ui_SeerFunctionBrowserWidgetForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEERFUNCTIONBROWSERWIDGET_H
