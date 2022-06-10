/********************************************************************************
** Form generated from reading UI file 'SeerSlashProcDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEERSLASHPROCDIALOG_H
#define UI_SEERSLASHPROCDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include "QProcessInfoWidget.h"

QT_BEGIN_NAMESPACE

class Ui_SeerSlashProcDialogForm
{
public:
    QGridLayout *gridLayout;
    QProcessInfoWidget *processInfoWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SeerSlashProcDialogForm)
    {
        if (SeerSlashProcDialogForm->objectName().isEmpty())
            SeerSlashProcDialogForm->setObjectName(QString::fromUtf8("SeerSlashProcDialogForm"));
        SeerSlashProcDialogForm->resize(589, 562);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/seer/resources/seer_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        SeerSlashProcDialogForm->setWindowIcon(icon);
        gridLayout = new QGridLayout(SeerSlashProcDialogForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        processInfoWidget = new QProcessInfoWidget(SeerSlashProcDialogForm);
        processInfoWidget->setObjectName(QString::fromUtf8("processInfoWidget"));

        gridLayout->addWidget(processInfoWidget, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(SeerSlashProcDialogForm);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(SeerSlashProcDialogForm);
        QObject::connect(buttonBox, SIGNAL(accepted()), SeerSlashProcDialogForm, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SeerSlashProcDialogForm, SLOT(reject()));

        QMetaObject::connectSlotsByName(SeerSlashProcDialogForm);
    } // setupUi

    void retranslateUi(QDialog *SeerSlashProcDialogForm)
    {
        SeerSlashProcDialogForm->setWindowTitle(QApplication::translate("SeerSlashProcDialogForm", "Seer - System Processes", nullptr));
#ifndef QT_NO_TOOLTIP
        SeerSlashProcDialogForm->setToolTip(QApplication::translate("SeerSlashProcDialogForm", "Select a process pid.", nullptr));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class SeerSlashProcDialogForm: public Ui_SeerSlashProcDialogForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEERSLASHPROCDIALOG_H
