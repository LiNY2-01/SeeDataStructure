/********************************************************************************
** Form generated from reading UI file 'SeerStackFramesBrowserWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEERSTACKFRAMESBROWSERWIDGET_H
#define UI_SEERSTACKFRAMESBROWSERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SeerStackFramesBrowserWidgetForm
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *stackTreeWidget;

    void setupUi(QWidget *SeerStackFramesBrowserWidgetForm)
    {
        if (SeerStackFramesBrowserWidgetForm->objectName().isEmpty())
            SeerStackFramesBrowserWidgetForm->setObjectName(QString::fromUtf8("SeerStackFramesBrowserWidgetForm"));
        SeerStackFramesBrowserWidgetForm->resize(794, 528);
        gridLayout = new QGridLayout(SeerStackFramesBrowserWidgetForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackTreeWidget = new QTreeWidget(SeerStackFramesBrowserWidgetForm);
        stackTreeWidget->setObjectName(QString::fromUtf8("stackTreeWidget"));
        stackTreeWidget->setColumnCount(7);

        gridLayout->addWidget(stackTreeWidget, 0, 0, 1, 1);


        retranslateUi(SeerStackFramesBrowserWidgetForm);

        QMetaObject::connectSlotsByName(SeerStackFramesBrowserWidgetForm);
    } // setupUi

    void retranslateUi(QWidget *SeerStackFramesBrowserWidgetForm)
    {
        SeerStackFramesBrowserWidgetForm->setWindowTitle(QApplication::translate("SeerStackFramesBrowserWidgetForm", "Form", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = stackTreeWidget->headerItem();
        ___qtreewidgetitem->setText(6, QApplication::translate("SeerStackFramesBrowserWidgetForm", "Arch", nullptr));
        ___qtreewidgetitem->setText(5, QApplication::translate("SeerStackFramesBrowserWidgetForm", "Address", nullptr));
        ___qtreewidgetitem->setText(4, QApplication::translate("SeerStackFramesBrowserWidgetForm", "Fullname", nullptr));
        ___qtreewidgetitem->setText(3, QApplication::translate("SeerStackFramesBrowserWidgetForm", "Line", nullptr));
        ___qtreewidgetitem->setText(2, QApplication::translate("SeerStackFramesBrowserWidgetForm", "File", nullptr));
        ___qtreewidgetitem->setText(1, QApplication::translate("SeerStackFramesBrowserWidgetForm", "Function", nullptr));
        ___qtreewidgetitem->setText(0, QApplication::translate("SeerStackFramesBrowserWidgetForm", "Level", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SeerStackFramesBrowserWidgetForm: public Ui_SeerStackFramesBrowserWidgetForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEERSTACKFRAMESBROWSERWIDGET_H
