/********************************************************************************
** Form generated from reading UI file 'sdsmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SDSMAINWINDOW_H
#define UI_SDSMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include "gdbwidget.h"

QT_BEGIN_NAMESPACE

class Ui_sdsMainWindow
{
public:
    QAction *actionGdbQuit;
    QAction *actionFileQuit;
    QAction *actionGdbStart;
    QAction *actionGdbRun;
    QAction *actionGdbNext;
    QAction *actionGdbStep;
    QAction *actionGdbFinish;
    QAction *actionGdbContinue;
    QAction *actionFileDebug;
    QAction *actionFileArguments;
    QAction *actionInterruptProcess;
    QAction *actionHelpAbout;
    QAction *actionMemoryVisualizer;
    QAction *actionArrayVisualizer;
    QAction *actionViewMemoryVisualizer;
    QAction *actionViewArrayVisualizer;
    QAction *actionControlRun;
    QAction *actionControlStart;
    QAction *actionControlContinue;
    QAction *actionControlNext;
    QAction *actionControlStep;
    QAction *actionControlFinish;
    QAction *actionControlInterrupt;
    QAction *actionSettingsConfiguration;
    QAction *actionSettingsSaveConfiguration;
    QAction *actionConsoleNormal;
    QAction *actionConsoleHidden;
    QAction *actionConsoleMinimized;
    QAction *actionArr;
    QAction *actionstruct;
    QAction *actionsolo;
    QAction *actiondouble;
    GdbWidget *gdbWidget;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuView;
    QMenu *menuConsole;
    QMenu *menuSettings;
    QMenu *menuHelp;
    QMenu *menuControl;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *sdsMainWindow)
    {
        if (sdsMainWindow->objectName().isEmpty())
            sdsMainWindow->setObjectName(QString::fromUtf8("sdsMainWindow"));
        sdsMainWindow->resize(1208, 628);
        actionGdbQuit = new QAction(sdsMainWindow);
        actionGdbQuit->setObjectName(QString::fromUtf8("actionGdbQuit"));
        actionFileQuit = new QAction(sdsMainWindow);
        actionFileQuit->setObjectName(QString::fromUtf8("actionFileQuit"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFileQuit->setIcon(icon);
        actionGdbStart = new QAction(sdsMainWindow);
        actionGdbStart->setObjectName(QString::fromUtf8("actionGdbStart"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/restart.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGdbStart->setIcon(icon1);
        actionGdbRun = new QAction(sdsMainWindow);
        actionGdbRun->setObjectName(QString::fromUtf8("actionGdbRun"));
        actionGdbRun->setIcon(icon1);
        actionGdbNext = new QAction(sdsMainWindow);
        actionGdbNext->setObjectName(QString::fromUtf8("actionGdbNext"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resources/step_over.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGdbNext->setIcon(icon2);
        actionGdbStep = new QAction(sdsMainWindow);
        actionGdbStep->setObjectName(QString::fromUtf8("actionGdbStep"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/resources/step_into.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGdbStep->setIcon(icon3);
        actionGdbFinish = new QAction(sdsMainWindow);
        actionGdbFinish->setObjectName(QString::fromUtf8("actionGdbFinish"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/resources/step_out.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGdbFinish->setIcon(icon4);
        actionGdbContinue = new QAction(sdsMainWindow);
        actionGdbContinue->setObjectName(QString::fromUtf8("actionGdbContinue"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/resources/continue.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGdbContinue->setIcon(icon5);
        actionFileDebug = new QAction(sdsMainWindow);
        actionFileDebug->setObjectName(QString::fromUtf8("actionFileDebug"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/resources/debug.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFileDebug->setIcon(icon6);
        actionFileArguments = new QAction(sdsMainWindow);
        actionFileArguments->setObjectName(QString::fromUtf8("actionFileArguments"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/resources/arguments.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFileArguments->setIcon(icon7);
        actionInterruptProcess = new QAction(sdsMainWindow);
        actionInterruptProcess->setObjectName(QString::fromUtf8("actionInterruptProcess"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/resources/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionInterruptProcess->setIcon(icon8);
        actionHelpAbout = new QAction(sdsMainWindow);
        actionHelpAbout->setObjectName(QString::fromUtf8("actionHelpAbout"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/seer/resources/seer_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelpAbout->setIcon(icon9);
        actionMemoryVisualizer = new QAction(sdsMainWindow);
        actionMemoryVisualizer->setObjectName(QString::fromUtf8("actionMemoryVisualizer"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/resources/memory.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMemoryVisualizer->setIcon(icon10);
        actionArrayVisualizer = new QAction(sdsMainWindow);
        actionArrayVisualizer->setObjectName(QString::fromUtf8("actionArrayVisualizer"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/resources/array.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionArrayVisualizer->setIcon(icon11);
        actionViewMemoryVisualizer = new QAction(sdsMainWindow);
        actionViewMemoryVisualizer->setObjectName(QString::fromUtf8("actionViewMemoryVisualizer"));
        actionViewMemoryVisualizer->setIcon(icon10);
        actionViewArrayVisualizer = new QAction(sdsMainWindow);
        actionViewArrayVisualizer->setObjectName(QString::fromUtf8("actionViewArrayVisualizer"));
        actionViewArrayVisualizer->setIcon(icon11);
        actionControlRun = new QAction(sdsMainWindow);
        actionControlRun->setObjectName(QString::fromUtf8("actionControlRun"));
        actionControlRun->setIcon(icon1);
        actionControlStart = new QAction(sdsMainWindow);
        actionControlStart->setObjectName(QString::fromUtf8("actionControlStart"));
        actionControlStart->setIcon(icon1);
        actionControlContinue = new QAction(sdsMainWindow);
        actionControlContinue->setObjectName(QString::fromUtf8("actionControlContinue"));
        actionControlContinue->setIcon(icon5);
        actionControlNext = new QAction(sdsMainWindow);
        actionControlNext->setObjectName(QString::fromUtf8("actionControlNext"));
        actionControlNext->setIcon(icon2);
        actionControlStep = new QAction(sdsMainWindow);
        actionControlStep->setObjectName(QString::fromUtf8("actionControlStep"));
        actionControlStep->setIcon(icon3);
        actionControlFinish = new QAction(sdsMainWindow);
        actionControlFinish->setObjectName(QString::fromUtf8("actionControlFinish"));
        actionControlFinish->setIcon(icon4);
        actionControlInterrupt = new QAction(sdsMainWindow);
        actionControlInterrupt->setObjectName(QString::fromUtf8("actionControlInterrupt"));
        actionControlInterrupt->setIcon(icon8);
        actionSettingsConfiguration = new QAction(sdsMainWindow);
        actionSettingsConfiguration->setObjectName(QString::fromUtf8("actionSettingsConfiguration"));
        actionSettingsConfiguration->setIcon(icon7);
        actionSettingsSaveConfiguration = new QAction(sdsMainWindow);
        actionSettingsSaveConfiguration->setObjectName(QString::fromUtf8("actionSettingsSaveConfiguration"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/resources/RelaxLightIcons/document-save.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSettingsSaveConfiguration->setIcon(icon12);
        actionConsoleNormal = new QAction(sdsMainWindow);
        actionConsoleNormal->setObjectName(QString::fromUtf8("actionConsoleNormal"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/seer/resources/maximize.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConsoleNormal->setIcon(icon13);
        actionConsoleHidden = new QAction(sdsMainWindow);
        actionConsoleHidden->setObjectName(QString::fromUtf8("actionConsoleHidden"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/seer/resources/hide.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConsoleHidden->setIcon(icon14);
        actionConsoleMinimized = new QAction(sdsMainWindow);
        actionConsoleMinimized->setObjectName(QString::fromUtf8("actionConsoleMinimized"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/seer/resources/minimize.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConsoleMinimized->setIcon(icon15);
        actionArr = new QAction(sdsMainWindow);
        actionArr->setObjectName(QString::fromUtf8("actionArr"));
        actionArr->setIcon(icon11);
        actionstruct = new QAction(sdsMainWindow);
        actionstruct->setObjectName(QString::fromUtf8("actionstruct"));
        actionsolo = new QAction(sdsMainWindow);
        actionsolo->setObjectName(QString::fromUtf8("actionsolo"));
        actiondouble = new QAction(sdsMainWindow);
        actiondouble->setObjectName(QString::fromUtf8("actiondouble"));
        gdbWidget = new GdbWidget(sdsMainWindow);
        gdbWidget->setObjectName(QString::fromUtf8("gdbWidget"));
        sdsMainWindow->setCentralWidget(gdbWidget);
        menubar = new QMenuBar(sdsMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1208, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuConsole = new QMenu(menuView);
        menuConsole->setObjectName(QString::fromUtf8("menuConsole"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/seer/resources/console.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuConsole->setIcon(icon16);
        menuSettings = new QMenu(menubar);
        menuSettings->setObjectName(QString::fromUtf8("menuSettings"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuControl = new QMenu(menubar);
        menuControl->setObjectName(QString::fromUtf8("menuControl"));
        sdsMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(sdsMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        sdsMainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(sdsMainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        sdsMainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        sdsMainWindow->insertToolBarBreak(toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuControl->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuSettings->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionFileDebug);
        menuFile->addAction(actionFileArguments);
        menuFile->addAction(actionFileQuit);
        menuView->addAction(actionViewMemoryVisualizer);
        menuView->addAction(actionViewArrayVisualizer);
        menuView->addAction(menuConsole->menuAction());
        menuConsole->addAction(actionConsoleNormal);
        menuConsole->addAction(actionConsoleMinimized);
        menuConsole->addAction(actionConsoleHidden);
        menuSettings->addAction(actionSettingsConfiguration);
        menuSettings->addAction(actionSettingsSaveConfiguration);
        menuHelp->addAction(actionHelpAbout);
        menuControl->addAction(actionControlRun);
        menuControl->addAction(actionControlStart);
        menuControl->addAction(actionControlContinue);
        menuControl->addAction(actionControlNext);
        menuControl->addAction(actionControlStep);
        menuControl->addAction(actionControlFinish);
        menuControl->addSeparator();
        menuControl->addAction(actionControlInterrupt);
        toolBar->addAction(actionGdbRun);
        toolBar->addAction(actionGdbStart);
        toolBar->addAction(actionGdbContinue);
        toolBar->addAction(actionGdbNext);
        toolBar->addAction(actionGdbStep);
        toolBar->addAction(actionGdbFinish);
        toolBar->addSeparator();
        toolBar->addAction(actionInterruptProcess);
        toolBar->addSeparator();
        toolBar->addAction(actionMemoryVisualizer);
        toolBar->addAction(actionArr);
        toolBar->addAction(actionstruct);
        toolBar->addAction(actionsolo);
        toolBar->addAction(actiondouble);

        retranslateUi(sdsMainWindow);

        QMetaObject::connectSlotsByName(sdsMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *sdsMainWindow)
    {
        sdsMainWindow->setWindowTitle(QApplication::translate("sdsMainWindow", "See Your DataStructure", nullptr));
        actionGdbQuit->setText(QApplication::translate("sdsMainWindow", "Quit", nullptr));
#ifndef QT_NO_TOOLTIP
        actionGdbQuit->setToolTip(QApplication::translate("sdsMainWindow", "Exit GDB.", nullptr));
#endif // QT_NO_TOOLTIP
        actionFileQuit->setText(QApplication::translate("sdsMainWindow", "Quit", nullptr));
#ifndef QT_NO_TOOLTIP
        actionFileQuit->setToolTip(QApplication::translate("sdsMainWindow", "Quit", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionFileQuit->setStatusTip(QApplication::translate("sdsMainWindow", "Quit the  Seer debugger.", nullptr));
#endif // QT_NO_STATUSTIP
        actionGdbStart->setText(QApplication::translate("sdsMainWindow", "Start", nullptr));
        actionGdbRun->setText(QApplication::translate("sdsMainWindow", "Run", nullptr));
        actionGdbNext->setText(QApplication::translate("sdsMainWindow", "Next", nullptr));
        actionGdbStep->setText(QApplication::translate("sdsMainWindow", "Step", nullptr));
        actionGdbFinish->setText(QApplication::translate("sdsMainWindow", "Finish", nullptr));
        actionGdbContinue->setText(QApplication::translate("sdsMainWindow", "Continue", nullptr));
        actionFileDebug->setText(QApplication::translate("sdsMainWindow", "Debug...", nullptr));
#ifndef QT_NO_TOOLTIP
        actionFileDebug->setToolTip(QApplication::translate("sdsMainWindow", "Debug", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionFileDebug->setStatusTip(QApplication::translate("sdsMainWindow", "Load an executable to debug.", nullptr));
#endif // QT_NO_STATUSTIP
        actionFileArguments->setText(QApplication::translate("sdsMainWindow", "Arguments...", nullptr));
#ifndef QT_NO_TOOLTIP
        actionFileArguments->setToolTip(QApplication::translate("sdsMainWindow", "Arguments", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionFileArguments->setStatusTip(QApplication::translate("sdsMainWindow", "Specify new arguments to the current executable.", nullptr));
#endif // QT_NO_STATUSTIP
        actionInterruptProcess->setText(QApplication::translate("sdsMainWindow", "Interrupt", nullptr));
#ifndef QT_NO_TOOLTIP
        actionInterruptProcess->setToolTip(QApplication::translate("sdsMainWindow", "<html><head/><body><p>Send a 'Terminate' signal to the process.<br/><br/>Hold down for alternate signals.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        actionHelpAbout->setText(QApplication::translate("sdsMainWindow", "About Seer", nullptr));
#ifndef QT_NO_STATUSTIP
        actionHelpAbout->setStatusTip(QApplication::translate("sdsMainWindow", "About Seer", nullptr));
#endif // QT_NO_STATUSTIP
        actionMemoryVisualizer->setText(QApplication::translate("sdsMainWindow", "Memory", nullptr));
#ifndef QT_NO_TOOLTIP
        actionMemoryVisualizer->setToolTip(QApplication::translate("sdsMainWindow", "Launch a blank Memory Visualizer.", nullptr));
#endif // QT_NO_TOOLTIP
        actionArrayVisualizer->setText(QApplication::translate("sdsMainWindow", "Array", nullptr));
#ifndef QT_NO_TOOLTIP
        actionArrayVisualizer->setToolTip(QApplication::translate("sdsMainWindow", "Launch a blank Array Visualizer.", nullptr));
#endif // QT_NO_TOOLTIP
        actionViewMemoryVisualizer->setText(QApplication::translate("sdsMainWindow", "Memory Visualizer", nullptr));
#ifndef QT_NO_STATUSTIP
        actionViewMemoryVisualizer->setStatusTip(QApplication::translate("sdsMainWindow", "Launch a blank Memory Visualizer.", nullptr));
#endif // QT_NO_STATUSTIP
        actionViewArrayVisualizer->setText(QApplication::translate("sdsMainWindow", "Array Visualizer", nullptr));
#ifndef QT_NO_STATUSTIP
        actionViewArrayVisualizer->setStatusTip(QApplication::translate("sdsMainWindow", "Launch a blank Array Visualizer.", nullptr));
#endif // QT_NO_STATUSTIP
        actionControlRun->setText(QApplication::translate("sdsMainWindow", "Run", nullptr));
#ifndef QT_NO_TOOLTIP
        actionControlRun->setToolTip(QApplication::translate("sdsMainWindow", "Run", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionControlRun->setStatusTip(QApplication::translate("sdsMainWindow", "Start the program in GDB. Honor breakpoints, if any.", nullptr));
#endif // QT_NO_STATUSTIP
        actionControlStart->setText(QApplication::translate("sdsMainWindow", "Start", nullptr));
#ifndef QT_NO_TOOLTIP
        actionControlStart->setToolTip(QApplication::translate("sdsMainWindow", "Start", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionControlStart->setStatusTip(QApplication::translate("sdsMainWindow", "Start the program in GDB. Stop in main().", nullptr));
#endif // QT_NO_STATUSTIP
        actionControlContinue->setText(QApplication::translate("sdsMainWindow", "Continue", nullptr));
#ifndef QT_NO_TOOLTIP
        actionControlContinue->setToolTip(QApplication::translate("sdsMainWindow", "Continue", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionControlContinue->setStatusTip(QApplication::translate("sdsMainWindow", "Continue executing the program. Stop at any breakpoints, or when the program exits.", nullptr));
#endif // QT_NO_STATUSTIP
        actionControlNext->setText(QApplication::translate("sdsMainWindow", "Next", nullptr));
#ifndef QT_NO_TOOLTIP
        actionControlNext->setToolTip(QApplication::translate("sdsMainWindow", "Next", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionControlNext->setStatusTip(QApplication::translate("sdsMainWindow", "Execute next step, step over functions.", nullptr));
#endif // QT_NO_STATUSTIP
        actionControlStep->setText(QApplication::translate("sdsMainWindow", "Step", nullptr));
#ifndef QT_NO_TOOLTIP
        actionControlStep->setToolTip(QApplication::translate("sdsMainWindow", "Step", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionControlStep->setStatusTip(QApplication::translate("sdsMainWindow", "Execute next step, step into functions.", nullptr));
#endif // QT_NO_STATUSTIP
        actionControlFinish->setText(QApplication::translate("sdsMainWindow", "Finish", nullptr));
#ifndef QT_NO_TOOLTIP
        actionControlFinish->setToolTip(QApplication::translate("sdsMainWindow", "Finish", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionControlFinish->setStatusTip(QApplication::translate("sdsMainWindow", "Execute the remaining function, stop after it exits.", nullptr));
#endif // QT_NO_STATUSTIP
        actionControlInterrupt->setText(QApplication::translate("sdsMainWindow", "Interrupt", nullptr));
#ifndef QT_NO_TOOLTIP
        actionControlInterrupt->setToolTip(QApplication::translate("sdsMainWindow", "Interrupt", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionControlInterrupt->setStatusTip(QApplication::translate("sdsMainWindow", "Send a 'Terminate' signal to the process.", nullptr));
#endif // QT_NO_STATUSTIP
        actionSettingsConfiguration->setText(QApplication::translate("sdsMainWindow", "Configuration...", nullptr));
#ifndef QT_NO_STATUSTIP
        actionSettingsConfiguration->setStatusTip(QApplication::translate("sdsMainWindow", "Configure Seer.", nullptr));
#endif // QT_NO_STATUSTIP
        actionSettingsSaveConfiguration->setText(QApplication::translate("sdsMainWindow", "Save Configuration...", nullptr));
#ifndef QT_NO_STATUSTIP
        actionSettingsSaveConfiguration->setStatusTip(QApplication::translate("sdsMainWindow", "Save the configurations so future Seer sessions will use them.", nullptr));
#endif // QT_NO_STATUSTIP
        actionConsoleNormal->setText(QApplication::translate("sdsMainWindow", "Normal", nullptr));
#ifndef QT_NO_STATUSTIP
        actionConsoleNormal->setStatusTip(QApplication::translate("sdsMainWindow", "Show the console window.", nullptr));
#endif // QT_NO_STATUSTIP
        actionConsoleHidden->setText(QApplication::translate("sdsMainWindow", "Hidden", nullptr));
#ifndef QT_NO_STATUSTIP
        actionConsoleHidden->setStatusTip(QApplication::translate("sdsMainWindow", "Hide the console window.", nullptr));
#endif // QT_NO_STATUSTIP
        actionConsoleMinimized->setText(QApplication::translate("sdsMainWindow", "Minimized", nullptr));
#ifndef QT_NO_STATUSTIP
        actionConsoleMinimized->setStatusTip(QApplication::translate("sdsMainWindow", "Minimize the console window.", nullptr));
#endif // QT_NO_STATUSTIP
        actionArr->setText(QApplication::translate("sdsMainWindow", "Arr", nullptr));
        actionstruct->setText(QApplication::translate("sdsMainWindow", "struct", nullptr));
        actionsolo->setText(QApplication::translate("sdsMainWindow", "\345\215\225\351\223\276\350\241\250", nullptr));
        actiondouble->setText(QApplication::translate("sdsMainWindow", "\345\217\214\351\223\276\350\241\250", nullptr));
        menuFile->setTitle(QApplication::translate("sdsMainWindow", "File", nullptr));
        menuEdit->setTitle(QApplication::translate("sdsMainWindow", "Edit", nullptr));
        menuView->setTitle(QApplication::translate("sdsMainWindow", "View", nullptr));
#ifndef QT_NO_TOOLTIP
        menuConsole->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        menuConsole->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        menuConsole->setTitle(QApplication::translate("sdsMainWindow", "Console", nullptr));
        menuSettings->setTitle(QApplication::translate("sdsMainWindow", "Settings", nullptr));
        menuHelp->setTitle(QApplication::translate("sdsMainWindow", "Help", nullptr));
        menuControl->setTitle(QApplication::translate("sdsMainWindow", "Control", nullptr));
        toolBar->setWindowTitle(QApplication::translate("sdsMainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sdsMainWindow: public Ui_sdsMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SDSMAINWINDOW_H
