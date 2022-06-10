/********************************************************************************
** Form generated from reading UI file 'SeerBreakpointCreateDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEERBREAKPOINTCREATEDIALOG_H
#define UI_SEERBREAKPOINTCREATEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SeerBreakpointCreateDialogForm
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *breakpointLocationGroupBox;
    QGridLayout *gridLayout;
    QLabel *filenameLabel;
    QLineEdit *filenameLineEdit;
    QLabel *lineNumberLabel;
    QLineEdit *lineNumberLineEdit;
    QSpacerItem *lineNumberHorizontalSpacer;
    QLabel *functionLabel;
    QLineEdit *functionLineEdit;
    QLabel *labelLabel;
    QLineEdit *labelLineEdit;
    QSpacerItem *labelHorizontalSpacer;
    QGroupBox *breakpointTypeGroupBox;
    QGridLayout *gridLayout_2;
    QCheckBox *temporaryCheckBox;
    QSpacerItem *temporaryHorizontalSpacer;
    QCheckBox *conditionalCheckBox;
    QLineEdit *conditionalLineEdit;
    QCheckBox *hardwareCheckBox;
    QSpacerItem *hardwareHorizontalSpacer;
    QCheckBox *ignoreCountCheckBox;
    QLineEdit *ignoreCountLineEdit;
    QCheckBox *pendingCheckBox;
    QSpacerItem *pendingHorizontalSpacer;
    QCheckBox *threadIdCheckBox;
    QLineEdit *threadIdLineEdit;
    QCheckBox *disabledCheckBox;
    QSpacerItem *disabledHorizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SeerBreakpointCreateDialogForm)
    {
        if (SeerBreakpointCreateDialogForm->objectName().isEmpty())
            SeerBreakpointCreateDialogForm->setObjectName(QString::fromUtf8("SeerBreakpointCreateDialogForm"));
        SeerBreakpointCreateDialogForm->resize(489, 395);
        verticalLayout = new QVBoxLayout(SeerBreakpointCreateDialogForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        breakpointLocationGroupBox = new QGroupBox(SeerBreakpointCreateDialogForm);
        breakpointLocationGroupBox->setObjectName(QString::fromUtf8("breakpointLocationGroupBox"));
        gridLayout = new QGridLayout(breakpointLocationGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        filenameLabel = new QLabel(breakpointLocationGroupBox);
        filenameLabel->setObjectName(QString::fromUtf8("filenameLabel"));

        gridLayout->addWidget(filenameLabel, 0, 0, 1, 1);

        filenameLineEdit = new QLineEdit(breakpointLocationGroupBox);
        filenameLineEdit->setObjectName(QString::fromUtf8("filenameLineEdit"));
        filenameLineEdit->setClearButtonEnabled(true);

        gridLayout->addWidget(filenameLineEdit, 0, 1, 1, 2);

        lineNumberLabel = new QLabel(breakpointLocationGroupBox);
        lineNumberLabel->setObjectName(QString::fromUtf8("lineNumberLabel"));

        gridLayout->addWidget(lineNumberLabel, 1, 0, 1, 1);

        lineNumberLineEdit = new QLineEdit(breakpointLocationGroupBox);
        lineNumberLineEdit->setObjectName(QString::fromUtf8("lineNumberLineEdit"));
        lineNumberLineEdit->setClearButtonEnabled(true);

        gridLayout->addWidget(lineNumberLineEdit, 1, 1, 1, 1);

        lineNumberHorizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(lineNumberHorizontalSpacer, 1, 2, 1, 1);

        functionLabel = new QLabel(breakpointLocationGroupBox);
        functionLabel->setObjectName(QString::fromUtf8("functionLabel"));

        gridLayout->addWidget(functionLabel, 2, 0, 1, 1);

        functionLineEdit = new QLineEdit(breakpointLocationGroupBox);
        functionLineEdit->setObjectName(QString::fromUtf8("functionLineEdit"));
        functionLineEdit->setClearButtonEnabled(true);

        gridLayout->addWidget(functionLineEdit, 2, 1, 1, 2);

        labelLabel = new QLabel(breakpointLocationGroupBox);
        labelLabel->setObjectName(QString::fromUtf8("labelLabel"));

        gridLayout->addWidget(labelLabel, 3, 0, 1, 1);

        labelLineEdit = new QLineEdit(breakpointLocationGroupBox);
        labelLineEdit->setObjectName(QString::fromUtf8("labelLineEdit"));
        labelLineEdit->setClearButtonEnabled(true);

        gridLayout->addWidget(labelLineEdit, 3, 1, 1, 1);

        labelHorizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(labelHorizontalSpacer, 3, 2, 1, 1);


        verticalLayout->addWidget(breakpointLocationGroupBox);

        breakpointTypeGroupBox = new QGroupBox(SeerBreakpointCreateDialogForm);
        breakpointTypeGroupBox->setObjectName(QString::fromUtf8("breakpointTypeGroupBox"));
        gridLayout_2 = new QGridLayout(breakpointTypeGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        temporaryCheckBox = new QCheckBox(breakpointTypeGroupBox);
        temporaryCheckBox->setObjectName(QString::fromUtf8("temporaryCheckBox"));

        gridLayout_2->addWidget(temporaryCheckBox, 0, 0, 1, 1);

        temporaryHorizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(temporaryHorizontalSpacer, 0, 1, 1, 1);

        conditionalCheckBox = new QCheckBox(breakpointTypeGroupBox);
        conditionalCheckBox->setObjectName(QString::fromUtf8("conditionalCheckBox"));

        gridLayout_2->addWidget(conditionalCheckBox, 0, 2, 1, 1);

        conditionalLineEdit = new QLineEdit(breakpointTypeGroupBox);
        conditionalLineEdit->setObjectName(QString::fromUtf8("conditionalLineEdit"));
        conditionalLineEdit->setClearButtonEnabled(true);

        gridLayout_2->addWidget(conditionalLineEdit, 0, 3, 1, 1);

        hardwareCheckBox = new QCheckBox(breakpointTypeGroupBox);
        hardwareCheckBox->setObjectName(QString::fromUtf8("hardwareCheckBox"));

        gridLayout_2->addWidget(hardwareCheckBox, 1, 0, 1, 1);

        hardwareHorizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(hardwareHorizontalSpacer, 1, 1, 1, 1);

        ignoreCountCheckBox = new QCheckBox(breakpointTypeGroupBox);
        ignoreCountCheckBox->setObjectName(QString::fromUtf8("ignoreCountCheckBox"));

        gridLayout_2->addWidget(ignoreCountCheckBox, 1, 2, 1, 1);

        ignoreCountLineEdit = new QLineEdit(breakpointTypeGroupBox);
        ignoreCountLineEdit->setObjectName(QString::fromUtf8("ignoreCountLineEdit"));
        ignoreCountLineEdit->setClearButtonEnabled(true);

        gridLayout_2->addWidget(ignoreCountLineEdit, 1, 3, 1, 1);

        pendingCheckBox = new QCheckBox(breakpointTypeGroupBox);
        pendingCheckBox->setObjectName(QString::fromUtf8("pendingCheckBox"));

        gridLayout_2->addWidget(pendingCheckBox, 2, 0, 1, 1);

        pendingHorizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(pendingHorizontalSpacer, 2, 1, 1, 1);

        threadIdCheckBox = new QCheckBox(breakpointTypeGroupBox);
        threadIdCheckBox->setObjectName(QString::fromUtf8("threadIdCheckBox"));

        gridLayout_2->addWidget(threadIdCheckBox, 2, 2, 1, 1);

        threadIdLineEdit = new QLineEdit(breakpointTypeGroupBox);
        threadIdLineEdit->setObjectName(QString::fromUtf8("threadIdLineEdit"));
        threadIdLineEdit->setClearButtonEnabled(true);

        gridLayout_2->addWidget(threadIdLineEdit, 2, 3, 1, 1);

        disabledCheckBox = new QCheckBox(breakpointTypeGroupBox);
        disabledCheckBox->setObjectName(QString::fromUtf8("disabledCheckBox"));

        gridLayout_2->addWidget(disabledCheckBox, 3, 0, 1, 1);

        disabledHorizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(disabledHorizontalSpacer, 3, 1, 1, 1);


        verticalLayout->addWidget(breakpointTypeGroupBox);

        buttonBox = new QDialogButtonBox(SeerBreakpointCreateDialogForm);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SeerBreakpointCreateDialogForm);
        QObject::connect(buttonBox, SIGNAL(accepted()), SeerBreakpointCreateDialogForm, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SeerBreakpointCreateDialogForm, SLOT(reject()));

        QMetaObject::connectSlotsByName(SeerBreakpointCreateDialogForm);
    } // setupUi

    void retranslateUi(QDialog *SeerBreakpointCreateDialogForm)
    {
        SeerBreakpointCreateDialogForm->setWindowTitle(QApplication::translate("SeerBreakpointCreateDialogForm", "Create a Breakpoint", nullptr));
        breakpointLocationGroupBox->setTitle(QApplication::translate("SeerBreakpointCreateDialogForm", "Breakpoint Location", nullptr));
        filenameLabel->setText(QApplication::translate("SeerBreakpointCreateDialogForm", "Filename", nullptr));
        lineNumberLabel->setText(QApplication::translate("SeerBreakpointCreateDialogForm", "Line number", nullptr));
        functionLabel->setText(QApplication::translate("SeerBreakpointCreateDialogForm", "Function", nullptr));
        labelLabel->setText(QApplication::translate("SeerBreakpointCreateDialogForm", "Label", nullptr));
        breakpointTypeGroupBox->setTitle(QApplication::translate("SeerBreakpointCreateDialogForm", "Breakpoint Type", nullptr));
        temporaryCheckBox->setText(QApplication::translate("SeerBreakpointCreateDialogForm", "Temporary", nullptr));
        conditionalCheckBox->setText(QApplication::translate("SeerBreakpointCreateDialogForm", "Conditional", nullptr));
        hardwareCheckBox->setText(QApplication::translate("SeerBreakpointCreateDialogForm", "Hardware", nullptr));
        ignoreCountCheckBox->setText(QApplication::translate("SeerBreakpointCreateDialogForm", "Ignore Count", nullptr));
        pendingCheckBox->setText(QApplication::translate("SeerBreakpointCreateDialogForm", "Pending", nullptr));
        threadIdCheckBox->setText(QApplication::translate("SeerBreakpointCreateDialogForm", "Thread Id", nullptr));
        disabledCheckBox->setText(QApplication::translate("SeerBreakpointCreateDialogForm", "Disabled", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SeerBreakpointCreateDialogForm: public Ui_SeerBreakpointCreateDialogForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEERBREAKPOINTCREATEDIALOG_H
