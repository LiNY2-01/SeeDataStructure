/********************************************************************************
** Form generated from reading UI file 'SeerSourceLibraryManagerWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEERSOURCELIBRARYMANAGERWIDGET_H
#define UI_SEERSOURCELIBRARYMANAGERWIDGET_H

#include <QDetachTabWidget.h>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SeerSourceLibraryManagerWidgetForm
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QDetachTabWidget *tabWidget;

    void setupUi(QWidget *SeerSourceLibraryManagerWidgetForm)
    {
        if (SeerSourceLibraryManagerWidgetForm->objectName().isEmpty())
            SeerSourceLibraryManagerWidgetForm->setObjectName(QString::fromUtf8("SeerSourceLibraryManagerWidgetForm"));
        SeerSourceLibraryManagerWidgetForm->resize(854, 571);
        gridLayout_2 = new QGridLayout(SeerSourceLibraryManagerWidgetForm);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 0, -1, 0);
        groupBox = new QGroupBox(SeerSourceLibraryManagerWidgetForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QDetachTabWidget(groupBox);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(SeerSourceLibraryManagerWidgetForm);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(SeerSourceLibraryManagerWidgetForm);
    } // setupUi

    void retranslateUi(QWidget *SeerSourceLibraryManagerWidgetForm)
    {
        SeerSourceLibraryManagerWidgetForm->setWindowTitle(QApplication::translate("SeerSourceLibraryManagerWidgetForm", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("SeerSourceLibraryManagerWidgetForm", "Source/Libraries", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SeerSourceLibraryManagerWidgetForm: public Ui_SeerSourceLibraryManagerWidgetForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEERSOURCELIBRARYMANAGERWIDGET_H
