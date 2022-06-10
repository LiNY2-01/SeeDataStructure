#include "sdsmainwindow.h"
#include "util.h"
#include "ui_sdsmainwindow.h"
#include "SeerDebugDialog.h"
#include "SeerConfigDialog.h"
#include "SeerArgumentsDialog.h"
#include "SeerAboutDialog.h"
#include "util.h"
#include <QtWidgets/QMessageBox>
#include <QtWidgets/QMenu>
#include <QtGui/QKeySequence>
#include <QtCore/QCoreApplication>
#include <QtCore/QTimer>
#include <QtCore/QRegExp>
#include <QtCore/QSettings>
#include <QtCore/QDebug>


sdsMainWindow::sdsMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::sdsMainWindow)
{
    ui->setupUi(this);

    SeerRunStatusIndicator* runStatus = new SeerRunStatusIndicator(this);

    statusBar()->addPermanentWidget(runStatus);

    // Add progress spin widget.
    QWidget* spacerWidget = new QWidget(this);
    spacerWidget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
    ui->toolBar->addWidget(spacerWidget);

    _progressIndicator = new QProgressIndicator(this);
    _progressIndicator->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
    _progressIndicator->setFixedWidth(96);
    _progressIndicator->setType(QProgressIndicator::ball_rotate);

    ui->toolBar->addWidget(_progressIndicator);

    //
    // Set up Interrupt menu.
    //
    QMenu* interruptMenu = new QMenu(this);
    QAction* interruptAction = interruptMenu->addAction("GDB Interrupt");
    interruptMenu->addSeparator();
    QAction* interruptActionSIGINT  = interruptMenu->addAction("SIGINT");
    QAction* interruptActionSIGKILL = interruptMenu->addAction("SIGKILL");
    QAction* interruptActionSIGFPE  = interruptMenu->addAction("SIGFPE");
    QAction* interruptActionSIGSEGV = interruptMenu->addAction("SIGSEGV");
    QAction* interruptActionSIGUSR1 = interruptMenu->addAction("SIGUSR1");
    QAction* interruptActionSIGUSR2 = interruptMenu->addAction("SIGUSR2");

    ui->actionInterruptProcess->setMenu(interruptMenu);

    // Set the inital key settings.
    setKeySettings(KeySettings::populate());

    //
    // Set up signals/slots.
    //
    QObject::connect(ui->actionFileDebug,                   &QAction::triggered,                    this,           &sdsMainWindow::handleFileDebug);
    QObject::connect(ui->actionFileArguments,               &QAction::triggered,                    this,           &sdsMainWindow::handleFileArguments);
    QObject::connect(ui->actionFileQuit,                    &QAction::triggered,                    this,           &sdsMainWindow::handleFileQuit);
    QObject::connect(ui->actionViewMemoryVisualizer,        &QAction::triggered,                    this,           &sdsMainWindow::handleViewMemoryVisualizer);
    QObject::connect(ui->actionViewArrayVisualizer,         &QAction::triggered,                    this,           &sdsMainWindow::handleViewArrayVisualizer);
    QObject::connect(ui->actionConsoleNormal,               &QAction::triggered,                    this,           &sdsMainWindow::handleViewConsoleNormal);
    QObject::connect(ui->actionConsoleHidden,               &QAction::triggered,                    this,           &sdsMainWindow::handleViewConsoleHidden);
    QObject::connect(ui->actionConsoleMinimized,            &QAction::triggered,                    this,           &sdsMainWindow::handleViewConsoleMinimized);
    QObject::connect(ui->actionHelpAbout,                   &QAction::triggered,                    this,           &sdsMainWindow::handleHelpAbout);

    QObject::connect(ui->actionControlRun,                  &QAction::triggered,                    ui->gdbWidget,      &GdbWidget::handleGdbRunExecutable);
    QObject::connect(ui->actionControlStart,                &QAction::triggered,                    ui->gdbWidget,      &GdbWidget::handleGdbStartExecutable);
    QObject::connect(ui->actionControlContinue,             &QAction::triggered,                    ui->gdbWidget,      &GdbWidget::handleGdbContinue);
    QObject::connect(ui->actionControlNext,                 &QAction::triggered,                    ui->gdbWidget,      &GdbWidget::handleGdbNext);
    QObject::connect(ui->actionControlStep,                 &QAction::triggered,                    ui->gdbWidget,      &GdbWidget::handleGdbStep);
    QObject::connect(ui->actionControlFinish,               &QAction::triggered,                    ui->gdbWidget,      &GdbWidget::handleGdbFinish);
    QObject::connect(ui->actionControlInterrupt,            &QAction::triggered,                    ui->gdbWidget,      &GdbWidget::handleGdbInterrupt);

    QObject::connect(ui->actionSettingsConfiguration,       &QAction::triggered,                    this,           &sdsMainWindow::handleSettingsConfiguration);
    QObject::connect(ui->actionSettingsSaveConfiguration,   &QAction::triggered,                    this,           &sdsMainWindow::handleSettingsSaveConfiguration);

    QObject::connect(ui->actionGdbRun,                      &QAction::triggered,                    ui->gdbWidget,      &GdbWidget::handleGdbRunExecutable);
    QObject::connect(ui->actionGdbStart,                    &QAction::triggered,                    ui->gdbWidget,      &GdbWidget::handleGdbStartExecutable);
    QObject::connect(ui->actionGdbContinue,                 &QAction::triggered,                    ui->gdbWidget,      &GdbWidget::handleGdbContinue);
    QObject::connect(ui->actionGdbNext,                     &QAction::triggered,                    ui->gdbWidget,      &GdbWidget::handleGdbNext);
    QObject::connect(ui->actionGdbStep,                     &QAction::triggered,                    ui->gdbWidget,      &GdbWidget::handleGdbStep);
    QObject::connect(ui->actionGdbFinish,                   &QAction::triggered,                    ui->gdbWidget,      &GdbWidget::handleGdbFinish);
    QObject::connect(ui->actionInterruptProcess,            &QAction::triggered,                    ui->gdbWidget,      &GdbWidget::handleGdbInterrupt);
    QObject::connect(ui->actionMemoryVisualizer,            &QAction::triggered,                    ui->gdbWidget,      &GdbWidget::handleGdbMemoryVisualizer);
    QObject::connect(ui->actionArrayVisualizer,             &QAction::triggered,                    ui->gdbWidget,      &GdbWidget::handleGdbArrayVisualizer);
    QObject::connect(interruptAction,                   &QAction::triggered,                    ui->gdbWidget,      &GdbWidget::handleGdbInterrupt);
    QObject::connect(interruptActionSIGINT,             &QAction::triggered,                    ui->gdbWidget,      &GdbWidget::handleGdbInterruptSIGINT);
    QObject::connect(interruptActionSIGKILL,            &QAction::triggered,                    ui->gdbWidget,      &GdbWidget::handleGdbInterruptSIGKILL);
    QObject::connect(interruptActionSIGFPE,             &QAction::triggered,                    ui->gdbWidget,      &GdbWidget::handleGdbInterruptSIGFPE);
    QObject::connect(interruptActionSIGSEGV,            &QAction::triggered,                    ui->gdbWidget,      &GdbWidget::handleGdbInterruptSIGSEGV);
    QObject::connect(interruptActionSIGUSR1,            &QAction::triggered,                    ui->gdbWidget,      &GdbWidget::handleGdbInterruptSIGUSR1);
    QObject::connect(interruptActionSIGUSR2,            &QAction::triggered,                    ui->gdbWidget,      &GdbWidget::handleGdbInterruptSIGUSR2);

    QObject::connect(ui->gdbWidget->gdbMonitor(),           &GdbMonitor::astrixTextOutput,          runStatus,      &SeerRunStatusIndicator::handleText);
    QObject::connect(ui->gdbWidget->gdbMonitor(),           &GdbMonitor::astrixTextOutput,          this,           &sdsMainWindow::handleText);
    QObject::connect(ui->gdbWidget->gdbMonitor(),           &GdbMonitor::caretTextOutput,           this,           &sdsMainWindow::handleText);

    QObject::connect(runStatus,                         &SeerRunStatusIndicator::statusChanged, this,           &sdsMainWindow::handleRunStatusChanged);

    QObject::connect(ui->gdbWidget,                         &GdbWidget::changeWindowTitle,      this,           &sdsMainWindow::handleChangeWindowTitle);

    QObject::connect(qApp,                              &QApplication::aboutToQuit,             ui->gdbWidget,      &GdbWidget::handleGdbShutdown);

    // Restore window settings.
    readSettings();

    // Restore configuration settings.
    readConfigSettings();

    //
    // Initialize contents.
    //
    statusBar()->showMessage(tr("Welcome to Seer. The All Knowing..."), 3000);
}

sdsMainWindow::~sdsMainWindow()
{
    delete ui;
}

void sdsMainWindow::setExecutableName (const QString& executableName) {
    ui->gdbWidget->setExecutableName(executableName);
}

const QString& sdsMainWindow::executableName () const {
    return ui->gdbWidget->executableName();
}

void sdsMainWindow::setExecutableArguments (const QString& executableArguments) {

    ui->gdbWidget->setExecutableArguments(executableArguments);
}

void sdsMainWindow::setExecutableArguments (const QStringList& executableArguments) {

    //
    // Convert the list of arguments into a single argument string.
    // Be careful of arguments that contain a space. These need to be surrounded by
    // a "'" character to retain the argument grouping.
    //
    //  ie: myprog  42.0 "This is a multi-worded argument"
    //
    // Has 2 arguments. Not 6.
    //
    QString arguments;

    for (auto arg : executableArguments) {

        if (arg.contains(' ')) {
            arg = "'" + arg + "'";
        }

        if (arguments == "") {
            arguments = arg;
        }else{
            arguments += " " + arg;
        }
    }

    setExecutableArguments(arguments);
}

const QString& sdsMainWindow::executableArguments () const {
    return ui->gdbWidget->executableArguments();
}

void sdsMainWindow::setExecutableWorkingDirectory (const QString& executableWorkingDirectory) {
    ui->gdbWidget->setExecutableWorkingDirectory(executableWorkingDirectory);
}

const QString& sdsMainWindow::executableWorkingDirectory () const {
    return ui->gdbWidget->executableWorkingDirectory();
}

void sdsMainWindow::setExecutableBreakpointsFilename (const QString& breakpointsFilename) {
    ui->gdbWidget->setExecutableBreakpointsFilename(breakpointsFilename);
}

const QString& sdsMainWindow::executableBreakpointsFilename () const {
    return ui->gdbWidget->executableBreakpointsFilename();
}

void sdsMainWindow::setExecutablePid (int pid) {
    ui->gdbWidget->setExecutablePid(pid);
}

int sdsMainWindow::executablePid () const {
    return ui->gdbWidget->executablePid();
}

void sdsMainWindow::setExecutableHostPort (const QString& executableHostPort) {
    ui->gdbWidget->setExecutableHostPort(executableHostPort);
}

const QString& sdsMainWindow::executableHostPort () const {
    return ui->gdbWidget->executableHostPort();
}

void sdsMainWindow::setExecutableSerialBaud (int executableBaudRate) {
    ui->gdbWidget->setExecutableSerialBaud(executableBaudRate);
}

int sdsMainWindow::executableSerialBaud () const {
    return ui->gdbWidget->executableSerialBaud();
}

void sdsMainWindow::setExecutableSerialParity (const QString& executableParity) {
    ui->gdbWidget->setExecutableSerialParity(executableParity);
}

const QString& sdsMainWindow::executableSerialParity () const {
    return ui->gdbWidget->executableSerialParity();
}

void sdsMainWindow::setExecutableCoreFilename (const QString& executableCoreFilename) {
    ui->gdbWidget->setExecutableCoreFilename(executableCoreFilename);
}

const QString& sdsMainWindow::executableCoreFilename () const {
    return ui->gdbWidget->executableCoreFilename();
}

void sdsMainWindow::launchExecutable (const QString& launchMode) {

    if (launchMode == "start") {
        ui->gdbWidget->handleGdbStartExecutable();

    }else if (launchMode == "run") {
        ui->gdbWidget->handleGdbRunExecutable();

    }else if (launchMode == "attach") {
        ui->gdbWidget->handleGdbAttachExecutable();

    }else if (launchMode == "connect") {
        ui->gdbWidget->handleGdbConnectExecutable();

    }else if (launchMode == "corefile") {
        ui->gdbWidget->handleGdbCoreFileExecutable();

    }else if (launchMode == "none") {

        // If no mode, schedule the opening of the debug dialog.
        QTimer::singleShot(200, this, &sdsMainWindow::handleFileDebug);

    }else{
        qWarning() << "Bad launchMode:" << launchMode;
    }
}

const QString& sdsMainWindow::executableLaunchMode () const {
    return ui->gdbWidget->executableLaunchMode();
}

void sdsMainWindow::handleFileDebug () {

    SeerDebugDialog dlg(this);

    dlg.setExecutableName(executableName());
    dlg.setExecutableWorkingDirectory(executableWorkingDirectory());
    dlg.setExecutableArguments(executableArguments());
    dlg.setBreakpointsFilename(executableBreakpointsFilename());
    dlg.setAttachPid(executablePid());
    dlg.setConnectHostPort(executableHostPort());
    dlg.setConnectSerialBaud(executableSerialBaud());
    dlg.setConnectSerialParity(executableSerialParity());
    dlg.setCoreFilename(executableCoreFilename());
    dlg.setLaunchMode(executableLaunchMode());

    int ret = dlg.exec();

    if (ret == 0) {
        return;
    }

    QString launchMode = dlg.launchMode();

    if (launchMode == "") {
        return;
    }

    setExecutableName(dlg.executableName());
    setExecutableWorkingDirectory(dlg.executableWorkingDirectory());
    setExecutableArguments(dlg.executableArguments());
    setExecutableBreakpointsFilename(dlg.breakpointsFilename());
    setExecutablePid(dlg.attachPid());
    setExecutableHostPort(dlg.connectHostPort());
    setExecutableSerialBaud(dlg.connectSerialBaud());
    setExecutableSerialParity(dlg.connectSerialParity());
    setExecutableCoreFilename(dlg.coreFilename());

    launchExecutable(launchMode);
}

void sdsMainWindow::handleFileArguments () {

    SeerArgumentsDialog dlg(this);
    dlg.setExecutableArguments(executableArguments());

    int ret = dlg.exec();

    if (ret == 0) {
        return;
    }

    setExecutableArguments(dlg.executableArguments());
}

void sdsMainWindow::handleFileQuit () {

    ui->gdbWidget->handleGdbShutdown();

    QCoreApplication::exit(0);
}

void sdsMainWindow::handleViewMemoryVisualizer () {

    ui->gdbWidget->handleGdbMemoryVisualizer();
}

void sdsMainWindow::handleViewArrayVisualizer () {

    ui->gdbWidget->handleGdbArrayVisualizer();
}

void sdsMainWindow::handleViewConsoleNormal () {

//    ui->gdbWidget->setConsoleMode("normal");
}

void sdsMainWindow::handleViewConsoleHidden () {

//    ui->gdbWidget->setConsoleMode("hidden");
}

void sdsMainWindow::handleViewConsoleMinimized () {

//    ui->gdbWidget->setConsoleMode("minimized");
}

void sdsMainWindow::handleSettingsConfiguration () {

    SeerConfigDialog dlg(this);

    dlg.setGdbProgram(ui->gdbWidget->gdbProgram());
    dlg.setGdbArguments(ui->gdbWidget->gdbArguments());
    dlg.setGdbAsyncMode(ui->gdbWidget->gdbAsyncMode());
    dlg.setGdbHandleTerminatingException(ui->gdbWidget->gdbHandleTerminatingException());
//    dlg.setDprintfStyle(ui->gdbWidget->dprintfStyle());
//    dlg.setDprintfFunction(ui->gdbWidget->dprintfFunction());
//    dlg.setDprintfChannel(ui->gdbWidget->dprintfChannel());
    dlg.setEditorFont(ui->gdbWidget->editorManager()->editorFont());
    dlg.setEditorHighlighterSettings(ui->gdbWidget->editorManager()->editorHighlighterSettings());
    dlg.setEditorHighlighterEnabled(ui->gdbWidget->editorManager()->editorHighlighterEnabled());
    dlg.setSourceAlternateDirectories(ui->gdbWidget->sourceAlternateDirectories());
//    dlg.setSeerConsoleMode(ui->gdbWidget->consoleMode());
//    dlg.setSeerConsoleScrollLines(ui->gdbWidget->consoleScrollLines());
    dlg.setSeerRememberManualCommandCount(ui->gdbWidget->rememberManualCommandCount());
    dlg.setKeySettings(keySettings());

    int ret = dlg.exec();

    if (ret == 0) {
        return;
    }

    // Update the GdbWidget with the new settings.
    ui->gdbWidget->setGdbProgram(dlg.gdbProgram());
    ui->gdbWidget->setGdbArguments(dlg.gdbArguments());
    ui->gdbWidget->setGdbAsyncMode(dlg.gdbAsyncMode());
    ui->gdbWidget->setGdbHandleTerminatingException(dlg.gdbHandleTerminatingException());
//    ui->gdbWidget->setDprintfStyle(dlg.dprintfStyle());
//    ui->gdbWidget->setDprintfFunction(dlg.dprintfFunction());
//    ui->gdbWidget->setDprintfChannel(dlg.dprintfChannel());
    ui->gdbWidget->editorManager()->setEditorFont(dlg.editorFont());
    ui->gdbWidget->editorManager()->setEditorHighlighterSettings(dlg.editorHighlighterSettings());
    ui->gdbWidget->editorManager()->setEditorHighlighterEnabled(dlg.editorHighlighterEnabled());
    ui->gdbWidget->setSourceAlternateDirectories(dlg.sourceAlternateDirectories());
//    ui->gdbWidget->setConsoleMode(dlg.seerConsoleMode());
//    ui->gdbWidget->setConsoleScrollLines(dlg.seerConsoleScrollLines());
    ui->gdbWidget->setRememberManualCommandCount(dlg.seerRememberManualCommandCount());

    // Clear history, if we need to.
    bool clearManualCommandHistory = dlg.seerClearManualCommandHistory();

    if (clearManualCommandHistory) {
        ui->gdbWidget->clearManualCommandHistory();
    }

    // Reset the dprintf, in case it was changed.
    ui->gdbWidget->resetDprintf();

    // Set the key shortcuts.
    setKeySettings(dlg.keySettings());
}

void sdsMainWindow::handleSettingsSaveConfiguration () {

    int result = QMessageBox::warning(this, "Seer - Settings",
                                      QString("Write the configuration settings?"),
                                      QMessageBox::Ok|QMessageBox::Cancel, QMessageBox::Cancel);

    if (result == QMessageBox::Cancel) {
        return;
    }

    writeConfigSettings();
    ui->gdbWidget->writeSettings();

    QMessageBox::information(this, "Seer", "Saved.");
}

void sdsMainWindow::handleHelpAbout () {

    SeerAboutDialog dlg(this);

    dlg.exec();
}

void sdsMainWindow::handleText (const QString& text) {

    if (text.startsWith("^error,msg=")) {

        // ^error,msg="The program is not being run."
        // ^error,msg="ptrace: No such process."

        //qDebug() << text;

        QString newtext = SDS::filterEscapes(text); // Filter escaped characters.

        // Filter out less important errors.
        if (newtext == "^error,msg=\"No registers.\"") {
            return;
        }

        if (newtext == "^error,msg=\"Selected thread is running.\"") {
            return;
        }

        // Display the error message.
        QString msg_text = SDS::parseFirst(text, "msg=", false);

        if (msg_text != "") {

            statusBar()->showMessage(SDS::filterBookEnds(msg_text, '"', '"'), 3000);

            QMessageBox::warning(this, "Error.", SDS::filterEscapes(msg_text));

            return;
        }

    }else if (text == "^running") {
        // Swallow this message.
        // statusBar()->showMessage(text.mid(1), 3000);
        return;

    }else if (text == "^done") {
        return;

    }else if (text.startsWith("^done,files=[") && text.endsWith("]")) {
        return;

    }else if (text.startsWith("^done,shared-libraries=[") && text.endsWith("]")) {
        return;

    }else if (text.startsWith("^done,stack=[") && text.endsWith("]")) {
        return;

    }else if (text.startsWith("^done,variables=[") && text.endsWith("]")) {
        return;

    }else if (text.startsWith("^done,stack-args=[") && text.endsWith("]")) {
        return;

    }else if (text.startsWith("^done,BreakpointTable={") && text.endsWith("}")) {
        return;

    }else if (text.startsWith("^done,bkpt={") && text.endsWith("}")) {
        return;

    }else if (text.startsWith("^done,hw-awpt={")) {
        return;

    }else if (text.startsWith("^done,hw-rwpt={")) {
        return;

    }else if (text.startsWith("^done,wpt={")) {
        return;

    }else if (text.startsWith("^done,thread-ids={")) {
        return;

    }else if (text.startsWith("^done,new-thread-id=")) {
        return;

    }else if (text.startsWith("^done,threads=[")) {
        return;

    }else if (text.startsWith("^done,register-names=[") && text.endsWith("]")) {
        return;

    }else if (text.startsWith("^done,register-values=[") && text.endsWith("]")) {
        return;

    }else if (text.startsWith("^done,DataExpressionAdded={") && text.endsWith("}")) {
        return;

    }else if (text.startsWith("^done,DataExpressionDeleted={") && text.endsWith("}")) {
        return;

    }else if (text.startsWith("^done,DataExpressionTable={") && text.endsWith("}")) {
        return;

    }else if (text.startsWith("^done,symbols={") && text.endsWith("}")) {
        return;

    }else if (text == "^exit") {
        return;

    }else if (text.contains(QRegExp("^([0-9]+)\\^done"))) {
        return;

    }else if (text.contains(QRegExp("^([0-9]+)\\^done,value="))) {
        return;

    }else if (text.contains(QRegExp("^([0-9]+)\\^error,msg="))) {
        return;

    }else if (text.contains(QRegExp("^([0-9]+)\\^done,memory="))) {
        return;

    }else if (text.startsWith("*running,thread-id=\"")) {

        QString threadid_text = SDS::parseFirst(text, "thread-id=", '"', '"', false);

        statusBar()->showMessage("Program started. Thread id: " + threadid_text, 3000);

        return;

    }else if (text.startsWith("^connected,frame=")) {
        //^connected,frame={level=\"0\",addr=\"0x00007f48351f80c1\",func=\"read\",args=[],from=\"/lib64/libc.so.6\",arch=\"i386:x86-64\"}"
        return;

    }else if (text.startsWith("*stopped")) {

        QString reason_text = SDS::parseFirst(text, "reason=", '"', '"', false);

        if (reason_text == "") {
            reason_text = "unknown";
        }

        statusBar()->showMessage("Program stopped. Reason: " + reason_text, 3000);

        if (reason_text == "signal-received") {
            //*stopped,reason="signal-received",signal-name="SIGSEGV",signal-meaning="Segmentation fault", ...

            QString signalname_text = SDS::parseFirst(text, "signal-name=", '"', '"', false);

            QMessageBox::warning(this, "Warning.", "Program encountered a '" + signalname_text + "' signal.");

        }else if (reason_text == "watchpoint-trigger") {
            //*stopped,reason="watchpoint-trigger",wpt={number="3",exp="i"},value={old="32767",new="42"},frame={addr="0x0000000000400d79",func="function1",args=[{name="text",value="\"Hello, World!\""}],file="function1.cpp",fullname="/home/erniep/Development/Peak/src/Seer/helloworld/function1.cpp",line="9",arch="i386:x86-64"},thread-id="1",stopped-threads="all",core="0"

            QString wpt_text    = SDS::parseFirst(text,       "wpt=",    '{', '}', false);
            QString number_text = SDS::parseFirst(wpt_text,   "number=", '"', '"', false);
            QString exp_text    = SDS::parseFirst(wpt_text,   "exp=",    '"', '"', false);
            QString value_text  = SDS::parseFirst(text,       "value=",  '{', '}', false);
            QString old_text    = SDS::parseFirst(value_text, "old=",    '"', '"', false);
            QString new_text    = SDS::parseFirst(value_text, "new=",    '"', '"', false);

            QMessageBox::information(this, "Note.", QString("Watchpoint triggered.\n\nNumber: %1\nExpression: %2\nOld value: %3\nNew value: %4").arg(number_text).arg(exp_text).arg(old_text).arg(new_text) );

        }else if (reason_text == "read-watchpoint-trigger") {
            //*stopped,reason="read-watchpoint-trigger",hw-rwpt={number="5",exp="i"},value={value="42"},frame={addr="0x0000000000400d9a",func="function1",args=[{name="text",value="\"Hello, World!\""}],file="function1.cpp",fullname="/home/erniep/Development/Peak/src/Seer/helloworld/function1.cpp",line="11",arch="i386:x86-64"},thread-id="1",stopped-threads="all",core="4"

            QString hwwpt_text  = SDS::parseFirst(text,       "hw-rwpt=", '{', '}', false);
            QString number_text = SDS::parseFirst(hwwpt_text, "number=",  '"', '"', false);
            QString exp_text    = SDS::parseFirst(hwwpt_text, "exp=",     '"', '"', false);
            QString value_text  = SDS::parseFirst(text,       "value=",   '{', '}', false);
            QString value_text2 = SDS::parseFirst(value_text, "value=",   '"', '"', false);

            QMessageBox::information(this, "Note.", QString("Watchpoint triggered.\n\nNumber: %1\nExpression: %2\nValue: %3").arg(number_text).arg(exp_text).arg(value_text2) );

        }else if (reason_text == "access-watchpoint-trigger") {
            //*stopped,reason="access-watchpoint-trigger",hw-awpt={number="3",exp="v"},value={old="1",new="11"},frame={addr="0x000000000040059a",func="bar",args=[{name="v",value="11"}],file="helloonefile.cpp",fullname="/home/erniep/Development/Peak/src/Seer/helloonefile/helloonefile.cpp",line="15",arch="i386:x86-64"},thread-id="1",stopped-threads="all",core="3"

            QString hwawpt_text = SDS::parseFirst(text,        "hw-awpt=", '{', '}', false);
            QString number_text = SDS::parseFirst(hwawpt_text, "number=",  '"', '"', false);
            QString exp_text    = SDS::parseFirst(hwawpt_text, "exp=",     '"', '"', false);
            QString value_text  = SDS::parseFirst(text,        "value=",   '{', '}', false);
            QString old_text    = SDS::parseFirst(value_text,  "old=",     '"', '"', false);
            QString new_text    = SDS::parseFirst(value_text,  "new=",     '"', '"', false);

            QMessageBox::information(this, "Note.", QString("Watchpoint triggered.\n\nNumber: %1\nExpression: %2\nOld value: %3\nNew value: %4").arg(number_text).arg(exp_text).arg(old_text).arg(new_text) );

        }else if (reason_text == "watchpoint-scope") {
            //*stopped,reason="watchpoint-scope",wpnum="5", frame={func="callee3",args=[{name="strarg", value="0x11940 \"A string argument.\""}], file="../../../devo/gdb/testsuite/gdb.mi/basics.c", fullname="/home/foo/bar/devo/gdb/testsuite/gdb.mi/basics.c",line="18"}

            QString wpnum_text = SDS::parseFirst(text, "wpnum=", '"', '"', false);

            QMessageBox::information(this, "Note.", QString("Watchpoint went out of scope. Will be deleted.\n\nNumber: %1").arg(wpnum_text) );

        }else if (reason_text == "exited-normally") {
            //*stopped,reason="exited-normally"

            QMessageBox::information(this, "Note.", "Program exited normally.");

        }else if (reason_text == "exited") {
            //*stopped,reason="exited",exit-code="01"

            QString exitcode_text = SDS::parseFirst(text, "exit-code=", '"', '"', false);

            QMessageBox::information(this, "Note.", "Program exited with code '" + exitcode_text +"'");

        }else if (reason_text == "exited-signalled") {
            //*stopped,reason="exited-signalled",signal-name="SIGSEGV",signal-meaning="Segmentation fault"

            QString signalname_text = SDS::parseFirst(text, "signal-name=", '"', '"', false);

            QMessageBox::warning(this, "Error.", "Program exited abnormally.\n\nIt encountered a '" + signalname_text + "' signal.");

        }else if (reason_text == "unknown") {

            // Don't bother showing this.
            // Attaching to a pid will generate an unknown *stopped message that is useless.

            //qDebug() << "Text=" << text;
            //QMessageBox::warning(this, "Warning.", "Program encountered an unknown problem. See the Gdb output tab for messages.");
        }

        return;
    }

    qDebug() << text;
}

void sdsMainWindow::handleRunStatusChanged (SeerRunStatusIndicator::RunStatus status) {

    if (status == SeerRunStatusIndicator::RunStatus::Idle) {
        _progressIndicator->stop();

    }else if (status == SeerRunStatusIndicator::RunStatus::Stopped) {
        _progressIndicator->stop();

    }else if (status == SeerRunStatusIndicator::RunStatus::Running) {
        _progressIndicator->start();

    }else{
        _progressIndicator->stop();
    }

}

void sdsMainWindow::handleChangeWindowTitle (QString title) {

    if (title == "") {
        setWindowTitle("Seer Debugger");
    }else{
        setWindowTitle("Seer Debugger - '" + title + "'");
    }
}

void sdsMainWindow::writeSettings() {

    QSettings settings;

    settings.beginGroup("mainwindow"); {
        settings.setValue("size", size());
    } settings.endGroup();

    //qDebug() << size();
}

void sdsMainWindow::readSettings() {

    QSettings settings;

    settings.beginGroup("mainwindow"); {
        resize(settings.value("size", QSize(1250, 1000)).toSize());
    } settings.endGroup();

    //qDebug() << size();
}

void sdsMainWindow::writeConfigSettings () {

    QSettings settings;

    settings.beginGroup("gdb"); {
        settings.setValue("program",                    ui->gdbWidget->gdbProgram());
        settings.setValue("arguments",                  ui->gdbWidget->gdbArguments());
        settings.setValue("asyncmode",                  ui->gdbWidget->gdbAsyncMode());
        settings.setValue("handleterminatingexception", ui->gdbWidget->gdbHandleTerminatingException());
    } settings.endGroup();

//    settings.beginGroup("printpoints"); {
//        settings.setValue("style",    ui->gdbWidget->dprintfStyle());
//        settings.setValue("function", ui->gdbWidget->dprintfFunction());
//        settings.setValue("channel",  ui->gdbWidget->dprintfChannel());
//    } settings.endGroup();

    settings.beginGroup("editor"); {

        settings.setValue("font", ui->gdbWidget->editorManager()->editorFont().toString());

        settings.beginGroup("highlighter"); {

            settings.setValue("enabled", ui->gdbWidget->editorManager()->editorHighlighterEnabled());

            SeerHighlighterSettings highlighter = ui->gdbWidget->editorManager()->editorHighlighterSettings();
            QStringList keys = highlighter.keys();

            for (int i=0; i<keys.size(); i++) {
                settings.beginGroup(keys[i]); {
                    QTextCharFormat f = highlighter.get(keys[i]);
                    settings.setValue("fontweight",      f.fontWeight());
                    settings.setValue("fontitalic",      f.fontItalic());
                    settings.setValue("foregroundcolor", f.foreground().color());
                    settings.setValue("backgroundcolor", f.background().color());
                } settings.endGroup();
            }

        } settings.endGroup();
    } settings.endGroup();

    settings.beginGroup("manualgdbcommands"); {
        settings.setValue("remembercount",   ui->gdbWidget->rememberManualCommandCount());
    } settings.endGroup();

    settings.beginWriteArray("shortcuts"); {

        KeySettings keysettings = keySettings();
        QStringList keys = keysettings.keys();

        for (int i=0; i<keys.size(); i++) {

            KeySetting keysetting = keysettings.get(keys[i]);

            settings.setArrayIndex(i);
            settings.setValue("action", keysetting._action);
            settings.setValue("key",  keysetting._sequence.toString());
            settings.setValue("help", keysetting._description);
        }

    } settings.endArray();

}

