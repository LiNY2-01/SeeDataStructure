/********************************************************************************
** Form generated from reading UI file 'SeerRegisterValuesBrowserWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEERREGISTERVALUESBROWSERWIDGET_H
#define UI_SEERREGISTERVALUESBROWSERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SeerRegisterValuesBrowserWidgetForm
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *registersTreeWidget;

    void setupUi(QWidget *SeerRegisterValuesBrowserWidgetForm)
    {
        if (SeerRegisterValuesBrowserWidgetForm->objectName().isEmpty())
            SeerRegisterValuesBrowserWidgetForm->setObjectName(QString::fromUtf8("SeerRegisterValuesBrowserWidgetForm"));
        SeerRegisterValuesBrowserWidgetForm->resize(794, 528);
        gridLayout = new QGridLayout(SeerRegisterValuesBrowserWidgetForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        registersTreeWidget = new QTreeWidget(SeerRegisterValuesBrowserWidgetForm);
        registersTreeWidget->setObjectName(QString::fromUtf8("registersTreeWidget"));
        registersTreeWidget->setColumnCount(4);

        gridLayout->addWidget(registersTreeWidget, 0, 0, 1, 2);


        retranslateUi(SeerRegisterValuesBrowserWidgetForm);

        QMetaObject::connectSlotsByName(SeerRegisterValuesBrowserWidgetForm);
    } // setupUi

    void retranslateUi(QWidget *SeerRegisterValuesBrowserWidgetForm)
    {
        SeerRegisterValuesBrowserWidgetForm->setWindowTitle(QApplication::translate("SeerRegisterValuesBrowserWidgetForm", "Form", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = registersTreeWidget->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("SeerRegisterValuesBrowserWidgetForm", "Used", nullptr));
        ___qtreewidgetitem->setText(2, QApplication::translate("SeerRegisterValuesBrowserWidgetForm", "Value", nullptr));
        ___qtreewidgetitem->setText(1, QApplication::translate("SeerRegisterValuesBrowserWidgetForm", "Name", nullptr));
        ___qtreewidgetitem->setText(0, QApplication::translate("SeerRegisterValuesBrowserWidgetForm", "Number", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SeerRegisterValuesBrowserWidgetForm: public Ui_SeerRegisterValuesBrowserWidgetForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEERREGISTERVALUESBROWSERWIDGET_H
