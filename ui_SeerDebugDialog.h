/********************************************************************************
** Form generated from reading UI file 'SeerDebugDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEERDEBUGDIALOG_H
#define UI_SEERDEBUGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_SeerDebugDialogForm
{
public:
    QGridLayout *gridLayout_4;
    QGroupBox *executableNameGroupBox;
    QGridLayout *gridLayout_2;
    QLineEdit *executableNameLineEdit;
    QToolButton *executableNameToolButton;
    QDialogButtonBox *buttonBox;
    QGroupBox *launchMethodGroupBox;
    QHBoxLayout *horizontalLayout;
    QGridLayout *launchMethodGridLayout;
    QLineEdit *loadBreakpointsFilenameLineEdit;
    QLabel *connectProgramSerialLabel;
    QSpacerItem *horizontalSpacer_1;
    QLabel *attachProgramPidLabel;
    QComboBox *connectProgramParityComboBox;
    QFrame *line_2;
    QLabel *connectProgramHostPortLabel;
    QRadioButton *attachProgramRadioButton;
    QRadioButton *loadCoreRadioButton;
    QCheckBox *runProgramBreakInMainCheckBox;
    QFrame *line_3;
    QLineEdit *attachProgramPidLineEdit;
    QLabel *runProgramArgumentsLabel;
    QLineEdit *connectProgramBaudLineEdit;
    QLabel *loadBreakpointsFilenameLabel;
    QLabel *connectProgramParityLabel;
    QSpacerItem *horizontalSpacer_3;
    QRadioButton *runProgramRadioButton;
    QToolButton *attachProgramPidToolButton;
    QLabel *loadCoreFilenameLabel;
    QRadioButton *connectProgramRadioButton;
    QToolButton *loadBreakpointsFilenameToolButton;
    QLineEdit *connectProgramHostPortLineEdit;
    QFrame *line_1;
    QLineEdit *runProgramArgumentsLineEdit;
    QLineEdit *loadCoreFilenameLineEdit;
    QToolButton *loadCoreFilenameToolButton;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *executableWorkingDirectoryGroupBox;
    QGridLayout *gridLayout;
    QToolButton *executableWorkingDirectoryToolButton;
    QLineEdit *executableWorkingDirectoryLineEdit;

    void setupUi(QDialog *SeerDebugDialogForm)
    {
        if (SeerDebugDialogForm->objectName().isEmpty())
            SeerDebugDialogForm->setObjectName(QString::fromUtf8("SeerDebugDialogForm"));
        SeerDebugDialogForm->resize(550, 661);
        gridLayout_4 = new QGridLayout(SeerDebugDialogForm);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        executableNameGroupBox = new QGroupBox(SeerDebugDialogForm);
        executableNameGroupBox->setObjectName(QString::fromUtf8("executableNameGroupBox"));
        executableNameGroupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        executableNameGroupBox->setFlat(false);
        gridLayout_2 = new QGridLayout(executableNameGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        executableNameLineEdit = new QLineEdit(executableNameGroupBox);
        executableNameLineEdit->setObjectName(QString::fromUtf8("executableNameLineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(executableNameLineEdit->sizePolicy().hasHeightForWidth());
        executableNameLineEdit->setSizePolicy(sizePolicy);
        executableNameLineEdit->setClearButtonEnabled(true);

        gridLayout_2->addWidget(executableNameLineEdit, 0, 0, 1, 1);

        executableNameToolButton = new QToolButton(executableNameGroupBox);
        executableNameToolButton->setObjectName(QString::fromUtf8("executableNameToolButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(executableNameToolButton->sizePolicy().hasHeightForWidth());
        executableNameToolButton->setSizePolicy(sizePolicy1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/RelaxLightIcons/document-open.svg"), QSize(), QIcon::Normal, QIcon::Off);
        executableNameToolButton->setIcon(icon);

        gridLayout_2->addWidget(executableNameToolButton, 0, 1, 1, 1);


        gridLayout_4->addWidget(executableNameGroupBox, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(SeerDebugDialogForm);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_4->addWidget(buttonBox, 3, 0, 1, 1);

        launchMethodGroupBox = new QGroupBox(SeerDebugDialogForm);
        launchMethodGroupBox->setObjectName(QString::fromUtf8("launchMethodGroupBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(100);
        sizePolicy2.setHeightForWidth(launchMethodGroupBox->sizePolicy().hasHeightForWidth());
        launchMethodGroupBox->setSizePolicy(sizePolicy2);
        horizontalLayout = new QHBoxLayout(launchMethodGroupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        launchMethodGridLayout = new QGridLayout();
        launchMethodGridLayout->setObjectName(QString::fromUtf8("launchMethodGridLayout"));
        loadBreakpointsFilenameLineEdit = new QLineEdit(launchMethodGroupBox);
        loadBreakpointsFilenameLineEdit->setObjectName(QString::fromUtf8("loadBreakpointsFilenameLineEdit"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(100);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(loadBreakpointsFilenameLineEdit->sizePolicy().hasHeightForWidth());
        loadBreakpointsFilenameLineEdit->setSizePolicy(sizePolicy3);
        loadBreakpointsFilenameLineEdit->setClearButtonEnabled(true);

        launchMethodGridLayout->addWidget(loadBreakpointsFilenameLineEdit, 2, 1, 1, 3);

        connectProgramSerialLabel = new QLabel(launchMethodGroupBox);
        connectProgramSerialLabel->setObjectName(QString::fromUtf8("connectProgramSerialLabel"));

        launchMethodGridLayout->addWidget(connectProgramSerialLabel, 10, 0, 1, 1);

        horizontalSpacer_1 = new QSpacerItem(298, 22, QSizePolicy::Preferred, QSizePolicy::Minimum);

        launchMethodGridLayout->addItem(horizontalSpacer_1, 10, 3, 1, 2);

        attachProgramPidLabel = new QLabel(launchMethodGroupBox);
        attachProgramPidLabel->setObjectName(QString::fromUtf8("attachProgramPidLabel"));

        launchMethodGridLayout->addWidget(attachProgramPidLabel, 6, 0, 1, 1);

        connectProgramParityComboBox = new QComboBox(launchMethodGroupBox);
        connectProgramParityComboBox->addItem(QString());
        connectProgramParityComboBox->addItem(QString());
        connectProgramParityComboBox->addItem(QString());
        connectProgramParityComboBox->setObjectName(QString::fromUtf8("connectProgramParityComboBox"));

        launchMethodGridLayout->addWidget(connectProgramParityComboBox, 11, 1, 1, 1);

        line_2 = new QFrame(launchMethodGroupBox);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        launchMethodGridLayout->addWidget(line_2, 7, 0, 1, 5);

        connectProgramHostPortLabel = new QLabel(launchMethodGroupBox);
        connectProgramHostPortLabel->setObjectName(QString::fromUtf8("connectProgramHostPortLabel"));

        launchMethodGridLayout->addWidget(connectProgramHostPortLabel, 9, 0, 1, 1);

        attachProgramRadioButton = new QRadioButton(launchMethodGroupBox);
        attachProgramRadioButton->setObjectName(QString::fromUtf8("attachProgramRadioButton"));

        launchMethodGridLayout->addWidget(attachProgramRadioButton, 5, 0, 1, 2);

        loadCoreRadioButton = new QRadioButton(launchMethodGroupBox);
        loadCoreRadioButton->setObjectName(QString::fromUtf8("loadCoreRadioButton"));

        launchMethodGridLayout->addWidget(loadCoreRadioButton, 13, 0, 1, 2);

        runProgramBreakInMainCheckBox = new QCheckBox(launchMethodGroupBox);
        runProgramBreakInMainCheckBox->setObjectName(QString::fromUtf8("runProgramBreakInMainCheckBox"));
        runProgramBreakInMainCheckBox->setChecked(true);
        runProgramBreakInMainCheckBox->setTristate(false);

        launchMethodGridLayout->addWidget(runProgramBreakInMainCheckBox, 3, 0, 1, 2);

        line_3 = new QFrame(launchMethodGroupBox);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        launchMethodGridLayout->addWidget(line_3, 12, 0, 1, 5);

        attachProgramPidLineEdit = new QLineEdit(launchMethodGroupBox);
        attachProgramPidLineEdit->setObjectName(QString::fromUtf8("attachProgramPidLineEdit"));
        sizePolicy3.setHeightForWidth(attachProgramPidLineEdit->sizePolicy().hasHeightForWidth());
        attachProgramPidLineEdit->setSizePolicy(sizePolicy3);
        attachProgramPidLineEdit->setClearButtonEnabled(true);

        launchMethodGridLayout->addWidget(attachProgramPidLineEdit, 6, 1, 1, 1);

        runProgramArgumentsLabel = new QLabel(launchMethodGroupBox);
        runProgramArgumentsLabel->setObjectName(QString::fromUtf8("runProgramArgumentsLabel"));

        launchMethodGridLayout->addWidget(runProgramArgumentsLabel, 1, 0, 1, 1);

        connectProgramBaudLineEdit = new QLineEdit(launchMethodGroupBox);
        connectProgramBaudLineEdit->setObjectName(QString::fromUtf8("connectProgramBaudLineEdit"));
        sizePolicy3.setHeightForWidth(connectProgramBaudLineEdit->sizePolicy().hasHeightForWidth());
        connectProgramBaudLineEdit->setSizePolicy(sizePolicy3);
        connectProgramBaudLineEdit->setClearButtonEnabled(true);

        launchMethodGridLayout->addWidget(connectProgramBaudLineEdit, 10, 1, 1, 1);

        loadBreakpointsFilenameLabel = new QLabel(launchMethodGroupBox);
        loadBreakpointsFilenameLabel->setObjectName(QString::fromUtf8("loadBreakpointsFilenameLabel"));

        launchMethodGridLayout->addWidget(loadBreakpointsFilenameLabel, 2, 0, 1, 1);

        connectProgramParityLabel = new QLabel(launchMethodGroupBox);
        connectProgramParityLabel->setObjectName(QString::fromUtf8("connectProgramParityLabel"));

        launchMethodGridLayout->addWidget(connectProgramParityLabel, 11, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(298, 14, QSizePolicy::Preferred, QSizePolicy::Minimum);

        launchMethodGridLayout->addItem(horizontalSpacer_3, 6, 3, 1, 2);

        runProgramRadioButton = new QRadioButton(launchMethodGroupBox);
        runProgramRadioButton->setObjectName(QString::fromUtf8("runProgramRadioButton"));

        launchMethodGridLayout->addWidget(runProgramRadioButton, 0, 0, 1, 2);

        attachProgramPidToolButton = new QToolButton(launchMethodGroupBox);
        attachProgramPidToolButton->setObjectName(QString::fromUtf8("attachProgramPidToolButton"));

        launchMethodGridLayout->addWidget(attachProgramPidToolButton, 6, 2, 1, 1);

        loadCoreFilenameLabel = new QLabel(launchMethodGroupBox);
        loadCoreFilenameLabel->setObjectName(QString::fromUtf8("loadCoreFilenameLabel"));

        launchMethodGridLayout->addWidget(loadCoreFilenameLabel, 14, 0, 1, 1);

        connectProgramRadioButton = new QRadioButton(launchMethodGroupBox);
        connectProgramRadioButton->setObjectName(QString::fromUtf8("connectProgramRadioButton"));

        launchMethodGridLayout->addWidget(connectProgramRadioButton, 8, 0, 1, 2);

        loadBreakpointsFilenameToolButton = new QToolButton(launchMethodGroupBox);
        loadBreakpointsFilenameToolButton->setObjectName(QString::fromUtf8("loadBreakpointsFilenameToolButton"));
        loadBreakpointsFilenameToolButton->setIcon(icon);

        launchMethodGridLayout->addWidget(loadBreakpointsFilenameToolButton, 2, 4, 1, 1);

        connectProgramHostPortLineEdit = new QLineEdit(launchMethodGroupBox);
        connectProgramHostPortLineEdit->setObjectName(QString::fromUtf8("connectProgramHostPortLineEdit"));
        sizePolicy3.setHeightForWidth(connectProgramHostPortLineEdit->sizePolicy().hasHeightForWidth());
        connectProgramHostPortLineEdit->setSizePolicy(sizePolicy3);
        connectProgramHostPortLineEdit->setClearButtonEnabled(true);

        launchMethodGridLayout->addWidget(connectProgramHostPortLineEdit, 9, 1, 1, 4);

        line_1 = new QFrame(launchMethodGroupBox);
        line_1->setObjectName(QString::fromUtf8("line_1"));
        line_1->setFrameShape(QFrame::HLine);
        line_1->setFrameShadow(QFrame::Sunken);

        launchMethodGridLayout->addWidget(line_1, 4, 0, 1, 5);

        runProgramArgumentsLineEdit = new QLineEdit(launchMethodGroupBox);
        runProgramArgumentsLineEdit->setObjectName(QString::fromUtf8("runProgramArgumentsLineEdit"));
        sizePolicy3.setHeightForWidth(runProgramArgumentsLineEdit->sizePolicy().hasHeightForWidth());
        runProgramArgumentsLineEdit->setSizePolicy(sizePolicy3);
        runProgramArgumentsLineEdit->setClearButtonEnabled(true);

        launchMethodGridLayout->addWidget(runProgramArgumentsLineEdit, 1, 1, 1, 4);

        loadCoreFilenameLineEdit = new QLineEdit(launchMethodGroupBox);
        loadCoreFilenameLineEdit->setObjectName(QString::fromUtf8("loadCoreFilenameLineEdit"));
        sizePolicy3.setHeightForWidth(loadCoreFilenameLineEdit->sizePolicy().hasHeightForWidth());
        loadCoreFilenameLineEdit->setSizePolicy(sizePolicy3);
        loadCoreFilenameLineEdit->setClearButtonEnabled(true);

        launchMethodGridLayout->addWidget(loadCoreFilenameLineEdit, 14, 1, 1, 3);

        loadCoreFilenameToolButton = new QToolButton(launchMethodGroupBox);
        loadCoreFilenameToolButton->setObjectName(QString::fromUtf8("loadCoreFilenameToolButton"));
        loadCoreFilenameToolButton->setIcon(icon);

        launchMethodGridLayout->addWidget(loadCoreFilenameToolButton, 14, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(298, 19, QSizePolicy::Preferred, QSizePolicy::Minimum);

        launchMethodGridLayout->addItem(horizontalSpacer_2, 11, 3, 1, 2);


        horizontalLayout->addLayout(launchMethodGridLayout);


        gridLayout_4->addWidget(launchMethodGroupBox, 2, 0, 1, 1);

        executableWorkingDirectoryGroupBox = new QGroupBox(SeerDebugDialogForm);
        executableWorkingDirectoryGroupBox->setObjectName(QString::fromUtf8("executableWorkingDirectoryGroupBox"));
        executableWorkingDirectoryGroupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        gridLayout = new QGridLayout(executableWorkingDirectoryGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        executableWorkingDirectoryToolButton = new QToolButton(executableWorkingDirectoryGroupBox);
        executableWorkingDirectoryToolButton->setObjectName(QString::fromUtf8("executableWorkingDirectoryToolButton"));
        executableWorkingDirectoryToolButton->setIcon(icon);

        gridLayout->addWidget(executableWorkingDirectoryToolButton, 0, 1, 1, 1);

        executableWorkingDirectoryLineEdit = new QLineEdit(executableWorkingDirectoryGroupBox);
        executableWorkingDirectoryLineEdit->setObjectName(QString::fromUtf8("executableWorkingDirectoryLineEdit"));
        executableWorkingDirectoryLineEdit->setClearButtonEnabled(true);

        gridLayout->addWidget(executableWorkingDirectoryLineEdit, 0, 0, 1, 1);


        gridLayout_4->addWidget(executableWorkingDirectoryGroupBox, 1, 0, 1, 1);

        launchMethodGroupBox->raise();
        executableNameGroupBox->raise();
        executableWorkingDirectoryGroupBox->raise();
        buttonBox->raise();

        retranslateUi(SeerDebugDialogForm);
        QObject::connect(buttonBox, SIGNAL(accepted()), SeerDebugDialogForm, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SeerDebugDialogForm, SLOT(reject()));

        QMetaObject::connectSlotsByName(SeerDebugDialogForm);
    } // setupUi

    void retranslateUi(QDialog *SeerDebugDialogForm)
    {
        SeerDebugDialogForm->setWindowTitle(QApplication::translate("SeerDebugDialogForm", "Select Executable to Debug", nullptr));
        executableNameGroupBox->setTitle(QApplication::translate("SeerDebugDialogForm", "Executable Name", nullptr));
#ifndef QT_NO_TOOLTIP
        executableNameLineEdit->setToolTip(QApplication::translate("SeerDebugDialogForm", "The path and name of an executable to debug.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        executableNameToolButton->setToolTip(QApplication::translate("SeerDebugDialogForm", "Open a dialog to select an executable.", nullptr));
#endif // QT_NO_TOOLTIP
        executableNameToolButton->setText(QString());
        launchMethodGroupBox->setTitle(QApplication::translate("SeerDebugDialogForm", "Launch Method", nullptr));
#ifndef QT_NO_TOOLTIP
        loadBreakpointsFilenameLineEdit->setToolTip(QApplication::translate("SeerDebugDialogForm", "A file containing previously saved breakpoints.", nullptr));
#endif // QT_NO_TOOLTIP
        connectProgramSerialLabel->setText(QApplication::translate("SeerDebugDialogForm", "Serial", nullptr));
        attachProgramPidLabel->setText(QApplication::translate("SeerDebugDialogForm", "Process PID", nullptr));
        connectProgramParityComboBox->setItemText(0, QApplication::translate("SeerDebugDialogForm", "none", nullptr));
        connectProgramParityComboBox->setItemText(1, QApplication::translate("SeerDebugDialogForm", "odd", nullptr));
        connectProgramParityComboBox->setItemText(2, QApplication::translate("SeerDebugDialogForm", "even", nullptr));

#ifndef QT_NO_TOOLTIP
        connectProgramParityComboBox->setToolTip(QApplication::translate("SeerDebugDialogForm", "Serial port parity setting.", nullptr));
#endif // QT_NO_TOOLTIP
        connectProgramHostPortLabel->setText(QApplication::translate("SeerDebugDialogForm", "Gdbserver", nullptr));
#ifndef QT_NO_TOOLTIP
        attachProgramRadioButton->setToolTip(QApplication::translate("SeerDebugDialogForm", "Attach to an already running program.", nullptr));
#endif // QT_NO_TOOLTIP
        attachProgramRadioButton->setText(QApplication::translate("SeerDebugDialogForm", "Attach to a local program", nullptr));
#ifndef QT_NO_TOOLTIP
        loadCoreRadioButton->setToolTip(QApplication::translate("SeerDebugDialogForm", "Load a core file to debug.", nullptr));
#endif // QT_NO_TOOLTIP
        loadCoreRadioButton->setText(QApplication::translate("SeerDebugDialogForm", "Load a core file", nullptr));
#ifndef QT_NO_TOOLTIP
        runProgramBreakInMainCheckBox->setToolTip(QApplication::translate("SeerDebugDialogForm", "Set a breakpoint in main() before running program.", nullptr));
#endif // QT_NO_TOOLTIP
        runProgramBreakInMainCheckBox->setText(QApplication::translate("SeerDebugDialogForm", "Break in main()", nullptr));
#ifndef QT_NO_TOOLTIP
        attachProgramPidLineEdit->setToolTip(QApplication::translate("SeerDebugDialogForm", "The process pid.", nullptr));
#endif // QT_NO_TOOLTIP
        attachProgramPidLineEdit->setInputMask(QApplication::translate("SeerDebugDialogForm", "999999", nullptr));
        attachProgramPidLineEdit->setPlaceholderText(QApplication::translate("SeerDebugDialogForm", "pid", nullptr));
        runProgramArgumentsLabel->setText(QApplication::translate("SeerDebugDialogForm", "Arguments", nullptr));
#ifndef QT_NO_TOOLTIP
        connectProgramBaudLineEdit->setToolTip(QApplication::translate("SeerDebugDialogForm", "Serial port baud rate.", nullptr));
#endif // QT_NO_TOOLTIP
        connectProgramBaudLineEdit->setInputMask(QApplication::translate("SeerDebugDialogForm", "999999", nullptr));
        connectProgramBaudLineEdit->setPlaceholderText(QApplication::translate("SeerDebugDialogForm", "baudrate", nullptr));
        loadBreakpointsFilenameLabel->setText(QApplication::translate("SeerDebugDialogForm", "Breakpoints", nullptr));
        connectProgramParityLabel->setText(QApplication::translate("SeerDebugDialogForm", "Parity", nullptr));
#ifndef QT_NO_TOOLTIP
        runProgramRadioButton->setToolTip(QApplication::translate("SeerDebugDialogForm", "Run the program.", nullptr));
#endif // QT_NO_TOOLTIP
        runProgramRadioButton->setText(QApplication::translate("SeerDebugDialogForm", "Run a program", nullptr));
#ifndef QT_NO_TOOLTIP
        attachProgramPidToolButton->setToolTip(QApplication::translate("SeerDebugDialogForm", "Open a dialog to select a pid on the local system.", nullptr));
#endif // QT_NO_TOOLTIP
        attachProgramPidToolButton->setText(QApplication::translate("SeerDebugDialogForm", "...", nullptr));
        loadCoreFilenameLabel->setText(QApplication::translate("SeerDebugDialogForm", "Core", nullptr));
#ifndef QT_NO_TOOLTIP
        connectProgramRadioButton->setToolTip(QApplication::translate("SeerDebugDialogForm", "Connect to an already running program started with gdbserver.", nullptr));
#endif // QT_NO_TOOLTIP
        connectProgramRadioButton->setText(QApplication::translate("SeerDebugDialogForm", "Connect to a gdbserver running a program", nullptr));
#ifndef QT_NO_TOOLTIP
        loadBreakpointsFilenameToolButton->setToolTip(QApplication::translate("SeerDebugDialogForm", "Open a dialog to select a breakpoints file.", nullptr));
#endif // QT_NO_TOOLTIP
        loadBreakpointsFilenameToolButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        connectProgramHostPortLineEdit->setToolTip(QApplication::translate("SeerDebugDialogForm", "How to access the remote gdbserver.", nullptr));
#endif // QT_NO_TOOLTIP
        connectProgramHostPortLineEdit->setText(QString());
        connectProgramHostPortLineEdit->setPlaceholderText(QApplication::translate("SeerDebugDialogForm", "host:port or /dev/serialport", nullptr));
#ifndef QT_NO_TOOLTIP
        runProgramArgumentsLineEdit->setToolTip(QApplication::translate("SeerDebugDialogForm", "The arguments to pass to the program.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        loadCoreFilenameLineEdit->setToolTip(QApplication::translate("SeerDebugDialogForm", "The path and name of a core file.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        loadCoreFilenameToolButton->setToolTip(QApplication::translate("SeerDebugDialogForm", "Open a dialog to select a core file.", nullptr));
#endif // QT_NO_TOOLTIP
        loadCoreFilenameToolButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        executableWorkingDirectoryGroupBox->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        executableWorkingDirectoryGroupBox->setTitle(QApplication::translate("SeerDebugDialogForm", "Working Directory", nullptr));
#ifndef QT_NO_TOOLTIP
        executableWorkingDirectoryToolButton->setToolTip(QApplication::translate("SeerDebugDialogForm", "Open a dialog to select a path.", nullptr));
#endif // QT_NO_TOOLTIP
        executableWorkingDirectoryToolButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        executableWorkingDirectoryLineEdit->setToolTip(QApplication::translate("SeerDebugDialogForm", "The working directory path to tell GDB.", nullptr));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class SeerDebugDialogForm: public Ui_SeerDebugDialogForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEERDEBUGDIALOG_H
