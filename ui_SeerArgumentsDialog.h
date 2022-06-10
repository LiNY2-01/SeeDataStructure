/********************************************************************************
** Form generated from reading UI file 'SeerArgumentsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEERARGUMENTSDIALOG_H
#define UI_SEERARGUMENTSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_SeerArgumentsDialogForm
{
public:
    QGridLayout *gridLayout;
    QGroupBox *executableArgumentsGroupBox;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *executableArgumentsLineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SeerArgumentsDialogForm)
    {
        if (SeerArgumentsDialogForm->objectName().isEmpty())
            SeerArgumentsDialogForm->setObjectName(QString::fromUtf8("SeerArgumentsDialogForm"));
        SeerArgumentsDialogForm->resize(375, 121);
        gridLayout = new QGridLayout(SeerArgumentsDialogForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        executableArgumentsGroupBox = new QGroupBox(SeerArgumentsDialogForm);
        executableArgumentsGroupBox->setObjectName(QString::fromUtf8("executableArgumentsGroupBox"));
        executableArgumentsGroupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        horizontalLayout_3 = new QHBoxLayout(executableArgumentsGroupBox);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        executableArgumentsLineEdit = new QLineEdit(executableArgumentsGroupBox);
        executableArgumentsLineEdit->setObjectName(QString::fromUtf8("executableArgumentsLineEdit"));

        horizontalLayout_3->addWidget(executableArgumentsLineEdit);


        gridLayout->addWidget(executableArgumentsGroupBox, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(SeerArgumentsDialogForm);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(SeerArgumentsDialogForm);
        QObject::connect(buttonBox, SIGNAL(accepted()), SeerArgumentsDialogForm, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SeerArgumentsDialogForm, SLOT(reject()));

        QMetaObject::connectSlotsByName(SeerArgumentsDialogForm);
    } // setupUi

    void retranslateUi(QDialog *SeerArgumentsDialogForm)
    {
        SeerArgumentsDialogForm->setWindowTitle(QApplication::translate("SeerArgumentsDialogForm", "Select Executable Arguments to Use", nullptr));
        executableArgumentsGroupBox->setTitle(QApplication::translate("SeerArgumentsDialogForm", "Executable Arguments", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SeerArgumentsDialogForm: public Ui_SeerArgumentsDialogForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEERARGUMENTSDIALOG_H
