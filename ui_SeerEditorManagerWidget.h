/********************************************************************************
** Form generated from reading UI file 'SeerEditorManagerWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEEREDITORMANAGERWIDGET_H
#define UI_SEEREDITORMANAGERWIDGET_H

#include <QDetachTabWidget.h>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SeerEditorManagerWidgetForm
{
public:
    QGridLayout *gridLayout;
    QDetachTabWidget *tabWidget;

    void setupUi(QWidget *SeerEditorManagerWidgetForm)
    {
        if (SeerEditorManagerWidgetForm->objectName().isEmpty())
            SeerEditorManagerWidgetForm->setObjectName(QString::fromUtf8("SeerEditorManagerWidgetForm"));
        SeerEditorManagerWidgetForm->resize(854, 571);
        gridLayout = new QGridLayout(SeerEditorManagerWidgetForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QDetachTabWidget(SeerEditorManagerWidgetForm);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(SeerEditorManagerWidgetForm);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(SeerEditorManagerWidgetForm);
    } // setupUi

    void retranslateUi(QWidget *SeerEditorManagerWidgetForm)
    {
        SeerEditorManagerWidgetForm->setWindowTitle(QApplication::translate("SeerEditorManagerWidgetForm", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SeerEditorManagerWidgetForm: public Ui_SeerEditorManagerWidgetForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEEREDITORMANAGERWIDGET_H
