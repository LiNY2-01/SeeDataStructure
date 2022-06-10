/********************************************************************************
** Form generated from reading UI file 'SeerCloseSourceDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEERCLOSESOURCEDIALOG_H
#define UI_SEERCLOSESOURCEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_SeerCloseSourceDialogForm
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QTreeWidget *filenamesTreeWidget;

    void setupUi(QDialog *SeerCloseSourceDialogForm)
    {
        if (SeerCloseSourceDialogForm->objectName().isEmpty())
            SeerCloseSourceDialogForm->setObjectName(QString::fromUtf8("SeerCloseSourceDialogForm"));
        SeerCloseSourceDialogForm->resize(400, 300);
        gridLayout = new QGridLayout(SeerCloseSourceDialogForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonBox = new QDialogButtonBox(SeerCloseSourceDialogForm);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);

        filenamesTreeWidget = new QTreeWidget(SeerCloseSourceDialogForm);
        filenamesTreeWidget->setObjectName(QString::fromUtf8("filenamesTreeWidget"));
        filenamesTreeWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        filenamesTreeWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
        filenamesTreeWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        filenamesTreeWidget->setSortingEnabled(true);

        gridLayout->addWidget(filenamesTreeWidget, 0, 0, 1, 1);


        retranslateUi(SeerCloseSourceDialogForm);
        QObject::connect(buttonBox, SIGNAL(accepted()), SeerCloseSourceDialogForm, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SeerCloseSourceDialogForm, SLOT(reject()));

        QMetaObject::connectSlotsByName(SeerCloseSourceDialogForm);
    } // setupUi

    void retranslateUi(QDialog *SeerCloseSourceDialogForm)
    {
        SeerCloseSourceDialogForm->setWindowTitle(QApplication::translate("SeerCloseSourceDialogForm", "Seer - Select files to close", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = filenamesTreeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("SeerCloseSourceDialogForm", "Full Name", nullptr));
        ___qtreewidgetitem->setText(0, QApplication::translate("SeerCloseSourceDialogForm", "File", nullptr));
#ifndef QT_NO_TOOLTIP
        filenamesTreeWidget->setToolTip(QApplication::translate("SeerCloseSourceDialogForm", "Select the files to close.", nullptr));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class SeerCloseSourceDialogForm: public Ui_SeerCloseSourceDialogForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEERCLOSESOURCEDIALOG_H
