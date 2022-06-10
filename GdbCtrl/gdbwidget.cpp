#include "gdbwidget.h"

#include "LogWidget.h"
#include "SeerMemoryVisualizerWidget.h"
#include "SeerArrayVisualizerWidget.h"
#include "SeerBreakpointsOptionsBarWidget.h"
#include "util.h"
#include <QtGui/QFont>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMessageBox>
#include <QtWidgets/QFileDialog>
#include <QtCore/QLoggingCategory>
#include <QtCore/QDebug>
#include <QtGlobal>
//#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
//#include <termios.h>
//#include <sys/ioctl.h>
#include <signal.h>
#include <string.h>
#include <errno.h>
#include "ui_gdbwidget.h"

static QLoggingCategory LC("gdbwidget");

GdbWidget::GdbWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GdbWidget)
    {
    _executableName                 = "";
    _executableArguments            = "";
    _executableWorkingDirectory     = "";
    _executableBreakpointsFilename  = "";
    _executableHostPort             = "";
    _executableSerialBaud           = -1;
    _executableSerialParity         = "none";
    _executableCoreFilename         = "";
    _executablePid                  = 0;

    _gdbMonitor                     = 0;
    _gdbProcess                     = 0;

    _breakpointsBrowserWidget       = 0;
    _watchpointsBrowserWidget       = 0;
    _catchpointsBrowserWidget       = 0;
    _gdbOutputLog                   = 0;
    _seerOutputLog                  = 0;
    _gdbProgram                     = "gdb";
    _gdbArguments                   = "--interpreter=mi";
    _gdbASyncMode                   = true;
    _gdbHandleTerminatingException  = true;

    _rememberManualCommandCount     = 10;
    _currentFrame                   = -1;

    setNewExecutableFlag(true);
    ui->setupUi(this);
    QFont font;
    font.setFamily("monospace [Consolas]");
    font.setFixedPitch(true);
    font.setStyleHint(QFont::TypeWriter);

    _breakpointsBrowserWidget = new SeerBreakpointsBrowserWidget(this);
    _watchpointsBrowserWidget = new SeerWatchpointsBrowserWidget(this);
    _catchpointsBrowserWidget = new SeerCatchpointsBrowserWidget(this);

    _gdbOutputLog             = new GdbLogWidget(this);
    _seerOutputLog            = new LogWidget(this);

    ui->logsTabWidget->addTab(_breakpointsBrowserWidget, "Breakpoints");
    ui->logsTabWidget->addTab(_watchpointsBrowserWidget, "Watchpoints");
    ui->logsTabWidget->addTab(_catchpointsBrowserWidget, "Catchpoints");
    ui->logsTabWidget->addTab(_gdbOutputLog,             "GDB  output");
    ui->logsTabWidget->addTab(_seerOutputLog,            "SDS output");
    ui->logsTabWidget->setCurrentIndex(0);

    SeerBreakpointsOptionsBarWidget* breakpointsOptionsBar = new SeerBreakpointsOptionsBarWidget(ui->logsTabWidget);

    ui->logsTabWidget->setCornerWidget(breakpointsOptionsBar, Qt::TopRightCorner);

    ui->manualCommandComboBox->setFont(font);
    ui->manualCommandComboBox->setEditable(true);
    ui->manualCommandComboBox->lineEdit()->setPlaceholderText("Manually enter a gdb/mi command...");
    ui->manualCommandComboBox->lineEdit()->setToolTip("Manually enter a gdb/mi command.");
    ui->manualCommandComboBox->lineEdit()->setClearButtonEnabled(true);

    // Create the gdb process.
    _gdbProcess = new QProcess(this);

    // Create the gdb monitor.
    _gdbMonitor = new GdbMonitor(this);
    _gdbMonitor->setProcess(_gdbProcess);

        QObject::connect(ui->manualCommandComboBox->lineEdit(),                         &QLineEdit::returnPressed,                                                                  this,                                                           &GdbWidget::handleManualCommandExecute);

        QObject::connect(_gdbProcess,                                               &QProcess::readyReadStandardOutput,                                                         _gdbMonitor,                                                    &GdbMonitor::handleReadyReadStandardOutput);
        QObject::connect(_gdbProcess,                                               &QProcess::readyReadStandardError,                                                          _gdbMonitor,                                                    &GdbMonitor::handleReadyReadStandardError);
        QObject::connect(_gdbProcess,                                               static_cast<void (QProcess::*)(int, QProcess::ExitStatus)>(&QProcess::finished),            this,                                                           &GdbWidget::handleGdbProcessFinished); // ??? Do we care about the gdb process ending? For now, terminate Seer.
        QObject::connect(_gdbProcess,                                               static_cast<void (QProcess::*)(QProcess::ProcessError)>(&QProcess::errorOccurred),          this,                                                           &GdbWidget::handleGdbProcessErrored);

        QObject::connect(_gdbMonitor,                                               &GdbMonitor::tildeTextOutput,                                                               _gdbOutputLog,                                                  &GdbLogWidget::handleText);
        QObject::connect(_gdbMonitor,                                               &GdbMonitor::ampersandTextOutput,                                                           _gdbOutputLog,                                                  &GdbLogWidget::handleText);
        QObject::connect(_gdbMonitor,                                               &GdbMonitor::equalTextOutput,                                                               _seerOutputLog,                                                 &LogWidget::handleText);
        QObject::connect(_gdbMonitor,                                               &GdbMonitor::caretTextOutput,                                                               _seerOutputLog,                                                 &LogWidget::handleText);
        QObject::connect(_gdbMonitor,                                               &GdbMonitor::astrixTextOutput,                                                              _seerOutputLog,                                                 &LogWidget::handleText);
        QObject::connect(_gdbMonitor,                                               &GdbMonitor::astrixTextOutput,                                                              ui->editorManagerWidget,                                            &SeerEditorManagerWidget::handleText);
        QObject::connect(_gdbMonitor,                                               &GdbMonitor::caretTextOutput,                                                               ui->editorManagerWidget,                                            &SeerEditorManagerWidget::handleText);
        QObject::connect(_gdbMonitor,                                               &GdbMonitor::caretTextOutput,                                                               ui->sourceLibraryManagerWidget->sourceBrowserWidget(),              &SeerSourceBrowserWidget::handleText);
        QObject::connect(_gdbMonitor,                                               &GdbMonitor::caretTextOutput,                                                               ui->sourceLibraryManagerWidget->functionBrowserWidget(),            &SeerFunctionBrowserWidget::handleText);
        QObject::connect(_gdbMonitor,                                               &GdbMonitor::caretTextOutput,                                                               ui->sourceLibraryManagerWidget->typeBrowserWidget(),                &SeerTypeBrowserWidget::handleText);
        QObject::connect(_gdbMonitor,                                               &GdbMonitor::caretTextOutput,                                                               ui->sourceLibraryManagerWidget->variableBrowserWidget(),            &SeerVariableBrowserWidget::handleText);
        QObject::connect(_gdbMonitor,                                               &GdbMonitor::caretTextOutput,                                                               ui->sourceLibraryManagerWidget->libraryBrowserWidget(),             &SeerLibraryBrowserWidget::handleText);
        QObject::connect(_gdbMonitor,                                               &GdbMonitor::caretTextOutput,                                                               ui->stackManagerWidget->stackFramesBrowserWidget(),                 &SeerStackFramesBrowserWidget::handleText);
        QObject::connect(_gdbMonitor,                                               &GdbMonitor::caretTextOutput,                                                               ui->stackManagerWidget->stackLocalsBrowserWidget(),                 &SeerStackLocalsBrowserWidget::handleText);
        QObject::connect(_gdbMonitor,                                               &GdbMonitor::caretTextOutput,                                                               ui->stackManagerWidget->stackArgumentsBrowserWidget(),              &SeerStackArgumentsBrowserWidget::handleText);
        QObject::connect(_gdbMonitor,                                               &GdbMonitor::caretTextOutput,                                                               ui->stackManagerWidget,                                             &SeerStackManagerWidget::handleText);
        QObject::connect(_gdbMonitor,                                               &GdbMonitor::caretTextOutput,                                                               ui->threadManagerWidget->threadIdsBrowserWidget(),                  &SeerThreadIdsBrowserWidget::handleText);
        QObject::connect(_gdbMonitor,                                               &GdbMonitor::caretTextOutput,                                                               ui->threadManagerWidget->threadFramesBrowserWidget(),               &SeerThreadFramesBrowserWidget::handleText);
        QObject::connect(_gdbMonitor,                                               &GdbMonitor::caretTextOutput,                                                               _breakpointsBrowserWidget,                                      &SeerBreakpointsBrowserWidget::handleText);
        QObject::connect(_gdbMonitor,                                               &GdbMonitor::caretTextOutput,                                                               _watchpointsBrowserWidget,                                      &SeerWatchpointsBrowserWidget::handleText);
        QObject::connect(_gdbMonitor,                                               &GdbMonitor::caretTextOutput,                                                               _catchpointsBrowserWidget,                                      &SeerCatchpointsBrowserWidget::handleText);
//        QObject::connect(_gdbMonitor,                                               &GdbMonitor::caretTextOutput,                                                               _printpointsBrowserWidget,                                      &SeerPrintpointsBrowserWidget::handleText);
//        QObject::connect(_gdbMonitor,                                               &GdbMonitor::caretTextOutput,                                                               ui->variableManagerWidget->registerValuesBrowserWidget(),           &SeerRegisterValuesBrowserWidget::handleText);
        QObject::connect(_gdbMonitor,                                               &GdbMonitor::caretTextOutput,                                                               ui->variableManagerWidget->variableTrackerBrowserWidget(),          &SeerVariableTrackerBrowserWidget::handleText);
        QObject::connect(_gdbMonitor,                                               &GdbMonitor::caretTextOutput,                                                               ui->variableManagerWidget->variableLoggerBrowserWidget(),           &SeerVariableLoggerBrowserWidget::handleText);
        QObject::connect(_gdbMonitor,                                               &GdbMonitor::astrixTextOutput,                                                              _watchpointsBrowserWidget,                                      &SeerWatchpointsBrowserWidget::handleText);
        QObject::connect(_gdbMonitor,                                               &GdbMonitor::astrixTextOutput,                                                              this,                                                           &GdbWidget::handleText);
        QObject::connect(_gdbMonitor,                                               &GdbMonitor::equalTextOutput,                                                               this,                                                           &GdbWidget::handleText);

        QObject::connect(ui->editorManagerWidget,                                       &SeerEditorManagerWidget::refreshBreakpointsList,                                           this,                                                           &GdbWidget::handleGdbGenericpointList);
        QObject::connect(ui->editorManagerWidget,                                       &SeerEditorManagerWidget::refreshStackFrames,                                               this,                                                           &GdbWidget::handleGdbStackListFrames);
        QObject::connect(ui->editorManagerWidget,                                       &SeerEditorManagerWidget::insertBreakpoint,                                                 this,                                                           &GdbWidget::handleGdbBreakpointInsert);
        QObject::connect(ui->editorManagerWidget,                                       &SeerEditorManagerWidget::insertPrintpoint,                                                 this,                                                           &GdbWidget::handleGdbPrintpointInsert);
        QObject::connect(ui->editorManagerWidget,                                       &SeerEditorManagerWidget::deleteBreakpoints,                                                this,                                                           &GdbWidget::handleGdbBreakpointDelete);
        QObject::connect(ui->editorManagerWidget,                                       &SeerEditorManagerWidget::enableBreakpoints,                                                this,                                                           &GdbWidget::handleGdbBreakpointEnable);
        QObject::connect(ui->editorManagerWidget,                                       &SeerEditorManagerWidget::disableBreakpoints,                                               this,                                                           &GdbWidget::handleGdbBreakpointDisable);
        QObject::connect(ui->editorManagerWidget,                                       &SeerEditorManagerWidget::runToLine,                                                        this,                                                           &GdbWidget::handleGdbRunToLine);
        QObject::connect(ui->editorManagerWidget,                                       &SeerEditorManagerWidget::addVariableLoggerExpression,                                      ui->variableManagerWidget->variableLoggerBrowserWidget(),           &SeerVariableLoggerBrowserWidget::addVariableExpression);
        QObject::connect(ui->editorManagerWidget,                                       &SeerEditorManagerWidget::addVariableTrackerExpression,                                     this,                                                           &GdbWidget::handleGdbDataAddExpression);
        QObject::connect(ui->editorManagerWidget,                                       &SeerEditorManagerWidget::refreshVariableTrackerValues,                                     this,                                                           &GdbWidget::handleGdbDataListValues);
        QObject::connect(ui->editorManagerWidget,                                       &SeerEditorManagerWidget::addMemoryVisualize,                                               this,                                                           &GdbWidget::handleGdbMemoryAddExpression);
        QObject::connect(ui->editorManagerWidget,                                       &SeerEditorManagerWidget::addArrayVisualize,                                                this,                                                           &GdbWidget::handleGdbArrayAddExpression);
        QObject::connect(ui->editorManagerWidget,                                       &SeerEditorManagerWidget::evaluateVariableExpression,                                       this,                                                           &GdbWidget::handleGdbDataEvaluateExpression);
        QObject::connect(ui->editorManagerWidget,                                       &SeerEditorManagerWidget::evaluateVariableExpression,                                       ui->variableManagerWidget->variableLoggerBrowserWidget(),           &SeerVariableLoggerBrowserWidget::handleEvaluateVariableExpression);

        QObject::connect(ui->sourceLibraryManagerWidget->sourceBrowserWidget(),         &SeerSourceBrowserWidget::refreshSourceList,                                                this,                                                           &GdbWidget::handleGdbExecutableSources);
        QObject::connect(ui->sourceLibraryManagerWidget->sourceBrowserWidget(),         &SeerSourceBrowserWidget::selectedFile,                                                     ui->editorManagerWidget,                                            &SeerEditorManagerWidget::handleOpenFile);
        QObject::connect(ui->sourceLibraryManagerWidget->functionBrowserWidget(),       &SeerFunctionBrowserWidget::refreshFunctionList,                                            this,                                                           &GdbWidget::handleGdbExecutableFunctions);
        QObject::connect(ui->sourceLibraryManagerWidget->functionBrowserWidget(),       &SeerFunctionBrowserWidget::selectedFile,                                                   ui->editorManagerWidget,                                            &SeerEditorManagerWidget::handleOpenFile);
        QObject::connect(ui->sourceLibraryManagerWidget->typeBrowserWidget(),           &SeerTypeBrowserWidget::refreshTypeList,                                                    this,                                                           &GdbWidget::handleGdbExecutableTypes);
        QObject::connect(ui->sourceLibraryManagerWidget->typeBrowserWidget(),           &SeerTypeBrowserWidget::selectedFile,                                                       ui->editorManagerWidget,                                            &SeerEditorManagerWidget::handleOpenFile);
        QObject::connect(ui->sourceLibraryManagerWidget->variableBrowserWidget(),       &SeerVariableBrowserWidget::refreshVariableList,                                            this,                                                           &GdbWidget::handleGdbExecutableVariables);
        QObject::connect(ui->sourceLibraryManagerWidget->variableBrowserWidget(),       &SeerVariableBrowserWidget::selectedFile,                                                   ui->editorManagerWidget,                                            &SeerEditorManagerWidget::handleOpenFile);
        QObject::connect(ui->sourceLibraryManagerWidget->libraryBrowserWidget(),        &SeerLibraryBrowserWidget::refreshLibraryList,                                              this,                                                           &GdbWidget::handleGdbExecutableLibraries);

        QObject::connect(ui->stackManagerWidget->stackFramesBrowserWidget(),            &SeerStackFramesBrowserWidget::refreshStackFrames,                                          this,                                                           &GdbWidget::handleGdbStackListFrames);
        QObject::connect(ui->stackManagerWidget->stackLocalsBrowserWidget(),            &SeerStackLocalsBrowserWidget::refreshStackLocals,                                          this,                                                           &GdbWidget::handleGdbStackListLocals);
        QObject::connect(ui->stackManagerWidget->stackFramesBrowserWidget(),            &SeerStackFramesBrowserWidget::selectedFrame,                                               this,                                                           &GdbWidget::handleGdbStackSelectFrame);
        QObject::connect(ui->stackManagerWidget->stackArgumentsBrowserWidget(),         &SeerStackArgumentsBrowserWidget::refreshStackArguments,                                    this,                                                           &GdbWidget::handleGdbStackListArguments);
        QObject::connect(ui->stackManagerWidget->stackFramesBrowserWidget(),            &SeerStackFramesBrowserWidget::selectedFile,                                                ui->editorManagerWidget,                                            &SeerEditorManagerWidget::handleOpenFile);
        QObject::connect(ui->stackManagerWidget,                                        &SeerStackManagerWidget::refreshThreadFrames,                                               this,                                                           &GdbWidget::handleGdbThreadListFrames);

        QObject::connect(ui->variableManagerWidget->variableTrackerBrowserWidget(),     &SeerVariableTrackerBrowserWidget::refreshVariableTrackerValues,                            this,                                                           &GdbWidget::handleGdbDataListExpressions);
        QObject::connect(ui->variableManagerWidget->variableTrackerBrowserWidget(),     &SeerVariableTrackerBrowserWidget::refreshVariableTrackerNames,                             this,                                                           &GdbWidget::handleGdbDataListValues);
        QObject::connect(ui->variableManagerWidget->variableTrackerBrowserWidget(),     &SeerVariableTrackerBrowserWidget::addVariableExpression,                                   this,                                                           &GdbWidget::handleGdbDataAddExpression);
        QObject::connect(ui->variableManagerWidget->variableTrackerBrowserWidget(),     &SeerVariableTrackerBrowserWidget::deleteVariableExpressions,                               this,                                                           &GdbWidget::handleGdbDataDeleteExpressions);
        QObject::connect(ui->variableManagerWidget->variableLoggerBrowserWidget(),      &SeerVariableLoggerBrowserWidget::evaluateVariableExpression,                               this,                                                           &GdbWidget::handleGdbDataEvaluateExpression);

//        QObject::connect(ui->variableManagerWidget->registerValuesBrowserWidget(),      &SeerRegisterValuesBrowserWidget::refreshRegisterNames,                                     this,                                                           &GdbWidget::handleGdbRegisterListNames);
//        QObject::connect(ui->variableManagerWidget->registerValuesBrowserWidget(),      &SeerRegisterValuesBrowserWidget::refreshRegisterValues,                                    this,                                                           &GdbWidget::handleGdbRegisterListValues);

        QObject::connect(ui->threadManagerWidget->threadIdsBrowserWidget(),             &SeerThreadIdsBrowserWidget::refreshThreadIds,                                              this,                                                           &GdbWidget::handleGdbThreadListIds);
        QObject::connect(ui->threadManagerWidget->threadIdsBrowserWidget(),             &SeerThreadIdsBrowserWidget::selectedThread,                                                this,                                                           &GdbWidget::handleGdbThreadSelectId);
        QObject::connect(ui->threadManagerWidget->threadFramesBrowserWidget(),          &SeerThreadFramesBrowserWidget::refreshThreadFrames,                                        this,                                                           &GdbWidget::handleGdbThreadListFrames);
        QObject::connect(ui->threadManagerWidget->threadFramesBrowserWidget(),          &SeerThreadFramesBrowserWidget::selectedFile,                                               ui->editorManagerWidget,                                            &SeerEditorManagerWidget::handleOpenFile);

        QObject::connect(_breakpointsBrowserWidget,                                 &SeerBreakpointsBrowserWidget::refreshBreakpointsList,                                      this,                                                           &GdbWidget::handleGdbGenericpointList);
        QObject::connect(_breakpointsBrowserWidget,                                 &SeerBreakpointsBrowserWidget::deleteBreakpoints,                                           this,                                                           &GdbWidget::handleGdbBreakpointDelete);
        QObject::connect(_breakpointsBrowserWidget,                                 &SeerBreakpointsBrowserWidget::enableBreakpoints,                                           this,                                                           &GdbWidget::handleGdbBreakpointEnable);
        QObject::connect(_breakpointsBrowserWidget,                                 &SeerBreakpointsBrowserWidget::disableBreakpoints,                                          this,                                                           &GdbWidget::handleGdbBreakpointDisable);
        QObject::connect(_breakpointsBrowserWidget,                                 &SeerBreakpointsBrowserWidget::insertBreakpoint,                                            this,                                                           &GdbWidget::handleGdbBreakpointInsert);
        QObject::connect(_breakpointsBrowserWidget,                                 &SeerBreakpointsBrowserWidget::selectedFile,                                                ui->editorManagerWidget,                                            &SeerEditorManagerWidget::handleOpenFile);

        QObject::connect(_watchpointsBrowserWidget,                                 &SeerWatchpointsBrowserWidget::refreshWatchpointsList,                                      this,                                                           &GdbWidget::handleGdbGenericpointList);
        QObject::connect(_watchpointsBrowserWidget,                                 &SeerWatchpointsBrowserWidget::deleteWatchpoints,                                           this,                                                           &GdbWidget::handleGdbWatchpointDelete);
        QObject::connect(_watchpointsBrowserWidget,                                 &SeerWatchpointsBrowserWidget::enableWatchpoints,                                           this,                                                           &GdbWidget::handleGdbWatchpointEnable);
        QObject::connect(_watchpointsBrowserWidget,                                 &SeerWatchpointsBrowserWidget::disableWatchpoints,                                          this,                                                           &GdbWidget::handleGdbWatchpointDisable);
        QObject::connect(_watchpointsBrowserWidget,                                 &SeerWatchpointsBrowserWidget::insertWatchpoint,                                            this,                                                           &GdbWidget::handleGdbWatchpointInsert);
        QObject::connect(_watchpointsBrowserWidget,                                 &SeerWatchpointsBrowserWidget::selectedFile,                                                ui->editorManagerWidget,                                            &SeerEditorManagerWidget::handleOpenFile);

        QObject::connect(_catchpointsBrowserWidget,                                 &SeerCatchpointsBrowserWidget::refreshCatchpointsList,                                      this,                                                           &GdbWidget::handleGdbGenericpointList);
        QObject::connect(_catchpointsBrowserWidget,                                 &SeerCatchpointsBrowserWidget::deleteCatchpoints,                                           this,                                                           &GdbWidget::handleGdbCatchpointDelete);
        QObject::connect(_catchpointsBrowserWidget,                                 &SeerCatchpointsBrowserWidget::enableCatchpoints,                                           this,                                                           &GdbWidget::handleGdbCatchpointEnable);
        QObject::connect(_catchpointsBrowserWidget,                                 &SeerCatchpointsBrowserWidget::disableCatchpoints,                                          this,                                                           &GdbWidget::handleGdbCatchpointDisable);
        QObject::connect(_catchpointsBrowserWidget,                                 &SeerCatchpointsBrowserWidget::insertCatchpoint,                                            this,                                                           &GdbWidget::handleGdbCatchpointInsert);

//        QObject::connect(_printpointsBrowserWidget,                                 &SeerPrintpointsBrowserWidget::refreshPrintpointsList,                                      this,                                                           &GdbWidget::handleGdbGenericpointList);
//        QObject::connect(_printpointsBrowserWidget,                                 &SeerPrintpointsBrowserWidget::deletePrintpoints,                                           this,                                                           &GdbWidget::handleGdbPrintpointDelete);
//        QObject::connect(_printpointsBrowserWidget,                                 &SeerPrintpointsBrowserWidget::enablePrintpoints,                                           this,                                                           &GdbWidget::handleGdbPrintpointEnable);
//        QObject::connect(_printpointsBrowserWidget,                                 &SeerPrintpointsBrowserWidget::disablePrintpoints,                                          this,                                                           &GdbWidget::handleGdbPrintpointDisable);
//        QObject::connect(_printpointsBrowserWidget,                                 &SeerPrintpointsBrowserWidget::insertPrintpoint,                                            this,                                                           &GdbWidget::handleGdbPrintpointInsert);

        QObject::connect(this,                                                      &GdbWidget::stoppingPointReached,                                                       ui->stackManagerWidget->stackFramesBrowserWidget(),                 &SeerStackFramesBrowserWidget::handleStoppingPointReached);
        QObject::connect(this,                                                      &GdbWidget::stoppingPointReached,                                                       ui->stackManagerWidget->stackLocalsBrowserWidget(),                 &SeerStackLocalsBrowserWidget::handleStoppingPointReached);
        QObject::connect(this,                                                      &GdbWidget::stoppingPointReached,                                                       ui->stackManagerWidget->stackArgumentsBrowserWidget(),              &SeerStackArgumentsBrowserWidget::handleStoppingPointReached);
        QObject::connect(this,                                                      &GdbWidget::stoppingPointReached,                                                       ui->threadManagerWidget->threadIdsBrowserWidget(),                  &SeerThreadIdsBrowserWidget::handleStoppingPointReached);
        QObject::connect(this,                                                      &GdbWidget::stoppingPointReached,                                                       ui->threadManagerWidget->threadFramesBrowserWidget(),               &SeerThreadFramesBrowserWidget::handleStoppingPointReached);
//        QObject::connect(this,                                                      &GdbWidget::stoppingPointReached,                                                       ui->variableManagerWidget->registerValuesBrowserWidget(),           &SeerRegisterValuesBrowserWidget::handleStoppingPointReached);
//        QObject::connect(this,                                                      &GdbWidget::stoppingPointReached,                                                       ui->variableManagerWidget->variableTrackerBrowserWidget(),          &SeerVariableTrackerBrowserWidget::handleStoppingPointReached);
        QObject::connect(this,                                                      &GdbWidget::stoppingPointReached,                                                       _breakpointsBrowserWidget,                                      &SeerBreakpointsBrowserWidget::handleStoppingPointReached);
        QObject::connect(this,                                                      &GdbWidget::stoppingPointReached,                                                       _watchpointsBrowserWidget,                                      &SeerWatchpointsBrowserWidget::handleStoppingPointReached);
        QObject::connect(this,                                                      &GdbWidget::stoppingPointReached,                                                       _catchpointsBrowserWidget,                                      &SeerCatchpointsBrowserWidget::handleStoppingPointReached);
//        QObject::connect(this,                                                      &GdbWidget::stoppingPointReached,                                                       _printpointsBrowserWidget,                                      &SeerPrintpointsBrowserWidget::handleStoppingPointReached);
        QObject::connect(this,                                                      &GdbWidget::stoppingPointReached,                                                       ui->stackManagerWidget,                                             &SeerStackManagerWidget::handleStoppingPointReached);

        QObject::connect(ui->leftCenterRightSplitter,                                   &QSplitter::splitterMoved,                                                                  this,                                                           &GdbWidget::handleSplitterMoved);
        QObject::connect(ui->sourceLibraryVariableManagerSplitter,                      &QSplitter::splitterMoved,                                                                  this,                                                           &GdbWidget::handleSplitterMoved);
        QObject::connect(ui->codeManagerLogTabsSplitter,                                &QSplitter::splitterMoved,                                                                  this,                                                           &GdbWidget::handleSplitterMoved);
        QObject::connect(ui->stackThreadManagerSplitter,                                &QSplitter::splitterMoved,                                                                  this,                                                           &GdbWidget::handleSplitterMoved);
        QObject::connect(ui->manualCommandComboBox,                                     QOverload<int>::of(&QComboBox::activated),                                                  this,                                                           &GdbWidget::handleManualCommandChanged);
        QObject::connect(_gdbOutputLog,                                             &LogWidget::logEnabledChanged,                                                          this,                                                           &GdbWidget::handleLogOuputChanged);
        QObject::connect(_gdbOutputLog,                                             &GdbLogWidget::refreshBreakpointsList,                                                  this,                                                           &GdbWidget::handleGdbGenericpointList);
        QObject::connect(_seerOutputLog,                                            &LogWidget::logEnabledChanged,                                                          this,                                                           &GdbWidget::handleLogOuputChanged);

        QObject::connect(breakpointsOptionsBar->breakpointsLoadToolButton(),        &QToolButton::clicked,                                                                      this,                                                           &GdbWidget::handleGdbLoadBreakpoints);
        QObject::connect(breakpointsOptionsBar->breakpointsSaveToolButton(),        &QToolButton::clicked,                                                                      this,                                                           &GdbWidget::handleGdbSaveBreakpoints);

        // Restore window settings.
//        setConsoleMode("normal");
        readSettings();
}

GdbWidget::~GdbWidget()
{
//    deleteConsole();

    if (_gdbMonitor) {
        delete _gdbMonitor;
    }

    if (_gdbProcess) {
        _gdbProcess->kill();
        _gdbProcess->waitForFinished();
        delete _gdbProcess;
    }
    delete ui;
}

GdbMonitor* GdbWidget::gdbMonitor () {
    return _gdbMonitor;
}

QProcess* GdbWidget::gdbProcess () {
    return _gdbProcess;
}


void GdbWidget::setExecutableName (const QString& executableName) {

    _executableName = executableName;

    setNewExecutableFlag(true);
}

const QString& GdbWidget::executableName () const {
    return _executableName;
}

void GdbWidget::setNewExecutableFlag (bool flag) {

    _newExecutableFlag = flag;
}

bool GdbWidget::newExecutableFlag () const {
    return _newExecutableFlag;
}

void GdbWidget::setExecutableArguments (const QString& executableArguments) {

    _executableArguments = executableArguments;
}

const QString& GdbWidget::executableArguments () const {
    return _executableArguments;
}

void GdbWidget::setExecutableWorkingDirectory (const QString& executableWorkingDirectory) {

    _executableWorkingDirectory = executableWorkingDirectory;
}

const QString& GdbWidget::executableWorkingDirectory () const {
    return _executableWorkingDirectory;
}

void GdbWidget::setExecutableBreakpointsFilename (const QString& breakpointsFilename) {
    _executableBreakpointsFilename = breakpointsFilename;
}

const QString& GdbWidget::executableBreakpointsFilename () const {
    return _executableBreakpointsFilename;
}

void GdbWidget::setExecutablePid (int pid) {
    _executablePid = pid;
}

int GdbWidget::executablePid () const {
    return _executablePid;
}

void GdbWidget::setExecutableHostPort (const QString& hostPort) {
    _executableHostPort = hostPort;
}

const QString& GdbWidget::executableHostPort () const {
    return _executableHostPort;
}

void GdbWidget::setExecutableSerialBaud (int executableBaudRate) {
    _executableSerialBaud = executableBaudRate;
}

int GdbWidget::executableSerialBaud () const {
    return _executableSerialBaud;
}

void GdbWidget::setExecutableSerialParity (const QString& executableParity) {
    _executableSerialParity = executableParity;
}

const QString& GdbWidget::executableSerialParity () const {
    return _executableSerialParity;
}

void GdbWidget::setExecutableCoreFilename (const QString& coreFilename) {
    _executableCoreFilename = coreFilename;
}

const QString& GdbWidget::executableCoreFilename () const {
    return _executableCoreFilename;
}

