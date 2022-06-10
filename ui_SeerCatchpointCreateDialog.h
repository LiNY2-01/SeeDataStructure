/********************************************************************************
** Form generated from reading UI file 'SeerCatchpointCreateDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEERCATCHPOINTCREATEDIALOG_H
#define UI_SEERCATCHPOINTCREATEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SeerCatchpointCreateDialogForm
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *catchpointTypeGroupBox;
    QGridLayout *gridLayout_2;
    QRadioButton *throwRadioButton;
    QRadioButton *loadRadioButton;
    QRadioButton *rethrowRadioButton;
    QRadioButton *unloadRadioButton;
    QRadioButton *catchRadioButton;
    QGroupBox *catchpointDetailsGroupBox;
    QGridLayout *gridLayout;
    QCheckBox *temporaryCheckBox;
    QLabel *nameLabel;
    QLineEdit *nameLineEdit;
    QDialogButtonBox *buttonBox;
    QButtonGroup *typeButtonGroup;

    void setupUi(QDialog *SeerCatchpointCreateDialogForm)
    {
        if (SeerCatchpointCreateDialogForm->objectName().isEmpty())
            SeerCatchpointCreateDialogForm->setObjectName(QString::fromUtf8("SeerCatchpointCreateDialogForm"));
        SeerCatchpointCreateDialogForm->resize(521, 304);
        verticalLayout = new QVBoxLayout(SeerCatchpointCreateDialogForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        catchpointTypeGroupBox = new QGroupBox(SeerCatchpointCreateDialogForm);
        catchpointTypeGroupBox->setObjectName(QString::fromUtf8("catchpointTypeGroupBox"));
        gridLayout_2 = new QGridLayout(catchpointTypeGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        throwRadioButton = new QRadioButton(catchpointTypeGroupBox);
        typeButtonGroup = new QButtonGroup(SeerCatchpointCreateDialogForm);
        typeButtonGroup->setObjectName(QString::fromUtf8("typeButtonGroup"));
        typeButtonGroup->addButton(throwRadioButton);
        throwRadioButton->setObjectName(QString::fromUtf8("throwRadioButton"));

        gridLayout_2->addWidget(throwRadioButton, 0, 0, 1, 1);

        loadRadioButton = new QRadioButton(catchpointTypeGroupBox);
        typeButtonGroup->addButton(loadRadioButton);
        loadRadioButton->setObjectName(QString::fromUtf8("loadRadioButton"));

        gridLayout_2->addWidget(loadRadioButton, 0, 1, 1, 1);

        rethrowRadioButton = new QRadioButton(catchpointTypeGroupBox);
        typeButtonGroup->addButton(rethrowRadioButton);
        rethrowRadioButton->setObjectName(QString::fromUtf8("rethrowRadioButton"));

        gridLayout_2->addWidget(rethrowRadioButton, 1, 0, 1, 1);

        unloadRadioButton = new QRadioButton(catchpointTypeGroupBox);
        typeButtonGroup->addButton(unloadRadioButton);
        unloadRadioButton->setObjectName(QString::fromUtf8("unloadRadioButton"));

        gridLayout_2->addWidget(unloadRadioButton, 1, 1, 1, 1);

        catchRadioButton = new QRadioButton(catchpointTypeGroupBox);
        typeButtonGroup->addButton(catchRadioButton);
        catchRadioButton->setObjectName(QString::fromUtf8("catchRadioButton"));

        gridLayout_2->addWidget(catchRadioButton, 2, 0, 1, 1);


        verticalLayout->addWidget(catchpointTypeGroupBox);

        catchpointDetailsGroupBox = new QGroupBox(SeerCatchpointCreateDialogForm);
        catchpointDetailsGroupBox->setObjectName(QString::fromUtf8("catchpointDetailsGroupBox"));
        gridLayout = new QGridLayout(catchpointDetailsGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        temporaryCheckBox = new QCheckBox(catchpointDetailsGroupBox);
        temporaryCheckBox->setObjectName(QString::fromUtf8("temporaryCheckBox"));

        gridLayout->addWidget(temporaryCheckBox, 0, 0, 1, 2);

        nameLabel = new QLabel(catchpointDetailsGroupBox);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        gridLayout->addWidget(nameLabel, 1, 0, 1, 1);

        nameLineEdit = new QLineEdit(catchpointDetailsGroupBox);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));
        nameLineEdit->setClearButtonEnabled(true);

        gridLayout->addWidget(nameLineEdit, 1, 1, 1, 1);


        verticalLayout->addWidget(catchpointDetailsGroupBox);

        buttonBox = new QDialogButtonBox(SeerCatchpointCreateDialogForm);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SeerCatchpointCreateDialogForm);
        QObject::connect(buttonBox, SIGNAL(accepted()), SeerCatchpointCreateDialogForm, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SeerCatchpointCreateDialogForm, SLOT(reject()));

        QMetaObject::connectSlotsByName(SeerCatchpointCreateDialogForm);
    } // setupUi

    void retranslateUi(QDialog *SeerCatchpointCreateDialogForm)
    {
        SeerCatchpointCreateDialogForm->setWindowTitle(QApplication::translate("SeerCatchpointCreateDialogForm", "Create a Catchpoint", nullptr));
        catchpointTypeGroupBox->setTitle(QApplication::translate("SeerCatchpointCreateDialogForm", "Catchpoint Type", nullptr));
        throwRadioButton->setText(QApplication::translate("SeerCatchpointCreateDialogForm", "Catch on 'throw'", nullptr));
        loadRadioButton->setText(QApplication::translate("SeerCatchpointCreateDialogForm", "Catch on library 'load'", nullptr));
        rethrowRadioButton->setText(QApplication::translate("SeerCatchpointCreateDialogForm", "Catch on 'rethrow'", nullptr));
        unloadRadioButton->setText(QApplication::translate("SeerCatchpointCreateDialogForm", "Catch on library 'unload'", nullptr));
        catchRadioButton->setText(QApplication::translate("SeerCatchpointCreateDialogForm", "Catch on 'catch'", nullptr));
        catchpointDetailsGroupBox->setTitle(QApplication::translate("SeerCatchpointCreateDialogForm", "Catchpoint Details", nullptr));
        temporaryCheckBox->setText(QApplication::translate("SeerCatchpointCreateDialogForm", "Temporary", nullptr));
        nameLabel->setText(QApplication::translate("SeerCatchpointCreateDialogForm", "Name", nullptr));
        nameLineEdit->setPlaceholderText(QApplication::translate("SeerCatchpointCreateDialogForm", "Exception/Library name as a regular expression.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SeerCatchpointCreateDialogForm: public Ui_SeerCatchpointCreateDialogForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEERCATCHPOINTCREATEDIALOG_H
