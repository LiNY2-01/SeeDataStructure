/********************************************************************************
** Form generated from reading UI file 'SeerThreadManagerWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEERTHREADMANAGERWIDGET_H
#define UI_SEERTHREADMANAGERWIDGET_H

#include <QDetachTabWidget.h>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SeerThreadManagerWidgetForm
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QDetachTabWidget *tabWidget;

    void setupUi(QWidget *SeerThreadManagerWidgetForm)
    {
        if (SeerThreadManagerWidgetForm->objectName().isEmpty())
            SeerThreadManagerWidgetForm->setObjectName(QString::fromUtf8("SeerThreadManagerWidgetForm"));
        SeerThreadManagerWidgetForm->resize(854, 571);
        gridLayout_2 = new QGridLayout(SeerThreadManagerWidgetForm);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 0, -1, 0);
        groupBox = new QGroupBox(SeerThreadManagerWidgetForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QDetachTabWidget(groupBox);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(SeerThreadManagerWidgetForm);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(SeerThreadManagerWidgetForm);
    } // setupUi

    void retranslateUi(QWidget *SeerThreadManagerWidgetForm)
    {
        SeerThreadManagerWidgetForm->setWindowTitle(QApplication::translate("SeerThreadManagerWidgetForm", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("SeerThreadManagerWidgetForm", "Thread Info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SeerThreadManagerWidgetForm: public Ui_SeerThreadManagerWidgetForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEERTHREADMANAGERWIDGET_H
