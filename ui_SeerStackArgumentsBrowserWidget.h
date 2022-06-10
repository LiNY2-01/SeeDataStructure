/********************************************************************************
** Form generated from reading UI file 'SeerStackArgumentsBrowserWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEERSTACKARGUMENTSBROWSERWIDGET_H
#define UI_SEERSTACKARGUMENTSBROWSERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SeerStackArgumentsBrowserWidgetForm
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *argumentsTreeWidget;

    void setupUi(QWidget *SeerStackArgumentsBrowserWidgetForm)
    {
        if (SeerStackArgumentsBrowserWidgetForm->objectName().isEmpty())
            SeerStackArgumentsBrowserWidgetForm->setObjectName(QString::fromUtf8("SeerStackArgumentsBrowserWidgetForm"));
        SeerStackArgumentsBrowserWidgetForm->resize(794, 528);
        gridLayout = new QGridLayout(SeerStackArgumentsBrowserWidgetForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        argumentsTreeWidget = new QTreeWidget(SeerStackArgumentsBrowserWidgetForm);
        argumentsTreeWidget->setObjectName(QString::fromUtf8("argumentsTreeWidget"));
        argumentsTreeWidget->setColumnCount(3);

        gridLayout->addWidget(argumentsTreeWidget, 0, 0, 1, 2);


        retranslateUi(SeerStackArgumentsBrowserWidgetForm);

        QMetaObject::connectSlotsByName(SeerStackArgumentsBrowserWidgetForm);
    } // setupUi

    void retranslateUi(QWidget *SeerStackArgumentsBrowserWidgetForm)
    {
        SeerStackArgumentsBrowserWidgetForm->setWindowTitle(QApplication::translate("SeerStackArgumentsBrowserWidgetForm", "Form", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = argumentsTreeWidget->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("SeerStackArgumentsBrowserWidgetForm", "Value", nullptr));
        ___qtreewidgetitem->setText(1, QApplication::translate("SeerStackArgumentsBrowserWidgetForm", "Name", nullptr));
        ___qtreewidgetitem->setText(0, QApplication::translate("SeerStackArgumentsBrowserWidgetForm", "Level", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SeerStackArgumentsBrowserWidgetForm: public Ui_SeerStackArgumentsBrowserWidgetForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEERSTACKARGUMENTSBROWSERWIDGET_H
