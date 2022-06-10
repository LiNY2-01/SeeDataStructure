/********************************************************************************
** Form generated from reading UI file 'SeerLibraryBrowserWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEERLIBRARYBROWSERWIDGET_H
#define UI_SEERLIBRARYBROWSERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SeerLibraryBrowserWidgetForm
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *libraryTreeWidget;
    QLineEdit *librarySearchLineEdit;

    void setupUi(QWidget *SeerLibraryBrowserWidgetForm)
    {
        if (SeerLibraryBrowserWidgetForm->objectName().isEmpty())
            SeerLibraryBrowserWidgetForm->setObjectName(QString::fromUtf8("SeerLibraryBrowserWidgetForm"));
        SeerLibraryBrowserWidgetForm->resize(730, 698);
        gridLayout = new QGridLayout(SeerLibraryBrowserWidgetForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        libraryTreeWidget = new QTreeWidget(SeerLibraryBrowserWidgetForm);
        libraryTreeWidget->setObjectName(QString::fromUtf8("libraryTreeWidget"));
        libraryTreeWidget->setColumnCount(6);

        gridLayout->addWidget(libraryTreeWidget, 1, 0, 1, 2);

        librarySearchLineEdit = new QLineEdit(SeerLibraryBrowserWidgetForm);
        librarySearchLineEdit->setObjectName(QString::fromUtf8("librarySearchLineEdit"));

        gridLayout->addWidget(librarySearchLineEdit, 0, 0, 1, 2);


        retranslateUi(SeerLibraryBrowserWidgetForm);

        QMetaObject::connectSlotsByName(SeerLibraryBrowserWidgetForm);
    } // setupUi

    void retranslateUi(QWidget *SeerLibraryBrowserWidgetForm)
    {
        SeerLibraryBrowserWidgetForm->setWindowTitle(QApplication::translate("SeerLibraryBrowserWidgetForm", "Library Browser", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = libraryTreeWidget->headerItem();
        ___qtreewidgetitem->setText(5, QApplication::translate("SeerLibraryBrowserWidgetForm", "Ranges", nullptr));
        ___qtreewidgetitem->setText(4, QApplication::translate("SeerLibraryBrowserWidgetForm", "Thread Group", nullptr));
        ___qtreewidgetitem->setText(3, QApplication::translate("SeerLibraryBrowserWidgetForm", "Symbols Loaded", nullptr));
        ___qtreewidgetitem->setText(2, QApplication::translate("SeerLibraryBrowserWidgetForm", "Host-Name", nullptr));
        ___qtreewidgetitem->setText(1, QApplication::translate("SeerLibraryBrowserWidgetForm", "Target-Name", nullptr));
        ___qtreewidgetitem->setText(0, QApplication::translate("SeerLibraryBrowserWidgetForm", "Id", nullptr));
#ifndef QT_NO_TOOLTIP
        librarySearchLineEdit->setToolTip(QApplication::translate("SeerLibraryBrowserWidgetForm", "Search in the list of libraries. \"*\" is allowed.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        librarySearchLineEdit->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
    } // retranslateUi

};

namespace Ui {
    class SeerLibraryBrowserWidgetForm: public Ui_SeerLibraryBrowserWidgetForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEERLIBRARYBROWSERWIDGET_H