void GdbWidget::setExecutableLaunchMode (const QString& launchMode) {
    _executableLaunchMode = launchMode;
}

const QString& GdbWidget::executableLaunchMode () const {
    return _executableLaunchMode;
}

void GdbWidget::setGdbProgram (const QString& program) {

    _gdbProgram = program;
}

QString GdbWidget::gdbProgram () const {

    return _gdbProgram;
}

void GdbWidget::setGdbArguments (const QString& arguments) {

    _gdbArguments = arguments;
}

QString GdbWidget::gdbArguments () const {

    return _gdbArguments;
}

void GdbWidget::setGdbAsyncMode (bool flag) {

    _gdbASyncMode = flag;
}

bool GdbWidget::gdbAsyncMode () const {

    return _gdbASyncMode;
}

void GdbWidget::setGdbHandleTerminatingException (bool flag) {

    _gdbHandleTerminatingException = flag;
}

bool GdbWidget::gdbHandleTerminatingException () const {

    return _gdbHandleTerminatingException;
}

void GdbWidget::setDprintfStyle (const QString& style) {

    _dprintfStyle = style;
}

QString GdbWidget::dprintfStyle () const {

    return _dprintfStyle;
}

void GdbWidget::setDprintfFunction (const QString& function) {

    _dprintfFunction = function;
}

QString GdbWidget::dprintfFunction () const {

    return _dprintfFunction;
}

void GdbWidget::setDprintfChannel (const QString& channel) {

    _dprintfChannel = channel;
}

QString GdbWidget::dprintfChannel () const {

    return _dprintfChannel;
}

SeerEditorManagerWidget* GdbWidget::editorManager () {

    return ui->editorManagerWidget;
}

const SeerEditorManagerWidget* GdbWidget::editorManager () const {

    return ui->editorManagerWidget;
}

void GdbWidget::handleText (const QString& text) {

    if (text.startsWith("*running,thread-id=\"all\"")) {

        // Probably a better way to handle all these types of stops.
    }else if (text.startsWith("*stopped")) {
        emit stoppingPointReached();

    }else if (text.startsWith("=thread-group-started,")) {
        // =thread-group-started,id="i1",pid="30916"

        QString pid_text = SDS::parseFirst(text, "pid=", '"', '"', false);

        //qDebug() << "Inferior pid = " << pid_text;

        setExecutablePid(pid_text.toLong());

    }else{
        // All other text is ignored by this widget.
    }
}

void GdbWidget::handleManualCommandExecute () {

    // Get new command.
    QString command = ui->manualCommandComboBox->currentText();

    // Do nothing if it is blank.
    if (command == "") {
        return;
    }

    // Remove the second to last line, if it is blank.
    if (ui->manualCommandComboBox->count() >= 2) {

        QString lastCommand = ui->manualCommandComboBox->itemText(ui->manualCommandComboBox->count()-2);

        if (lastCommand == "") {
            ui->manualCommandComboBox->removeItem(ui->manualCommandComboBox->count()-2);
        }
    }

    // Remove the last line, if it is blank.
    if (ui->manualCommandComboBox->count() >= 1) {

        QString lastCommand = ui->manualCommandComboBox->itemText(ui->manualCommandComboBox->count()-1);

        if (lastCommand == "") {
            ui->manualCommandComboBox->removeItem(ui->manualCommandComboBox->count()-1);
        }
    }

    // Add entered command to the end of the list as long as it's not
    // already there.
    if (ui->manualCommandComboBox->count() > 0) {

        QString lastCommand = ui->manualCommandComboBox->itemText(ui->manualCommandComboBox->count()-1);

        if (lastCommand != command) {
            ui->manualCommandComboBox->addItem(command);
        }
    }

    // Add a blank entry. It will be removed when the next manual command is entered.
    ui->manualCommandComboBox->addItem("");

    // Point to last one.
    ui->manualCommandComboBox->setCurrentIndex(ui->manualCommandComboBox->count()-1);

    // Execute it.
    handleGdbCommand(command);
}

void GdbWidget::handleGdbCommand (const QString& command) {

    if (_gdbProcess->state() == QProcess::NotRunning) {
        QMessageBox::warning(this, "Seer",
                             QString("The executable has not been started yet or has already exited.\n\n") +
                             "(" + command + ")",
                             QMessageBox::Ok);
        return;
    }

    QString str = command + "\n";    // Ensure there's a trailing RETURN.

    QByteArray bytes = str.toUtf8(); // 8-bit Unicode Transformation Format

    _gdbProcess->write(bytes);       // Send the data into the stdin stream of the bash child process
}

void GdbWidget::handleGdbExit () {
    handleGdbCommand("-gdb-exit");
}


