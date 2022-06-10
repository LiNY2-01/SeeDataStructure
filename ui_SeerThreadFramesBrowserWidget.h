/********************************************************************************
** Form generated from reading UI file 'SeerThreadFramesBrowserWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEERTHREADFRAMESBROWSERWIDGET_H
#define UI_SEERTHREADFRAMESBROWSERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SeerThreadFramesBrowserWidgetForm
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *threadTreeWidget;

    void setupUi(QWidget *SeerThreadFramesBrowserWidgetForm)
    {
        if (SeerThreadFramesBrowserWidgetForm->objectName().isEmpty())
            SeerThreadFramesBrowserWidgetForm->setObjectName(QString::fromUtf8("SeerThreadFramesBrowserWidgetForm"));
        SeerThreadFramesBrowserWidgetForm->resize(794, 528);
        gridLayout = new QGridLayout(SeerThreadFramesBrowserWidgetForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        threadTreeWidget = new QTreeWidget(SeerThreadFramesBrowserWidgetForm);
        threadTreeWidget->setObjectName(QString::fromUtf8("threadTreeWidget"));
        threadTreeWidget->setColumnCount(13);

        gridLayout->addWidget(threadTreeWidget, 0, 0, 1, 2);


        retranslateUi(SeerThreadFramesBrowserWidgetForm);

        QMetaObject::connectSlotsByName(SeerThreadFramesBrowserWidgetForm);
    } // setupUi

    void retranslateUi(QWidget *SeerThreadFramesBrowserWidgetForm)
    {
        SeerThreadFramesBrowserWidgetForm->setWindowTitle(QApplication::translate("SeerThreadFramesBrowserWidgetForm", "Form", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = threadTreeWidget->headerItem();
        ___qtreewidgetitem->setText(12, QApplication::translate("SeerThreadFramesBrowserWidgetForm", "Core", nullptr));
        ___qtreewidgetitem->setText(11, QApplication::translate("SeerThreadFramesBrowserWidgetForm", "Arch", nullptr));
        ___qtreewidgetitem->setText(10, QApplication::translate("SeerThreadFramesBrowserWidgetForm", "Address", nullptr));
        ___qtreewidgetitem->setText(9, QApplication::translate("SeerThreadFramesBrowserWidgetForm", "Target Id", nullptr));
        ___qtreewidgetitem->setText(8, QApplication::translate("SeerThreadFramesBrowserWidgetForm", "Name", nullptr));
        ___qtreewidgetitem->setText(7, QApplication::translate("SeerThreadFramesBrowserWidgetForm", "Arguments", nullptr));
        ___qtreewidgetitem->setText(6, QApplication::translate("SeerThreadFramesBrowserWidgetForm", "Fullname", nullptr));
        ___qtreewidgetitem->setText(5, QApplication::translate("SeerThreadFramesBrowserWidgetForm", "Line", nullptr));
        ___qtreewidgetitem->setText(4, QApplication::translate("SeerThreadFramesBrowserWidgetForm", "File", nullptr));
        ___qtreewidgetitem->setText(3, QApplication::translate("SeerThreadFramesBrowserWidgetForm", "Function", nullptr));
        ___qtreewidgetitem->setText(2, QApplication::translate("SeerThreadFramesBrowserWidgetForm", "Level", nullptr));
        ___qtreewidgetitem->setText(1, QApplication::translate("SeerThreadFramesBrowserWidgetForm", "State", nullptr));
        ___qtreewidgetitem->setText(0, QApplication::translate("SeerThreadFramesBrowserWidgetForm", "Thread Id", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SeerThreadFramesBrowserWidgetForm: public Ui_SeerThreadFramesBrowserWidgetForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEERTHREADFRAMESBROWSERWIDGET_H
