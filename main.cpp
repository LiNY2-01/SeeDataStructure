#include "sdsmainwindow.h"
#include "util.h"
#include <QtWidgets/QApplication>
#include <QtGui/QIcon>
#include <QtCore/QCommandLineParser>
#include <QtCore/QCommandLineOption>
#include <QtCore/QString>
#include <QtCore/QDebug>
#include <QLoggingCategory>
#include <QApplication>

int main(int argc, char *argv[])
{

    QLoggingCategory::setFilterRules(".debug=false\n"
                                     "*.info=false\n"
                                     "*.warning=false\n"
                                     ".critical=true");
    qSetMessagePattern("[%{time hh:mm:ss}][%{function}:%{line}][%{category}] %{message}");



    QApplication a(argc, argv);
    QCoreApplication::setApplicationName("SeeDataStructure");
    QCoreApplication::setOrganizationName("SeeDataStructure");
    QCoreApplication::setApplicationVersion(SDS::version());

    QCommandLineParser parser;
    parser.setApplicationDescription("\n让我看看你的代码！");
    parser.setOptionsAfterPositionalArgumentsMode(QCommandLineParser::ParseAsPositionalArguments); // Treat all arguments after the executable name as positional arguments too.
    parser.setSingleDashWordOptionMode(QCommandLineParser::ParseAsLongOptions); // Treat all arguments long options.
    parser.addHelpOption();
    parser.addVersionOption();

    // Run or start options.
    QCommandLineOption runOption(QStringList()<<"r"<<"run", QCoreApplication::translate("main", "Load the executable and run it."));
    parser.addOption(runOption);

    QCommandLineOption startOption(QStringList()<<"s"<<"start", QCoreApplication::translate("main", "Load the executable, break in main(), and run it."));
    parser.addOption(startOption);

    QCommandLineOption breakpointsOption(QStringList()<<"b"<<"breakpoints", QCoreApplication::translate("main", "Optionally load a previously saved breakpoints file. For --run or --start"), "filename");
    parser.addOption(breakpointsOption);

    QCommandLineOption attachOption(QStringList()<<"attach", QCoreApplication::translate("main", "Attach to a locally running process."), "pid");
    parser.addOption(attachOption);

    QCommandLineOption connectOption(QStringList()<<"connect", QCoreApplication::translate("main", "Connect to a running process with gdbserver (local or remote). Manually start gdbserver first.\nPossible connection mediums are:\n    host:port\n    /dev/<serialdev>"), "medium");
    parser.addOption(connectOption);

    QCommandLineOption corefileOption(QStringList()<<"core", QCoreApplication::translate("main", "Load a corefile."), "corefile");
    parser.addOption(corefileOption);


    // A positional argument for executable name.
    // All other arguments after that are treated as positional arguments for the executable.
    parser.addPositionalArgument("executable", QCoreApplication::translate("main", "The executable to debug. Needed for all run modes."));
    parser.addPositionalArgument("arguments",  QCoreApplication::translate("main", "Arguments for the executable. Needed for --run and --start."), "[arguments ...]");

    // Process the arguments.
    parser.process(a);

    // Get the positional arguments. (The ones at the end of the line - executable name and its arguments.
    QStringList positionalArguments = parser.positionalArguments();

    // Get the executable name from the arguments;
    QString executableName;

    if (positionalArguments.size() > 0) {
        executableName = positionalArguments.takeFirst();
    }

    // Get launch mode.
    QString launchMode    = "none";
    int     executablePid = -1;
    QString executableHostPort;
    QString executableBreakpointsFilename;
    QString executableCoreFilename;

    if (parser.isSet(runOption)) {
        launchMode = "run";
    }

    if (parser.isSet(startOption)) {
        launchMode = "start";
    }

    if (parser.isSet(breakpointsOption)) {
        executableBreakpointsFilename = parser.value(breakpointsOption);
    }

    if (parser.isSet(attachOption)) {
        launchMode = "attach";

        QString pid = parser.value(attachOption);

        executablePid = pid.toInt();
    }

    if (parser.isSet(corefileOption)) {
        launchMode = "corefile";

        executableCoreFilename = parser.value(corefileOption);
    }

    if (parser.isSet(connectOption)) {
        launchMode = "connect";

        executableHostPort = parser.value(connectOption);
    }

    QFile file(":/resources/style.qss");
    if(file.open(QFile::ReadOnly)){
        QString style = QString::fromLatin1(file.readAll());
        a.setStyleSheet(style);
        file.close();
        }


    sdsMainWindow w;
    w.setWindowIcon(QIcon(":/seedatastructure/resources/seer_64x64.png"));
    w.setExecutableName(executableName);
    w.setExecutableArguments(positionalArguments);
    w.setExecutableBreakpointsFilename(executableBreakpointsFilename);
    w.setExecutablePid(executablePid);
    w.setExecutableHostPort(executableHostPort);
    w.setExecutableCoreFilename(executableCoreFilename);
    w.launchExecutable(launchMode);
    w.move(0,0);
    w.show();
    w.activateWindow();

    return a.exec();
}