void sdsMainWindow::readConfigSettings () {

    QSettings settings;

    settings.beginGroup("gdb"); {
        ui->gdbWidget->setGdbProgram(settings.value("program", "gdb").toString());
        ui->gdbWidget->setGdbArguments(settings.value("arguments", "--interpreter=mi").toString());
        ui->gdbWidget->setGdbAsyncMode(settings.value("asyncmode", true).toBool());
        ui->gdbWidget->setGdbHandleTerminatingException(settings.value("handleterminatingexception", true).toBool());
    } settings.endGroup();

    settings.beginGroup("printpoints"); {
        ui->gdbWidget->setDprintfStyle(settings.value("style", "gdb").toString());
        ui->gdbWidget->setDprintfFunction(settings.value("function", "printf").toString());
        ui->gdbWidget->setDprintfChannel(settings.value("channel", "").toString());
    } settings.endGroup();

    settings.beginGroup("editor"); {

        QFont f;
        if (settings.contains("font")) {
            f.fromString(settings.value("font").toString());
        }else{
            f = QFont("Source Code Pro", 10);
        }
        ui->gdbWidget->editorManager()->setEditorFont(f);

        settings.beginGroup("highlighter"); {

            ui->gdbWidget->editorManager()->setEditorHighlighterEnabled(settings.value("enabled",true).toBool());

            SeerHighlighterSettings highlighter = ui->gdbWidget->editorManager()->editorHighlighterSettings();
            QStringList keys = highlighter.keys();

            for (int i=0; i<keys.size(); i++) {
                settings.beginGroup(keys[i]); {
                    QTextCharFormat f = highlighter.get(keys[i]);

                    if (settings.contains("fontweight")) {
                        f.setFontWeight(settings.value("fontweight").toInt());
                    }

                    if (settings.contains("fontitalic")) {
                        f.setFontItalic(settings.value("fontitalic").toBool());
                    }

                    if (settings.contains("foregroundcolor")) {
                        f.setForeground(settings.value("foregroundcolor").value<QColor>());
                    }

                    if (settings.contains("backgroundcolor")) {
                        f.setBackground(settings.value("backgroundcolor").value<QColor>());
                    }

                    highlighter.add(keys[i], f);
                } settings.endGroup();
            }

            ui->gdbWidget->editorManager()->setEditorHighlighterSettings(highlighter);

        } settings.endGroup();
    } settings.endGroup();

    settings.beginGroup("manualgdbcommands"); {
        ui->gdbWidget->setRememberManualCommandCount(settings.value("remembercount", 10).toInt());
    } settings.endGroup();

    int size = settings.beginReadArray("shortcuts"); {

        KeySettings keysettings = keySettings(); // Start with defaults. The add() will overwrite.

        for (int i = 0; i < size; ++i) {

            settings.setArrayIndex(i);

            QString      name = settings.value("action").toString();
            QKeySequence key  = QKeySequence::fromString(settings.value("key").toString());
            QString      help = settings.value("help").toString();

            keysettings.add(name, KeySetting(name, key, help));
        }

        setKeySettings(keysettings);

    } settings.endArray();
}

void sdsMainWindow::resizeEvent (QResizeEvent* event) {

    // Write window settings.
    writeSettings();

    QMainWindow::resizeEvent(event);
}

void sdsMainWindow::closeEvent (QCloseEvent* event) {

    event->accept();

    QCoreApplication::exit(0);
}

void sdsMainWindow::setKeySettings (const KeySettings& settings) {

    _keySettings = settings;

    refreshShortCuts();
}

const KeySettings sdsMainWindow::keySettings () const {

    return _keySettings;
}

void sdsMainWindow::refreshShortCuts () {

    if (_keySettings.has("Run")) {

        KeySetting setting = _keySettings.get("Run");

        //_runKey->setKey(setting._sequence);
        ui->actionGdbRun->setToolTip(setting._description);
        ui->actionGdbRun->setText(setting._action + " (" + setting._sequence.toString() + ")");
        ui->actionControlRun->setShortcut(setting._sequence);
    }

    if (_keySettings.has("Start")) {

        KeySetting setting = _keySettings.get("Start");

        //_startKey->setKey(setting._sequence);
        ui->actionGdbStart->setToolTip(setting._description);
        ui->actionGdbStart->setText(setting._action + " (" + setting._sequence.toString() + ")");
        ui->actionControlStart->setShortcut(setting._sequence);
    }

    if (_keySettings.has("Next")) {

        KeySetting setting = _keySettings.get("Next");

        //_nextKey->setKey(setting._sequence);
        ui->actionGdbNext->setToolTip(setting._description);
        ui->actionGdbNext->setText(setting._action + " (" + setting._sequence.toString() + ")");
        ui->actionControlNext->setShortcut(setting._sequence);
    }

    if (_keySettings.has("Step")) {

        KeySetting setting = _keySettings.get("Step");

        //_stepKey->setKey(setting._sequence);
        ui->actionGdbStep->setToolTip(setting._description);
        ui->actionGdbStep->setText(setting._action + " (" + setting._sequence.toString() + ")");
        ui->actionControlStep->setShortcut(setting._sequence);
    }

    if (_keySettings.has("Finish")) {

        KeySetting setting = _keySettings.get("Finish");

        //_finishKey->setKey(setting._sequence);
        ui->actionGdbFinish->setToolTip(setting._description);
        ui->actionGdbFinish->setText(setting._action + " (" + setting._sequence.toString() + ")");
        ui->actionControlFinish->setShortcut(setting._sequence);
    }

    if (_keySettings.has("Continue")) {

        KeySetting setting = _keySettings.get("Continue");

        //_continueKey->setKey(setting._sequence);
        ui->actionGdbContinue->setToolTip(setting._description);
        ui->actionGdbContinue->setText(setting._action + " (" + setting._sequence.toString() + ")");
        ui->actionControlContinue->setShortcut(setting._sequence);
    }

    if (_keySettings.has("Debug")) {

        KeySetting setting = _keySettings.get("Debug");

        ui->actionFileDebug->setShortcut(setting._sequence);
    }

    if (_keySettings.has("Arguments")) {

        KeySetting setting = _keySettings.get("Arguments");

        ui->actionFileArguments->setShortcut(setting._sequence);
    }

    if (_keySettings.has("Quit")) {

        KeySetting setting = _keySettings.get("Quit");

        ui->actionFileQuit->setShortcut(setting._sequence);
    }

    ui->gdbWidget->editorManager()->setEditorKeySettings(keySettings());
}



