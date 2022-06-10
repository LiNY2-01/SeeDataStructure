/********************************************************************************
** Form generated from reading UI file 'SeerStackLocalsBrowserWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEERSTACKLOCALSBROWSERWIDGET_H
#define UI_SEERSTACKLOCALSBROWSERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SeerStackLocalsBrowserWidgetForm
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *localsTreeWidget;

    void setupUi(QWidget *SeerStackLocalsBrowserWidgetForm)
    {
        if (SeerStackLocalsBrowserWidgetForm->objectName().isEmpty())
            SeerStackLocalsBrowserWidgetForm->setObjectName(QString::fromUtf8("SeerStackLocalsBrowserWidgetForm"));
        SeerStackLocalsBrowserWidgetForm->resize(794, 528);
        gridLayout = new QGridLayout(SeerStackLocalsBrowserWidgetForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        localsTreeWidget = new QTreeWidget(SeerStackLocalsBrowserWidgetForm);
        localsTreeWidget->setObjectName(QString::fromUtf8("localsTreeWidget"));
        localsTreeWidget->setColumnCount(4);

        gridLayout->addWidget(localsTreeWidget, 0, 0, 1, 2);


        retranslateUi(SeerStackLocalsBrowserWidgetForm);

        QMetaObject::connectSlotsByName(SeerStackLocalsBrowserWidgetForm);
    } // setupUi

    void retranslateUi(QWidget *SeerStackLocalsBrowserWidgetForm)
    {
        SeerStackLocalsBrowserWidgetForm->setWindowTitle(QApplication::translate("SeerStackLocalsBrowserWidgetForm", "Form", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = localsTreeWidget->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("SeerStackLocalsBrowserWidgetForm", "Used", nullptr));
        ___qtreewidgetitem->setText(2, QApplication::translate("SeerStackLocalsBrowserWidgetForm", "Value", nullptr));
        ___qtreewidgetitem->setText(1, QApplication::translate("SeerStackLocalsBrowserWidgetForm", "Arg", nullptr));
        ___qtreewidgetitem->setText(0, QApplication::translate("SeerStackLocalsBrowserWidgetForm", "Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SeerStackLocalsBrowserWidgetForm: public Ui_SeerStackLocalsBrowserWidgetForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEERSTACKLOCALSBROWSERWIDGET_H
