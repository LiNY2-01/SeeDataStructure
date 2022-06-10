/********************************************************************************
** Form generated from reading UI file 'SeerThreadIdsBrowserWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEERTHREADIDSBROWSERWIDGET_H
#define UI_SEERTHREADIDSBROWSERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SeerThreadIdsBrowserWidgetForm
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *idsTreeWidget;

    void setupUi(QWidget *SeerThreadIdsBrowserWidgetForm)
    {
        if (SeerThreadIdsBrowserWidgetForm->objectName().isEmpty())
            SeerThreadIdsBrowserWidgetForm->setObjectName(QString::fromUtf8("SeerThreadIdsBrowserWidgetForm"));
        SeerThreadIdsBrowserWidgetForm->resize(794, 528);
        gridLayout = new QGridLayout(SeerThreadIdsBrowserWidgetForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        idsTreeWidget = new QTreeWidget(SeerThreadIdsBrowserWidgetForm);
        idsTreeWidget->setObjectName(QString::fromUtf8("idsTreeWidget"));
        idsTreeWidget->setColumnCount(1);

        gridLayout->addWidget(idsTreeWidget, 0, 0, 1, 2);


        retranslateUi(SeerThreadIdsBrowserWidgetForm);

        QMetaObject::connectSlotsByName(SeerThreadIdsBrowserWidgetForm);
    } // setupUi

    void retranslateUi(QWidget *SeerThreadIdsBrowserWidgetForm)
    {
        SeerThreadIdsBrowserWidgetForm->setWindowTitle(QApplication::translate("SeerThreadIdsBrowserWidgetForm", "Form", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = idsTreeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("SeerThreadIdsBrowserWidgetForm", "Id", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SeerThreadIdsBrowserWidgetForm: public Ui_SeerThreadIdsBrowserWidgetForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEERTHREADIDSBROWSERWIDGET_H