void GdbWidget::handleGdbRunExecutable () {

    qCDebug(LC) << "Starting 'gdb run'.";

    // Has a executable name been provided?
    if (executableName() == "") {

        QMessageBox::warning(this, "Seer",
                             QString("The executable name has not been provided.\n\nUse File->Debug..."),
                             QMessageBox::Ok);
        return;
    }

    // Do you really want to restart?
    if (isGdbRuning() == true) {

        int result = QMessageBox::warning(this, "Seer",
                                          QString("The executable is already running.\n\nAre you sure to restart it?"),
                                          QMessageBox::Ok|QMessageBox::Cancel, QMessageBox::Cancel);

        if (result == QMessageBox::Cancel) {
            return;
        }
    }

    QApplication::setOverrideCursor(Qt::BusyCursor);

    // Delete the old gdb and console if there is a new executable
    if (newExecutableFlag() == true) {
        killGdb();
//        disconnectConsole();
//        deleteConsole();
    }

    // If gdb isn't running, start it.
    if (isGdbRuning() == false) {

        emit changeWindowTitle(executableName());

        startGdb();
        handleGdbCommand("-gdb-set mi-async on");
        if (gdbAsyncMode()) {
            handleGdbCommand("-gdb-set mi-async on"); // Turn on async mode so the 'interrupt' can happen.
        }

        if (gdbHandleTerminatingException()) {
            handleGdbCommand("-gdb-set unwind-on-terminating-exception on"); // Turn on terminating exceptions when gdb calls the program's functions.
        }else{
            handleGdbCommand("-gdb-set unwind-on-terminating-exception off");
        }
        handleGdbCommand("-gdb-set new-console on");
    }

    // Set dprint parameters.
    resetDprintf();

    // Create a new console.
    // Set the program's tty device for stdin and stdout.
//    createConsole();
//    handleGdbTtyDeviceName();
//    connectConsole();

    setExecutableLaunchMode("run");
    setExecutablePid(0);

    if (newExecutableFlag() == true) {
        handleGdbExecutableName();              // Load the program into the gdb process.
        handleGdbExecutableSources();           // Load the program source files.
        handleGdbExecutableWorkingDirectory();  // Set the program's working directory before running.
        handleGdbExecutableLoadBreakpoints();   // Set the program's breakpoints (if any) before running.
    }

    setNewExecutableFlag(false);

    // Set the program's arguments before running.
    handleGdbExecutableArguments();

    // Run the executable. Do not stop in main.
    handleGdbCommand("-exec-run");

    QApplication::restoreOverrideCursor();

    qCDebug(LC) << "Finishing 'gdb run'.";
}
void GdbWidget::handleGdbStartExecutable () {

    qCDebug(LC) << "Starting 'gdb start'.";

    // Has a executable name been provided?
    if (executableName() == "") {

        QMessageBox::warning(this, "Seer",
                             QString("The executable name has not been provided.\n\nUse File->Debug..."),
                             QMessageBox::Ok);
        return;
    }

    // Do you really want to restart?
    if (isGdbRuning() == true) {

        int result = QMessageBox::warning(this, "Seer",
                                          QString("The executable is already running.\n\nAre you sure to restart it?"),
                                          QMessageBox::Ok|QMessageBox::Cancel, QMessageBox::Cancel);

        if (result == QMessageBox::Cancel) {
            return;
        }
    }

    QApplication::setOverrideCursor(Qt::BusyCursor);

    // Delete the old gdb and console if there is a new executable
    if (newExecutableFlag() == true) {
        killGdb();
//        disconnectConsole();
//        deleteConsole();
    }

    // If gdb isn't running, start it.
    if (isGdbRuning() == false) {

        emit changeWindowTitle(executableName());

        startGdb();

        if (gdbAsyncMode()) {
            handleGdbCommand("-gdb-set mi-async on"); // Turn on async mode so the 'interrupt' can happen.
        }

        if (gdbHandleTerminatingException()) {
            handleGdbCommand("-gdb-set unwind-on-terminating-exception on"); // Turn on terminating exceptions when gdb calls the program's functions.
        }else{
            handleGdbCommand("-gdb-set unwind-on-terminating-exception off");
        }
        handleGdbCommand("-gdb-set new-console on");
    }

    // Set dprint parameters.
    resetDprintf();

    // Create a new console.
    // Set the program's tty device for stdin and stdout.
//    createConsole();
//    handleGdbTtyDeviceName();
//    connectConsole();

    setExecutableLaunchMode("start");
    setExecutablePid(0);

    if (newExecutableFlag() == true) {
        handleGdbExecutableName();              // Load the program into the gdb process.
        handleGdbExecutableSources();           // Load the program source files.
        handleGdbExecutableWorkingDirectory();  // Set the program's working directory before running.
        handleGdbExecutableLoadBreakpoints();   // Set the program's breakpoints (if any) before running.
    }

    setNewExecutableFlag(false);

    // Set the program's arguments before running.
    handleGdbExecutableArguments();

    // Run the executable. Stop in main.
    handleGdbCommand("-exec-run --start");

    QApplication::restoreOverrideCursor();

    qCDebug(LC) << "Finishing 'gdb start'.";
}

void GdbWidget::handleGdbAttachExecutable () {

    // Has a executable name been provided?
    if (executableName() == "") {

        QMessageBox::warning(this, "Seer",
                             QString("The executable name has not been provided.\n\nUse File->Debug..."),
                             QMessageBox::Ok);
        return;
    }

    // Do you really want to restart?
    if (isGdbRuning() == true) {

        int result = QMessageBox::warning(this, "Seer",
                                          QString("The executable is already running.\n\nAre you sure to restart it?"),
                                          QMessageBox::Ok|QMessageBox::Cancel, QMessageBox::Cancel);

        if (result == QMessageBox::Cancel) {
            return;
        }
    }

    QApplication::setOverrideCursor(Qt::BusyCursor);

    // Delete the old gdb and console if there is a new executable
    if (newExecutableFlag() == true) {
        killGdb();
//        disconnectConsole();
//        deleteConsole();
    }

    // If gdb isn't running, start it.
    if (isGdbRuning() == false) {

        emit changeWindowTitle(executableName());

        startGdb();

        if (gdbAsyncMode()) {
            handleGdbCommand("-gdb-set mi-async on"); // Turn on async mode so the 'interrupt' can happen.
        }

        if (gdbHandleTerminatingException()) {
            handleGdbCommand("-gdb-set unwind-on-terminating-exception on"); // Turn on terminating exceptions when gdb calls the program's functions.
        }else{
            handleGdbCommand("-gdb-set unwind-on-terminating-exception off");
        }
    }

    // Set dprint parameters.
    resetDprintf();

    // No console for 'attach' mode.
    setExecutableLaunchMode("attach");

    if (newExecutableFlag() == true) {
        handleGdbExecutableName();              // Load the program into the gdb process.
        handleGdbExecutableSources();           // Load the program source files.
        handleGdbExecutableWorkingDirectory();  // Set the program's working directory before running.
    }

    setNewExecutableFlag(false);

    // Attach to the executable's pid.
    handleGdbCommand(QString("-target-attach %1").arg(executablePid()));

    QApplication::restoreOverrideCursor();
}


void GdbWidget::handleGdbConnectExecutable () {

    //
    // XXX This section likely needs reworking to make it look
    // XXX like the other start methods.
    //

    // Has a executable name been provided?
    if (executableName() == "") {

        QMessageBox::warning(this, "Seer",
                             QString("The executable name has not been provided.\n\nUse File->Debug..."),
                             QMessageBox::Ok);
        return;
    }

    QApplication::setOverrideCursor(Qt::BusyCursor);

    // Delete the old gdb and console if there is a new executable
    if (newExecutableFlag() == true) {
        killGdb();
//        disconnectConsole();
//        deleteConsole();
    }

    qDebug() << "Starting GdbConnect.";

    // If gdb isn't running, start it.
    if (isGdbRuning() == false) {

        emit changeWindowTitle(executableName());

        startGdb();

        if (gdbAsyncMode()) {
            handleGdbCommand("-gdb-set mi-async on"); // Turn on async mode so the 'interrupt' can happen.
        }

        if (gdbHandleTerminatingException()) {
            handleGdbCommand("-gdb-set unwind-on-terminating-exception on"); // Turn on terminating exceptions when gdb calls the program's functions.
        }else{
            handleGdbCommand("-gdb-set unwind-on-terminating-exception off");
        }
    }

    // Set dprint parameters.
    resetDprintf();

    // No console for 'connect' mode.
    setExecutableLaunchMode("connect");
    setExecutablePid(0);

    if (newExecutableFlag() == true) {
        handleGdbExecutableName();              // Load the program into the gdb process.
        handleGdbExecutableSources();           // Load the program source files.
    }

    setNewExecutableFlag(false);

    // Connect to the remote gdbserver.
    handleGdbCommand(QString("-gdb-set serial baud %1").arg(executableSerialBaud()));
    handleGdbCommand(QString("-gdb-set serial parity %1").arg(executableSerialParity()));
    handleGdbCommand(QString("-target-select extended-remote %1").arg(executableHostPort()));
    //handleGdbCommand("-target-download");   // XXX Needed???

    QApplication::restoreOverrideCursor();

    qDebug() << "Finishing GdbConnect.";

    // "-file-symbol-file %s"
    // "-file-exec-file %s"
    // "-target-download"
}


void GdbWidget::handleGdbCoreFileExecutable () {

    // Has a executable name been provided?
    if (executableName() == "") {

        QMessageBox::warning(this, "Seer",
                             QString("The executable name has not been provided.\n\nUse File->Debug..."),
                             QMessageBox::Ok);
        return;
    }

    // Do you really want to restart?
    if (isGdbRuning() == true) {

        int result = QMessageBox::warning(this, "Seer",
                                          QString("The executable is already running.\n\nAre you sure to restart it?"),
                                          QMessageBox::Ok|QMessageBox::Cancel, QMessageBox::Cancel);

        if (result == QMessageBox::Cancel) {
            return;
        }
    }

    QApplication::setOverrideCursor(Qt::BusyCursor);

    // Delete the old gdb and console if there is a new executable
    if (newExecutableFlag() == true) {
        killGdb();
//        disconnectConsole();
//        deleteConsole();
    }

    // If gdb isn't running, start it.
    if (isGdbRuning() == false) {

        emit changeWindowTitle(executableName());

        startGdb();

        if (gdbAsyncMode()) {
            handleGdbCommand("-gdb-set mi-async on"); // Turn on async mode so the 'interrupt' can happen.
        }

        if (gdbHandleTerminatingException()) {
            handleGdbCommand("-gdb-set unwind-on-terminating-exception on"); // Turn on terminating exceptions when gdb calls the program's functions.
        }else{
            handleGdbCommand("-gdb-set unwind-on-terminating-exception off");
        }
    }

    // Set dprint parameters.
    resetDprintf();

    // No console for 'core' mode.
    setExecutableLaunchMode("corefile");
    setExecutablePid(0);

    if (newExecutableFlag() == true) {
        handleGdbExecutableName();              // Load the program into the gdb process.
        handleGdbExecutableSources();           // Load the program source files.
    }

    setNewExecutableFlag(false);

    // Load the executable's core file.
    handleGdbCommand(QString("-target-select core %1").arg(executableCoreFilename()));

    // This is needed for code mode to refresh the stack frame, for some reason.
    handleGdbStackListFrames();

    QApplication::restoreOverrideCursor();
}

void GdbWidget::handleGdbShutdown () {

    if (isGdbRuning() == false) {
        return;
    }

    // We are in no mode now.
    setExecutableLaunchMode("");

    // Give the gdb and 'exit' command.
    // This should handle detaching from an attached pid.
    handleGdbExit();

    // Kill the gdb.
    killGdb();
}


void GdbWidget::handleGdbRunToLine (QString fullname, int lineno) {

    if (executableLaunchMode() == "") {
        return;
    }


    QString command = "-exec-until " + fullname + ":" + QString::number(lineno);

    handleGdbCommand(command);
}

void GdbWidget::handleGdbNext () {

    if (executableLaunchMode() == "") {
        return;
    }

    handleGdbCommand("-exec-next");
}

void GdbWidget::handleGdbStep () {

    if (executableLaunchMode() == "") {
        return;
    }

    handleGdbCommand("-exec-step");
}

void GdbWidget::handleGdbFinish () {

    if (executableLaunchMode() == "") {
        return;
    }

    handleGdbCommand("-exec-finish");
}

void GdbWidget::handleGdbContinue () {

    if (executableLaunchMode() == "") {
        return;
    }

    handleGdbCommand("-exec-continue");
}

void GdbWidget::handleGdbInterrupt () {

    sendGdbInterrupt(-1);
}

void GdbWidget::handleGdbInterruptSIGINT () {

//    sendGdbInterrupt(SIGINT);
}

void GdbWidget::handleGdbInterruptSIGKILL () {

//    sendGdbInterrupt(SIGKILL);
}

void GdbWidget::handleGdbInterruptSIGFPE () {

//    sendGdbInterrupt(SIGFPE);
}

void GdbWidget::handleGdbInterruptSIGSEGV () {

//    sendGdbInterrupt(SIGSEGV);
}

void GdbWidget::handleGdbInterruptSIGUSR1 () {

//    sendGdbInterrupt(SIGUSR1);
}

void GdbWidget::handleGdbInterruptSIGUSR2 () {

//    sendGdbInterrupt(SIGUSR2);
}

void GdbWidget::handleGdbExecutableSources () {

    if (executableLaunchMode() == "") {
        return;
    }

    handleGdbCommand("-file-list-exec-source-files");
}

void GdbWidget::handleGdbExecutableFunctions (int id, const QString& functionRegex) {

    if (executableLaunchMode() == "") {
        return;
    }

    if (id <= 0) {
        return;
    }

    if (functionRegex == "") {
        return;
    }

    //qDebug() << id << functionRegex;

    handleGdbCommand(QString("%1-symbol-info-functions --name %2").arg(id).arg(functionRegex));
}

void GdbWidget::handleGdbExecutableTypes (int id, const QString& typeRegex) {

    if (executableLaunchMode() == "") {
        return;
    }

    if (id <= 0) {
        return;
    }

    if (typeRegex == "") {
        return;
    }

    //qDebug() << id << typeRegex;

    handleGdbCommand(QString("%1-symbol-info-types --name %2").arg(id).arg(typeRegex));
}

void GdbWidget::handleGdbExecutableVariables (int id, const QString& variableNameRegex, const QString& variableTypeRegex) {

    if (executableLaunchMode() == "") {
        return;
    }

    if (id <= 0) {
        return;
    }

    if (variableNameRegex == "" && variableTypeRegex == "") {
        return;
    }

    QString command = QString("%1-symbol-info-variables").arg(id);

    if (variableNameRegex != "") {
        command += QString(" --name %1").arg(variableNameRegex);
    }

    if (variableTypeRegex != "") {
        command += QString(" --type %1").arg(variableTypeRegex);
    }

    handleGdbCommand(command);
}

void GdbWidget::handleGdbExecutableLibraries () {

    if (executableLaunchMode() == "") {
        return;
    }

    handleGdbCommand("-file-list-shared-libraries");
}

void GdbWidget::handleGdbExecutableName () {

    if (executableLaunchMode() == "") {
        return;
    }

    handleGdbCommand(QString("-file-exec-and-symbols ") + executableName());
}

void GdbWidget::handleGdbExecutableArguments () {

    if (executableLaunchMode() == "") {
        return;
    }

    handleGdbCommand(QString("-exec-arguments ") + executableArguments());
}

void GdbWidget::handleGdbExecutableWorkingDirectory () {

    if (executableLaunchMode() == "") {
        return;
    }

    if (executableWorkingDirectory() != "") {
        handleGdbCommand(QString("-environment-cd ") + executableWorkingDirectory());
    }
}

void GdbWidget::handleGdbExecutableLoadBreakpoints () {

    if (executableBreakpointsFilename() == "") {
        return;
    }

    handleGdbCommand("source -v " + executableBreakpointsFilename());
    handleGdbGenericpointList();
}


void GdbWidget::handleGdbStackListFrames () {

    if (executableLaunchMode() == "") {
        return;
    }

    handleGdbCommand("-stack-list-frames");
    handleGdbCommand("-stack-list-arguments --all-values");
}

void GdbWidget::handleGdbStackSelectFrame (int frameno) {

    if (executableLaunchMode() == "") {
        return;
    }

    // This is not supported anymore with gdbmi.
    // handleGdbCommand(QString("-stack-select-frame %1").arg(frameno));

    // So resort to calling the non-gdbmi version.
    handleGdbCommand(QString("frame %1").arg(frameno));

    emit stoppingPointReached();
}

void GdbWidget::handleGdbStackListLocals () {

    if (executableLaunchMode() == "") {
        return;
    }

    handleGdbCommand("-stack-list-variables --all-values");
}

void GdbWidget::handleGdbStackListArguments () {

    if (executableLaunchMode() == "") {
        return;
    }

    handleGdbCommand("-stack-list-arguments --all-values");
}

void GdbWidget::handleGdbGenericpointList () {

    if (executableLaunchMode() == "") {
        return;
    }

    handleGdbCommand("-break-list");
}

void GdbWidget::handleGdbBreakpointDelete (QString breakpoints) {

    if (executableLaunchMode() == "") {
        return;
    }

    handleGdbCommand("-break-delete " + breakpoints);
    handleGdbGenericpointList();
}

void GdbWidget::handleGdbBreakpointEnable (QString breakpoints) {

    if (executableLaunchMode() == "") {
        return;
    }

    handleGdbCommand("-break-enable " + breakpoints);
    handleGdbGenericpointList();
}

void GdbWidget::handleGdbBreakpointDisable (QString breakpoints) {

    if (executableLaunchMode() == "") {
        return;
    }

    handleGdbCommand("-break-disable " + breakpoints);
    handleGdbGenericpointList();
}

void GdbWidget::handleGdbBreakpointInsert (QString breakpoint) {

    if (executableLaunchMode() == "") {
        return;
    }

    handleGdbCommand("-break-insert " + breakpoint);
    handleGdbGenericpointList();
}

void GdbWidget::handleGdbBreakpointReload (QStringList breakpointsText) {

    for (int i=0; i<breakpointsText.size(); i++) {
        handleGdbBreakpointInsert(breakpointsText[i]);
    }
}

void GdbWidget::handleGdbWatchpointReload (QStringList watchpointsText) {

    for (int i=0; i<watchpointsText.size(); i++) {
        handleGdbWatchpointInsert(watchpointsText[i]);
    }
}

void GdbWidget::handleGdbCatchpointReload (QStringList catchpointsText) {

    for (int i=0; i<catchpointsText.size(); i++) {
        handleGdbCatchpointInsert(catchpointsText[i]);
    }
}

void GdbWidget::handleGdbWatchpointDelete (QString watchpoints) {

    if (executableLaunchMode() == "") {
        return;
    }

    handleGdbCommand("-break-delete " + watchpoints);
    handleGdbGenericpointList();
}

void GdbWidget::handleGdbWatchpointEnable (QString watchpoints) {

    if (executableLaunchMode() == "") {
        return;
    }

    handleGdbCommand("-break-enable " + watchpoints);
    handleGdbGenericpointList();
}

void GdbWidget::handleGdbWatchpointDisable (QString watchpoints) {

    if (executableLaunchMode() == "") {
        return;
    }

    handleGdbCommand("-break-disable " + watchpoints);
    handleGdbGenericpointList();
}

void GdbWidget::handleGdbWatchpointInsert (QString watchpoint) {

    if (executableLaunchMode() == "") {
        return;
    }

    handleGdbCommand("-break-watch " + watchpoint);
    handleGdbGenericpointList();
}

void GdbWidget::handleGdbCatchpointDelete (QString catchpoints) {

    if (executableLaunchMode() == "") {
        return;
    }

    handleGdbCommand("-break-delete " + catchpoints);
    handleGdbGenericpointList();
}

void GdbWidget::handleGdbCatchpointEnable (QString catchpoints) {

    if (executableLaunchMode() == "") {
        return;
    }

    handleGdbCommand("-break-enable " + catchpoints);
    handleGdbGenericpointList();
}

void GdbWidget::handleGdbCatchpointDisable (QString catchpoints) {

    if (executableLaunchMode() == "") {
        return;
    }

    handleGdbCommand("-break-disable " + catchpoints);
    handleGdbGenericpointList();
}

void GdbWidget::handleGdbCatchpointInsert (QString catchpoint) {

    if (executableLaunchMode() == "") {
        return;
    }

    handleGdbCommand("-catch-" + catchpoint); // A little bit different than break insert or watch insert.
    handleGdbGenericpointList();
}

void GdbWidget::handleGdbPrintpointDelete (QString printpoints) {

    if (executableLaunchMode() == "") {
        return;
    }

    handleGdbCommand("-break-delete " + printpoints);
    handleGdbGenericpointList();
}

void GdbWidget::handleGdbPrintpointEnable (QString printpoints) {

    if (executableLaunchMode() == "") {
        return;
    }

    handleGdbCommand("-break-enable " + printpoints);
    handleGdbGenericpointList();
}

void GdbWidget::handleGdbPrintpointDisable (QString printpoints) {

    if (executableLaunchMode() == "") {
        return;
    }

    handleGdbCommand("-break-disable " + printpoints);
    handleGdbGenericpointList();
}

void GdbWidget::handleGdbPrintpointInsert (QString printpoint) {

    if (executableLaunchMode() == "") {
        return;
    }

    handleGdbCommand("-dprintf-insert " + printpoint);
    handleGdbGenericpointList();
}


void GdbWidget::handleGdbThreadListIds () {

    if (executableLaunchMode() == "") {
        return;
    }

    handleGdbCommand("-thread-list-ids");
}

void GdbWidget::handleGdbThreadListFrames () {

    if (executableLaunchMode() == "") {
        return;
    }

    handleGdbCommand("-thread-info");
}

void GdbWidget::handleGdbThreadSelectId (int threadid) {

    if (executableLaunchMode() == "") {
        return;
    }

    handleGdbCommand(QString("-thread-select %1").arg(threadid));

    emit stoppingPointReached();
}

//void GdbWidget::handleGdbRegisterListNames () {
//
//    if (executableLaunchMode() == "") {
//        return;
//    }
//
//    handleGdbCommand("-data-list-register-names");
//}
////
//void GdbWidget::handleGdbRegisterListValues () {
//
//    if (executableLaunchMode() == "") {
//        return;
//    }
//
//    handleGdbCommand("-data-list-register-values N");
//}

void GdbWidget::handleGdbDataEvaluateExpression (int expressionid, QString expression) {

    if (executableLaunchMode() == "") {
        return;
    }

    handleGdbCommand(QString::number(expressionid) + "-data-evaluate-expression \"" + expression + "\"");
}

void GdbWidget::handleGdbDataListValues () {

    if (executableLaunchMode() == "") {
        return;
    }

    for (int i=0; i<_dataExpressionId.size(); i++) {
        handleGdbCommand(QString::number(_dataExpressionId[i]) + "-data-evaluate-expression \"" + _dataExpressionName[i] + "\"");
    }
}


void GdbWidget::handleGdbDataListExpressions () {

    if (executableLaunchMode() == "") {
        return;
    }

    // ^done,DataExpressionTable={
    //     entry={id="2",expression="a"},
    //     entry={id="3",expression="i"}
    // }

    QString text;
    text += "^done,DataExpressionTable={";

    for (int i=0; i<_dataExpressionId.size(); i++) {
        if (i != 0) {
            text += ",";
        }
        text += "entry={id=\"" + QString::number(_dataExpressionId[i]) + "\",expression=\"" + _dataExpressionName[i] + "\"}";
    }

    text += "}";

    gdbMonitor()->handleTextOutput(text);
}

void GdbWidget::handleGdbDataAddExpression (QString expression) {

    if (executableLaunchMode() == "") {
        return;
    }

    // Is this one already present?
    // ??? Emit an error?
    if (_dataExpressionName.indexOf(expression) >= 0) {
        return;
    }

    // Add it to our list of variables.
    _dataExpressionName.push_back(expression);
    _dataExpressionId.push_back(SDS::createID());

    // ^done,DataExpressionAdded={
    //     id="2",
    //     expression="a"
    // }

    QString text = QString("^done,DataExpressionAdded={id=\"%1\",expression=\"%2\"}").arg(_dataExpressionId.back()).arg(_dataExpressionName.back());

    //qDebug() << text;

    gdbMonitor()->handleTextOutput(text);
}

void GdbWidget::handleGdbDataDeleteExpressions (QString expressionids) {

    if (executableLaunchMode() == "") {
        return;
    }

    // ^done,DataExpressionDeleted={
    //     entry={id="2", expression="a"},
    //     entry={id="3", expression="a"}
    // }

    QString text;
    text += "^done,DataExpressionDeleted={";

    if (expressionids == "*") {

        bool first = true;
        for (int i=0; i<_dataExpressionId.size(); i++) {

            if (first == false) {
                text += ",";
            }

            text += "entry={id=\"" + QString::number(_dataExpressionId[i]) + "\",expression=\"" + _dataExpressionName[i] + "\"}";
            first = false;
        }

        _dataExpressionId.clear();
        _dataExpressionName.clear();

    }else{

        QStringList ids = expressionids.split(' ', Qt::SkipEmptyParts);

        bool first = true;
        for (int i=0; i<ids.size(); i++) {

            if (ids[i] == "") {
                continue;
            }

            int index = _dataExpressionId.indexOf(ids[i].toInt());

            if (index < 0) {
                continue;
            }

            if (first == false) {
                text += ",";
            }

            text += "entry={id=\"" + QString::number(_dataExpressionId[index]) + "\",expression=\"" + _dataExpressionName[index] + "\"}";
            first = false;

            _dataExpressionId.remove(index);
            _dataExpressionName.remove(index);
        }
    }

    text += "}";

    gdbMonitor()->handleTextOutput(text);
}

void GdbWidget::handleGdbMemoryAddExpression (QString expression) {

    Q_UNUSED(expression);

    if (executableLaunchMode() == "") {
        return;
    }

    SeerMemoryVisualizerWidget* w = new SeerMemoryVisualizerWidget(0);
    w->show();

    // Connect things.
    QObject::connect(_gdbMonitor,  &GdbMonitor::astrixTextOutput,                           w,    &SeerMemoryVisualizerWidget::handleText);
    QObject::connect(_gdbMonitor,  &GdbMonitor::caretTextOutput,                            w,    &SeerMemoryVisualizerWidget::handleText);
    QObject::connect(w,            &SeerMemoryVisualizerWidget::evaluateVariableExpression, this, &GdbWidget::handleGdbDataEvaluateExpression);
    QObject::connect(w,            &SeerMemoryVisualizerWidget::evaluateMemoryExpression,   this, &GdbWidget::handleGdbMemoryEvaluateExpression);

    // Tell the visualizer what variable to use.
    w->setVariableName(expression);
}

void GdbWidget::handleGdbArrayAddExpression (QString expression) {

    Q_UNUSED(expression);

    if (executableLaunchMode() == "") {
        return;
    }

    SeerArrayVisualizerWidget* w = new SeerArrayVisualizerWidget(0);
    w->show();

    // Connect things.
    QObject::connect(_gdbMonitor,  &GdbMonitor::astrixTextOutput,                           w,    &SeerArrayVisualizerWidget::handleText);
    QObject::connect(_gdbMonitor,  &GdbMonitor::caretTextOutput,                            w,    &SeerArrayVisualizerWidget::handleText);
    QObject::connect(w,            &SeerArrayVisualizerWidget::evaluateVariableExpression,  this, &GdbWidget::handleGdbDataEvaluateExpression);
    QObject::connect(w,            &SeerArrayVisualizerWidget::evaluateMemoryExpression,    this, &GdbWidget::handleGdbArrayEvaluateExpression);

    // Tell the visualizer what variable to use.
    w->setVariableName(expression);
}

void GdbWidget::handleGdbMemoryEvaluateExpression (int expressionid, QString address, int count) {

    if (executableLaunchMode() == "") {
        return;
    }

    handleGdbCommand(QString::number(expressionid) + "-data-read-memory-bytes " + address + " " + QString::number(count));
}

void GdbWidget::handleGdbArrayEvaluateExpression (int expressionid, QString address, int count) {

    if (executableLaunchMode() == "") {
        return;
    }

    handleGdbCommand(QString::number(expressionid) + "-data-read-memory-bytes " + address + " " + QString::number(count));
}

void GdbWidget::handleGdbMemoryVisualizer () {
    handleGdbMemoryAddExpression("");
}

void GdbWidget::handleGdbArrayVisualizer () {
    handleGdbArrayAddExpression("");
}

void GdbWidget::handleSplitterMoved (int pos, int index) {

    Q_UNUSED(pos);
    Q_UNUSED(index);

    //qDebug() << "Splitter moved to " << pos << index;

    writeSettings();
}

void GdbWidget::handleManualCommandChanged () {

    //qDebug() << "Manual Command ComboBox changed";

    writeSettings();
}

void GdbWidget::handleLogOuputChanged () {

    //qDebug() << "Log Output changed";

    writeSettings();
}

void GdbWidget::handleGdbLoadBreakpoints () {

    QFileDialog dialog(this, "Seer - Load Breakpoints from a file.", "./", "Breakpoints (*.brk);;All files (*.*)");
    dialog.setOptions(QFileDialog::DontUseNativeDialog);
    dialog.setAcceptMode(QFileDialog::AcceptOpen);
    dialog.setFileMode(QFileDialog::AnyFile);
    dialog.setDefaultSuffix("brk");

    if (dialog.exec() != QDialog::Accepted) {
        return;
    }

    QStringList files = dialog.selectedFiles();

    if (files.size() == 0) {
        return;
    }

    if (files.size() > 1) {
        QMessageBox::critical(this, tr("Error"), tr("Select only 1 file."));
        return;
    }

    QString fname = files[0];

    handleGdbCommand("source -v " + fname);
    handleGdbGenericpointList();

    QMessageBox::information(this, "Seer", "Loaded.");
}

void GdbWidget::handleGdbSaveBreakpoints () {

    if (_breakpointsBrowserWidget->isEmpty() &&
        _watchpointsBrowserWidget->isEmpty() &&
        _catchpointsBrowserWidget->isEmpty() ) {

        QMessageBox::information(this, "Seer", "No breakpoints of any kind to save.");

        return;
    }

    QFileDialog dialog(this, "Seer - Save Breakpoints to a file.", "./", "Breakpoints (*.brk);;All files (*.*)");
    dialog.setOptions(QFileDialog::DontUseNativeDialog);
    dialog.setAcceptMode(QFileDialog::AcceptSave);
    dialog.setFileMode(QFileDialog::AnyFile);
    dialog.setDefaultSuffix("brk");
    dialog.selectFile("seer.brk");

    if (dialog.exec() != QDialog::Accepted) {
        return;
    }

    QStringList files = dialog.selectedFiles();

    if (files.size() == 0) {
        return;
    }

    if (files.size() > 1) {
        QMessageBox::critical(this, tr("Error"), tr("Select only 1 file."));
        return;
    }

    QString fname = files[0];

    handleGdbCommand("save breakpoints " + fname);

    QMessageBox::information(this, "Seer", "Saved.");
}

void GdbWidget::handleGdbProcessFinished (int exitCode, QProcess::ExitStatus exitStatus) {

    //qDebug() << "Gdb process finished. Exit code =" << exitCode << "Exit status =" << exitStatus;

    // Warn if gdb exits only if we are in some kind of run mode.
    if (executableLaunchMode() != "") {

        QMessageBox::warning(this, "Seer",
                             QString("The GDB program exited unexpectedly.\n\n") +
                             QString("Exit code=%1 Exit status=%2").arg(exitCode).arg(exitStatus) + "\n\n" +
                             QString("Please restart Seer."),
                             QMessageBox::Ok);
    }
}

void GdbWidget::handleGdbProcessErrored (QProcess::ProcessError errorStatus) {

    //qDebug() << "Error launching gdb process. Error =" << errorStatus;

    if (errorStatus == QProcess::FailedToStart) {
        QMessageBox::warning(this, "Seer",
                             QString("Unable to launch the GDB program.\n\n") +
                             QString("(%1 %2)").arg(gdbProgram()).arg(gdbArguments()) + "\n\n" +
                             QString("Error status=%1)").arg(errorStatus),
                             QMessageBox::Ok);
    }
}

void GdbWidget::writeSettings () {

    //qDebug() << "Write Settings";

    QSettings settings;

    settings.beginGroup("mainwindowsplitters"); {
        settings.setValue("leftCenterRightSplitter",              ui->leftCenterRightSplitter->saveState());
        settings.setValue("codeManagerLogTabsSplitter",           ui->codeManagerLogTabsSplitter->saveState());
        settings.setValue("sourceLibraryVariableManagerSplitter", ui->sourceLibraryVariableManagerSplitter->saveState());
        settings.setValue("stackThreadManagerSplitter",           ui->stackThreadManagerSplitter->saveState());
    } settings.endGroup();

//    settings.beginGroup("consolewindow"); {
//        settings.setValue("start", consoleMode());
//        settings.setValue("scrolllines", consoleScrollLines());
//    }settings.endGroup();

    settings.beginWriteArray("manualgdbcommandshistory"); {

        QStringList commands = manualCommands(rememberManualCommandCount());

        for (int i = 0; i < commands.size(); ++i) {
            settings.setArrayIndex(i);
            settings.setValue("command", commands[i]);
        }

    } settings.endArray();

    settings.beginWriteArray("sourcealternatedirectories"); {

        QStringList directories = sourceAlternateDirectories();

        for (int i = 0; i < directories.size(); ++i) {
            settings.setArrayIndex(i);
            settings.setValue("directory", directories[i]);
        }

    } settings.endArray();

    settings.beginGroup("gdboutputlog"); {
        settings.setValue("enabled", isGdbOutputLogEnabled());
    } settings.endGroup();

    settings.beginGroup("seeroutputlog"); {
        settings.setValue("enabled", isSeerOutputLogEnabled());
    } settings.endGroup();
}

void GdbWidget::readSettings () {

    QSettings settings;

    settings.beginGroup("mainwindowsplitters"); {
        ui->leftCenterRightSplitter->restoreState(settings.value("leftCenterRightSplitter").toByteArray());
        ui->codeManagerLogTabsSplitter->restoreState(settings.value("codeManagerLogTabsSplitter").toByteArray());
        ui->sourceLibraryVariableManagerSplitter->restoreState(settings.value("sourceLibraryVariableManagerSplitter").toByteArray());
        ui->stackThreadManagerSplitter->restoreState(settings.value("stackThreadManagerSplitter").toByteArray());
    } settings.endGroup();

//    settings.beginGroup("consolewindow"); {
//        setConsoleMode(settings.value("start", "normal").toString());
//        setConsoleScrollLines(settings.value("scrolllines", 1000).toInt());
//    } settings.endGroup();

    int size = settings.beginReadArray("manualgdbcommandshistory"); {

        QStringList commands;

        for (int i = 0; i < size; ++i) {
            settings.setArrayIndex(i);

            commands << settings.value("command").toString();
        }

        setManualCommands(commands);
    } settings.endArray();

    size = settings.beginReadArray("sourcealternatedirectories"); {

        QStringList directories;

        for (int i = 0; i < size; ++i) {
            settings.setArrayIndex(i);

            directories << settings.value("directory").toString();
        }

        setSourceAlternateDirectories(directories);

    } settings.endArray();

    settings.beginGroup("gdboutputlog"); {
        setGdbOutputLogEnabled(settings.value("enabled", true).toBool());
    } settings.endGroup();

    settings.beginGroup("seeroutputlog"); {
        setSeerOutputLogEnabled(settings.value("enabled", false).toBool());
    } settings.endGroup();
}

void GdbWidget::resetDprintf () {

    if (isGdbRuning() == false) {
        return;
    }

    handleGdbCommand("-gdb-set dprintf-style "    + dprintfStyle());
    handleGdbCommand("-gdb-set dprintf-function " + dprintfFunction());
    handleGdbCommand("-gdb-set dprintf-channel "  + dprintfChannel());
}

bool GdbWidget::isGdbRuning () const {

    if (_gdbProcess->state() == QProcess::NotRunning) {
        return false;
    }

    return true;
}

void GdbWidget::startGdb () {

    // Don't do anything, if already running.
    if (isGdbRuning()) {
        qWarning() << "Already running";

        return;
    }

    // Set the gdb program name to use.
    _gdbProcess->setProgram(gdbProgram());

    // Build the gdb argument list.
    QStringList args = gdbArguments().split(' ', Qt::SkipEmptyParts);

    // Give the gdb process the argument list.
    _gdbProcess->setArguments(args);

    // Start the gdb process.
    _gdbProcess->start();
}

void GdbWidget::killGdb () {

    // Don't do anything, if already running.
    if (isGdbRuning() == false) {
        return;
    }

    // Kill the process.
    _gdbProcess->kill();

    // Wait for it to end.
    _gdbProcess->waitForFinished();

    // Sanity check.
    if (isGdbRuning()) {
        qWarning() << "Is running but shouldn't be.";
    }

    // Clear the launch mode.
    setExecutableLaunchMode("");
}

void GdbWidget::setManualCommands (const QStringList& commands) {

    ui->manualCommandComboBox->clear();
    ui->manualCommandComboBox->addItems(commands);

    // Point to last one.
    if (ui->manualCommandComboBox->count() > 0) {
        ui->manualCommandComboBox->setCurrentIndex(ui->manualCommandComboBox->count()-1);
    }
}

QStringList GdbWidget::manualCommands(int count) const {

    //qDebug() << "Count =" << count;

    // Select all if a zero.
    if (count == 0) {
        count = ui->manualCommandComboBox->count();
    }

    // No more than count.
    if (count > ui->manualCommandComboBox->count()) {
        count = ui->manualCommandComboBox->count();
    }

    // Calculate starting position in list.
    int index = ui->manualCommandComboBox->count() - count;

    // Get the list.
    QStringList list;

    for (; index<count; index++) {
        list << ui->manualCommandComboBox->itemText(index);
    }

    return list;
}

void GdbWidget::setRememberManualCommandCount (int count) {

    _rememberManualCommandCount = count;
}

int GdbWidget::rememberManualCommandCount () const {

    return _rememberManualCommandCount;
}

void GdbWidget::clearManualCommandHistory () {

    // Zap the entries in the combobox.
    ui->manualCommandComboBox->clear();

    // Write the settings.
    writeSettings();
}

const QStringList& GdbWidget::sourceAlternateDirectories() const {

    return editorManager()->editorAlternateDirectories();
}

void GdbWidget::setSourceAlternateDirectories (const QStringList& alternateDirectories) {

    editorManager()->setEditorAlternateDirectories(alternateDirectories);
}

void GdbWidget::setGdbOutputLogEnabled (bool flag) {

    _gdbOutputLog->setLogEnabled(flag);
}

bool GdbWidget::isGdbOutputLogEnabled () const {

    return _gdbOutputLog->isLogEnabled();
}

void GdbWidget::setSeerOutputLogEnabled (bool flag) {

    _seerOutputLog->setLogEnabled(flag);
}

bool GdbWidget::isSeerOutputLogEnabled () const {

    return _seerOutputLog->isLogEnabled();
}

void GdbWidget::sendGdbInterrupt (int signal) {

    //qDebug() << "Sending an interrupt to the program. Signal =" << signal;

    if (executableLaunchMode() == "") {
        return;
    }

    if (executablePid() < 1) {
        QMessageBox::warning(this, "Seer",
                             QString("No executable is running or I don't know the PID of the process.")
        );


        return;
    }

    // Use kill() to send the signal to the inferior.
    // -exec-interrupt does not work for -exec-until when the line
    // number is not in the current function. In this case, -exec-until
    // behaves like -exec-continue but -exec-interrupt has no effect. :^(
    // We do have the ability to use a different signal, though. :^)

    if (signal < 0) {
        handleGdbCommand("-exec-interrupt");

    }
}

