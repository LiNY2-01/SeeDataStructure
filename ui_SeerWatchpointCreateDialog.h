/********************************************************************************
** Form generated from reading UI file 'SeerWatchpointCreateDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEERWATCHPOINTCREATEDIALOG_H
#define UI_SEERWATCHPOINTCREATEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SeerWatchpointCreateDialogForm
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *watchpointLocationGroupBox;
    QGridLayout *gridLayout;
    QLabel *expressionLabel;
    QLineEdit *expressionLineEdit;
    QGroupBox *watchpointTypeGroupBox;
    QGridLayout *gridLayout_2;
    QRadioButton *readRadioButton;
    QRadioButton *readWriteRadioButton;
    QRadioButton *writeRadioButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SeerWatchpointCreateDialogForm)
    {
        if (SeerWatchpointCreateDialogForm->objectName().isEmpty())
            SeerWatchpointCreateDialogForm->setObjectName(QString::fromUtf8("SeerWatchpointCreateDialogForm"));
        SeerWatchpointCreateDialogForm->resize(348, 251);
        verticalLayout = new QVBoxLayout(SeerWatchpointCreateDialogForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        watchpointLocationGroupBox = new QGroupBox(SeerWatchpointCreateDialogForm);
        watchpointLocationGroupBox->setObjectName(QString::fromUtf8("watchpointLocationGroupBox"));
        gridLayout = new QGridLayout(watchpointLocationGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        expressionLabel = new QLabel(watchpointLocationGroupBox);
        expressionLabel->setObjectName(QString::fromUtf8("expressionLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(expressionLabel->sizePolicy().hasHeightForWidth());
        expressionLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(expressionLabel, 0, 0, 1, 1);

        expressionLineEdit = new QLineEdit(watchpointLocationGroupBox);
        expressionLineEdit->setObjectName(QString::fromUtf8("expressionLineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(100);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(expressionLineEdit->sizePolicy().hasHeightForWidth());
        expressionLineEdit->setSizePolicy(sizePolicy1);
        expressionLineEdit->setClearButtonEnabled(true);

        gridLayout->addWidget(expressionLineEdit, 0, 1, 1, 2);


        verticalLayout->addWidget(watchpointLocationGroupBox);

        watchpointTypeGroupBox = new QGroupBox(SeerWatchpointCreateDialogForm);
        watchpointTypeGroupBox->setObjectName(QString::fromUtf8("watchpointTypeGroupBox"));
        gridLayout_2 = new QGridLayout(watchpointTypeGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        readRadioButton = new QRadioButton(watchpointTypeGroupBox);
        readRadioButton->setObjectName(QString::fromUtf8("readRadioButton"));

        gridLayout_2->addWidget(readRadioButton, 1, 0, 1, 1);

        readWriteRadioButton = new QRadioButton(watchpointTypeGroupBox);
        readWriteRadioButton->setObjectName(QString::fromUtf8("readWriteRadioButton"));

        gridLayout_2->addWidget(readWriteRadioButton, 2, 0, 1, 1);

        writeRadioButton = new QRadioButton(watchpointTypeGroupBox);
        writeRadioButton->setObjectName(QString::fromUtf8("writeRadioButton"));

        gridLayout_2->addWidget(writeRadioButton, 0, 0, 1, 1);


        verticalLayout->addWidget(watchpointTypeGroupBox);

        buttonBox = new QDialogButtonBox(SeerWatchpointCreateDialogForm);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SeerWatchpointCreateDialogForm);
        QObject::connect(buttonBox, SIGNAL(accepted()), SeerWatchpointCreateDialogForm, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SeerWatchpointCreateDialogForm, SLOT(reject()));

        QMetaObject::connectSlotsByName(SeerWatchpointCreateDialogForm);
    } // setupUi

    void retranslateUi(QDialog *SeerWatchpointCreateDialogForm)
    {
        SeerWatchpointCreateDialogForm->setWindowTitle(QApplication::translate("SeerWatchpointCreateDialogForm", "Create a Watchpoint", nullptr));
        watchpointLocationGroupBox->setTitle(QApplication::translate("SeerWatchpointCreateDialogForm", "Watchpoint Location", nullptr));
        expressionLabel->setText(QApplication::translate("SeerWatchpointCreateDialogForm", "Expression", nullptr));
        watchpointTypeGroupBox->setTitle(QApplication::translate("SeerWatchpointCreateDialogForm", "Watchpoint Type", nullptr));
        readRadioButton->setText(QApplication::translate("SeerWatchpointCreateDialogForm", "Read Access", nullptr));
        readWriteRadioButton->setText(QApplication::translate("SeerWatchpointCreateDialogForm", "Read/Write Access", nullptr));
        writeRadioButton->setText(QApplication::translate("SeerWatchpointCreateDialogForm", "Write Access", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SeerWatchpointCreateDialogForm: public Ui_SeerWatchpointCreateDialogForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEERWATCHPOINTCREATEDIALOG_H
