/********************************************************************************
** Form generated from reading UI file 'SeerSourceBrowserWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEERSOURCEBROWSERWIDGET_H
#define UI_SEERSOURCEBROWSERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SeerSourceBrowserWidgetForm
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *sourceTreeWidget;
    QLineEdit *sourceSearchLineEdit;

    void setupUi(QWidget *SeerSourceBrowserWidgetForm)
    {
        if (SeerSourceBrowserWidgetForm->objectName().isEmpty())
            SeerSourceBrowserWidgetForm->setObjectName(QString::fromUtf8("SeerSourceBrowserWidgetForm"));
        SeerSourceBrowserWidgetForm->resize(730, 698);
        gridLayout = new QGridLayout(SeerSourceBrowserWidgetForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        sourceTreeWidget = new QTreeWidget(SeerSourceBrowserWidgetForm);
        sourceTreeWidget->setObjectName(QString::fromUtf8("sourceTreeWidget"));
        sourceTreeWidget->setColumnCount(2);

        gridLayout->addWidget(sourceTreeWidget, 1, 0, 1, 2);

        sourceSearchLineEdit = new QLineEdit(SeerSourceBrowserWidgetForm);
        sourceSearchLineEdit->setObjectName(QString::fromUtf8("sourceSearchLineEdit"));

        gridLayout->addWidget(sourceSearchLineEdit, 0, 0, 1, 2);


        retranslateUi(SeerSourceBrowserWidgetForm);

        QMetaObject::connectSlotsByName(SeerSourceBrowserWidgetForm);
    } // setupUi

    void retranslateUi(QWidget *SeerSourceBrowserWidgetForm)
    {
        SeerSourceBrowserWidgetForm->setWindowTitle(QApplication::translate("SeerSourceBrowserWidgetForm", "Source Browser", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = sourceTreeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("SeerSourceBrowserWidgetForm", "Full Name", nullptr));
        ___qtreewidgetitem->setText(0, QApplication::translate("SeerSourceBrowserWidgetForm", "File", nullptr));
#ifndef QT_NO_TOOLTIP
        sourceSearchLineEdit->setToolTip(QApplication::translate("SeerSourceBrowserWidgetForm", "Search in the list of files. \"*\" is allowed.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        sourceSearchLineEdit->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
    } // retranslateUi

};

namespace Ui {
    class SeerSourceBrowserWidgetForm: public Ui_SeerSourceBrowserWidgetForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEERSOURCEBROWSERWIDGET_H
