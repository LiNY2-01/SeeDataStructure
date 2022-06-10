/********************************************************************************
** Form generated from reading UI file 'SeerVariableManagerWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEERVARIABLEMANAGERWIDGET_H
#define UI_SEERVARIABLEMANAGERWIDGET_H

#include <QDetachTabWidget.h>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SeerVariableManagerWidgetForm
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QDetachTabWidget *tabWidget;

    void setupUi(QWidget *SeerVariableManagerWidgetForm)
    {
        if (SeerVariableManagerWidgetForm->objectName().isEmpty())
            SeerVariableManagerWidgetForm->setObjectName(QString::fromUtf8("SeerVariableManagerWidgetForm"));
        SeerVariableManagerWidgetForm->resize(854, 571);
        gridLayout_2 = new QGridLayout(SeerVariableManagerWidgetForm);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 0, -1, 0);
        groupBox = new QGroupBox(SeerVariableManagerWidgetForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QDetachTabWidget(groupBox);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(SeerVariableManagerWidgetForm);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(SeerVariableManagerWidgetForm);
    } // setupUi

    void retranslateUi(QWidget *SeerVariableManagerWidgetForm)
    {
        SeerVariableManagerWidgetForm->setWindowTitle(QApplication::translate("SeerVariableManagerWidgetForm", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("SeerVariableManagerWidgetForm", "Variable/Register Info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SeerVariableManagerWidgetForm: public Ui_SeerVariableManagerWidgetForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEERVARIABLEMANAGERWIDGET_H
