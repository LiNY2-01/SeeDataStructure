/********************************************************************************
** Form generated from reading UI file 'SeerConfigDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEERCONFIGDIALOG_H
#define UI_SEERCONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QStackedWidget>

QT_BEGIN_NAMESPACE

class Ui_SeerConfigDialogForm
{
public:
    QGridLayout *gridLayout;
    QListWidget *contentsListWidget;
    QStackedWidget *pagesStackedWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SeerConfigDialogForm)
    {
        if (SeerConfigDialogForm->objectName().isEmpty())
            SeerConfigDialogForm->setObjectName(QString::fromUtf8("SeerConfigDialogForm"));
        SeerConfigDialogForm->resize(736, 569);
        gridLayout = new QGridLayout(SeerConfigDialogForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        contentsListWidget = new QListWidget(SeerConfigDialogForm);
        contentsListWidget->setObjectName(QString::fromUtf8("contentsListWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(25);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(contentsListWidget->sizePolicy().hasHeightForWidth());
        contentsListWidget->setSizePolicy(sizePolicy);

        gridLayout->addWidget(contentsListWidget, 0, 0, 1, 1);

        pagesStackedWidget = new QStackedWidget(SeerConfigDialogForm);
        pagesStackedWidget->setObjectName(QString::fromUtf8("pagesStackedWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(75);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pagesStackedWidget->sizePolicy().hasHeightForWidth());
        pagesStackedWidget->setSizePolicy(sizePolicy1);
        pagesStackedWidget->setLineWidth(1);

        gridLayout->addWidget(pagesStackedWidget, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(SeerConfigDialogForm);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::Reset);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 2);


        retranslateUi(SeerConfigDialogForm);
        QObject::connect(buttonBox, SIGNAL(accepted()), SeerConfigDialogForm, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SeerConfigDialogForm, SLOT(reject()));

        pagesStackedWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(SeerConfigDialogForm);
    } // setupUi

    void retranslateUi(QDialog *SeerConfigDialogForm)
    {
        SeerConfigDialogForm->setWindowTitle(QApplication::translate("SeerConfigDialogForm", "Seer - Configuration", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SeerConfigDialogForm: public Ui_SeerConfigDialogForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEERCONFIGDIALOG_H
