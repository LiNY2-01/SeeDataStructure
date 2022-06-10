/********************************************************************************
** Form generated from reading UI file 'SeerTypeBrowserWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEERTYPEBROWSERWIDGET_H
#define UI_SEERTYPEBROWSERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SeerTypeBrowserWidgetForm
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *typeTreeWidget;
    QLineEdit *typeSearchLineEdit;

    void setupUi(QWidget *SeerTypeBrowserWidgetForm)
    {
        if (SeerTypeBrowserWidgetForm->objectName().isEmpty())
            SeerTypeBrowserWidgetForm->setObjectName(QString::fromUtf8("SeerTypeBrowserWidgetForm"));
        SeerTypeBrowserWidgetForm->resize(730, 698);
        gridLayout = new QGridLayout(SeerTypeBrowserWidgetForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        typeTreeWidget = new QTreeWidget(SeerTypeBrowserWidgetForm);
        typeTreeWidget->setObjectName(QString::fromUtf8("typeTreeWidget"));
        typeTreeWidget->setColumnCount(4);

        gridLayout->addWidget(typeTreeWidget, 1, 0, 1, 2);

        typeSearchLineEdit = new QLineEdit(SeerTypeBrowserWidgetForm);
        typeSearchLineEdit->setObjectName(QString::fromUtf8("typeSearchLineEdit"));

        gridLayout->addWidget(typeSearchLineEdit, 0, 0, 1, 2);


        retranslateUi(SeerTypeBrowserWidgetForm);

        QMetaObject::connectSlotsByName(SeerTypeBrowserWidgetForm);
    } // setupUi

    void retranslateUi(QWidget *SeerTypeBrowserWidgetForm)
    {
        SeerTypeBrowserWidgetForm->setWindowTitle(QApplication::translate("SeerTypeBrowserWidgetForm", "Type Browser", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = typeTreeWidget->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("SeerTypeBrowserWidgetForm", "Full Name", nullptr));
        ___qtreewidgetitem->setText(2, QApplication::translate("SeerTypeBrowserWidgetForm", "Line", nullptr));
        ___qtreewidgetitem->setText(1, QApplication::translate("SeerTypeBrowserWidgetForm", "File", nullptr));
        ___qtreewidgetitem->setText(0, QApplication::translate("SeerTypeBrowserWidgetForm", "Type", nullptr));
#ifndef QT_NO_TOOLTIP
        typeSearchLineEdit->setToolTip(QApplication::translate("SeerTypeBrowserWidgetForm", "Search in the list of types. \"*\" is allowed.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        typeSearchLineEdit->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
    } // retranslateUi

};

namespace Ui {
    class SeerTypeBrowserWidgetForm: public Ui_SeerTypeBrowserWidgetForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEERTYPEBROWSERWIDGET_H
