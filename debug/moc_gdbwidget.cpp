/****************************************************************************
** Meta object code from reading C++ file 'gdbwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../GdbCtrl/gdbwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gdbwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GdbWidget_t {
    QByteArrayData data[124];
    char stringdata0[2610];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GdbWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GdbWidget_t qt_meta_stringdata_GdbWidget = {
    {
QT_MOC_LITERAL(0, 0, 9), // "GdbWidget"
QT_MOC_LITERAL(1, 10, 20), // "stoppingPointReached"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 17), // "changeWindowTitle"
QT_MOC_LITERAL(4, 50, 5), // "title"
QT_MOC_LITERAL(5, 56, 10), // "handleText"
QT_MOC_LITERAL(6, 67, 4), // "text"
QT_MOC_LITERAL(7, 72, 26), // "handleManualCommandExecute"
QT_MOC_LITERAL(8, 99, 16), // "handleGdbCommand"
QT_MOC_LITERAL(9, 116, 7), // "command"
QT_MOC_LITERAL(10, 124, 13), // "handleGdbExit"
QT_MOC_LITERAL(11, 138, 22), // "handleGdbRunExecutable"
QT_MOC_LITERAL(12, 161, 24), // "handleGdbStartExecutable"
QT_MOC_LITERAL(13, 186, 25), // "handleGdbAttachExecutable"
QT_MOC_LITERAL(14, 212, 26), // "handleGdbConnectExecutable"
QT_MOC_LITERAL(15, 239, 27), // "handleGdbCoreFileExecutable"
QT_MOC_LITERAL(16, 267, 17), // "handleGdbShutdown"
QT_MOC_LITERAL(17, 285, 18), // "handleGdbRunToLine"
QT_MOC_LITERAL(18, 304, 8), // "fullname"
QT_MOC_LITERAL(19, 313, 6), // "lineno"
QT_MOC_LITERAL(20, 320, 13), // "handleGdbNext"
QT_MOC_LITERAL(21, 334, 13), // "handleGdbStep"
QT_MOC_LITERAL(22, 348, 15), // "handleGdbFinish"
QT_MOC_LITERAL(23, 364, 17), // "handleGdbContinue"
QT_MOC_LITERAL(24, 382, 18), // "handleGdbInterrupt"
QT_MOC_LITERAL(25, 401, 24), // "handleGdbInterruptSIGINT"
QT_MOC_LITERAL(26, 426, 25), // "handleGdbInterruptSIGKILL"
QT_MOC_LITERAL(27, 452, 24), // "handleGdbInterruptSIGFPE"
QT_MOC_LITERAL(28, 477, 25), // "handleGdbInterruptSIGSEGV"
QT_MOC_LITERAL(29, 503, 25), // "handleGdbInterruptSIGUSR1"
QT_MOC_LITERAL(30, 529, 25), // "handleGdbInterruptSIGUSR2"
QT_MOC_LITERAL(31, 555, 26), // "handleGdbExecutableSources"
QT_MOC_LITERAL(32, 582, 28), // "handleGdbExecutableFunctions"
QT_MOC_LITERAL(33, 611, 2), // "id"
QT_MOC_LITERAL(34, 614, 13), // "functionRegex"
QT_MOC_LITERAL(35, 628, 24), // "handleGdbExecutableTypes"
QT_MOC_LITERAL(36, 653, 9), // "typeRegex"
QT_MOC_LITERAL(37, 663, 28), // "handleGdbExecutableVariables"
QT_MOC_LITERAL(38, 692, 17), // "variableNameRegex"
QT_MOC_LITERAL(39, 710, 17), // "variableTypeRegex"
QT_MOC_LITERAL(40, 728, 28), // "handleGdbExecutableLibraries"
QT_MOC_LITERAL(41, 757, 23), // "handleGdbExecutableName"
QT_MOC_LITERAL(42, 781, 28), // "handleGdbExecutableArguments"
QT_MOC_LITERAL(43, 810, 35), // "handleGdbExecutableWorkingDir..."
QT_MOC_LITERAL(44, 846, 34), // "handleGdbExecutableLoadBreakp..."
QT_MOC_LITERAL(45, 881, 24), // "handleGdbStackListFrames"
QT_MOC_LITERAL(46, 906, 25), // "handleGdbStackSelectFrame"
QT_MOC_LITERAL(47, 932, 7), // "frameno"
QT_MOC_LITERAL(48, 940, 24), // "handleGdbStackListLocals"
QT_MOC_LITERAL(49, 965, 27), // "handleGdbStackListArguments"
QT_MOC_LITERAL(50, 993, 25), // "handleGdbGenericpointList"
QT_MOC_LITERAL(51, 1019, 25), // "handleGdbBreakpointDelete"
QT_MOC_LITERAL(52, 1045, 11), // "breakpoints"
QT_MOC_LITERAL(53, 1057, 25), // "handleGdbBreakpointEnable"
QT_MOC_LITERAL(54, 1083, 26), // "handleGdbBreakpointDisable"
QT_MOC_LITERAL(55, 1110, 25), // "handleGdbBreakpointInsert"
QT_MOC_LITERAL(56, 1136, 10), // "breakpoint"
QT_MOC_LITERAL(57, 1147, 25), // "handleGdbBreakpointReload"
QT_MOC_LITERAL(58, 1173, 15), // "breakpointsText"
QT_MOC_LITERAL(59, 1189, 25), // "handleGdbWatchpointReload"
QT_MOC_LITERAL(60, 1215, 15), // "watchpointsText"
QT_MOC_LITERAL(61, 1231, 25), // "handleGdbCatchpointReload"
QT_MOC_LITERAL(62, 1257, 15), // "catchpointsText"
QT_MOC_LITERAL(63, 1273, 25), // "handleGdbWatchpointDelete"
QT_MOC_LITERAL(64, 1299, 11), // "watchpoints"
QT_MOC_LITERAL(65, 1311, 25), // "handleGdbWatchpointEnable"
QT_MOC_LITERAL(66, 1337, 26), // "handleGdbWatchpointDisable"
QT_MOC_LITERAL(67, 1364, 25), // "handleGdbWatchpointInsert"
QT_MOC_LITERAL(68, 1390, 10), // "watchpoint"
QT_MOC_LITERAL(69, 1401, 25), // "handleGdbCatchpointDelete"
QT_MOC_LITERAL(70, 1427, 11), // "catchpoints"
QT_MOC_LITERAL(71, 1439, 25), // "handleGdbCatchpointEnable"
QT_MOC_LITERAL(72, 1465, 26), // "handleGdbCatchpointDisable"
QT_MOC_LITERAL(73, 1492, 25), // "handleGdbCatchpointInsert"
QT_MOC_LITERAL(74, 1518, 10), // "catchpoint"
QT_MOC_LITERAL(75, 1529, 25), // "handleGdbPrintpointDelete"
QT_MOC_LITERAL(76, 1555, 25), // "handleGdbPrintpointEnable"
QT_MOC_LITERAL(77, 1581, 26), // "handleGdbPrintpointDisable"
QT_MOC_LITERAL(78, 1608, 25), // "handleGdbPrintpointInsert"
QT_MOC_LITERAL(79, 1634, 10), // "printpoint"
QT_MOC_LITERAL(80, 1645, 22), // "handleGdbThreadListIds"
QT_MOC_LITERAL(81, 1668, 25), // "handleGdbThreadListFrames"
QT_MOC_LITERAL(82, 1694, 23), // "handleGdbThreadSelectId"
QT_MOC_LITERAL(83, 1718, 8), // "threadid"
QT_MOC_LITERAL(84, 1727, 26), // "handleGdbRegisterListNames"
QT_MOC_LITERAL(85, 1754, 27), // "handleGdbRegisterListValues"
QT_MOC_LITERAL(86, 1782, 31), // "handleGdbDataEvaluateExpression"
QT_MOC_LITERAL(87, 1814, 12), // "expressionid"
QT_MOC_LITERAL(88, 1827, 10), // "expression"
QT_MOC_LITERAL(89, 1838, 23), // "handleGdbDataListValues"
QT_MOC_LITERAL(90, 1862, 28), // "handleGdbDataListExpressions"
QT_MOC_LITERAL(91, 1891, 26), // "handleGdbDataAddExpression"
QT_MOC_LITERAL(92, 1918, 30), // "handleGdbDataDeleteExpressions"
QT_MOC_LITERAL(93, 1949, 13), // "expressionids"
QT_MOC_LITERAL(94, 1963, 28), // "handleGdbMemoryAddExpression"
QT_MOC_LITERAL(95, 1992, 27), // "handleGdbArrayAddExpression"
QT_MOC_LITERAL(96, 2020, 33), // "handleGdbMemoryEvaluateExpres..."
QT_MOC_LITERAL(97, 2054, 7), // "address"
QT_MOC_LITERAL(98, 2062, 5), // "count"
QT_MOC_LITERAL(99, 2068, 32), // "handleGdbArrayEvaluateExpression"
QT_MOC_LITERAL(100, 2101, 25), // "handleGdbMemoryVisualizer"
QT_MOC_LITERAL(101, 2127, 24), // "handleGdbArrayVisualizer"
QT_MOC_LITERAL(102, 2152, 19), // "handleSplitterMoved"
QT_MOC_LITERAL(103, 2172, 3), // "pos"
QT_MOC_LITERAL(104, 2176, 5), // "index"
QT_MOC_LITERAL(105, 2182, 26), // "handleManualCommandChanged"
QT_MOC_LITERAL(106, 2209, 21), // "handleLogOuputChanged"
QT_MOC_LITERAL(107, 2231, 24), // "handleGdbLoadBreakpoints"
QT_MOC_LITERAL(108, 2256, 24), // "handleGdbSaveBreakpoints"
QT_MOC_LITERAL(109, 2281, 22), // "handleGdbArrVisualizer"
QT_MOC_LITERAL(110, 2304, 22), // "handleGdbStrVisualizer"
QT_MOC_LITERAL(111, 2327, 23), // "handleGdbSoloVisualizer"
QT_MOC_LITERAL(112, 2351, 25), // "handleGdbDoubleVisualizer"
QT_MOC_LITERAL(113, 2377, 25), // "handleGdbArrAddExpression"
QT_MOC_LITERAL(114, 2403, 25), // "handleGdbArrStrExpression"
QT_MOC_LITERAL(115, 2429, 26), // "handleGdbSoloAddExpression"
QT_MOC_LITERAL(116, 2456, 28), // "handleGdbDoubleAddExpression"
QT_MOC_LITERAL(117, 2485, 24), // "handleGdbProcessFinished"
QT_MOC_LITERAL(118, 2510, 8), // "exitCode"
QT_MOC_LITERAL(119, 2519, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(120, 2540, 10), // "exitStatus"
QT_MOC_LITERAL(121, 2551, 23), // "handleGdbProcessErrored"
QT_MOC_LITERAL(122, 2575, 22), // "QProcess::ProcessError"
QT_MOC_LITERAL(123, 2598, 11) // "errorStatus"

    },
    "GdbWidget\0stoppingPointReached\0\0"
    "changeWindowTitle\0title\0handleText\0"
    "text\0handleManualCommandExecute\0"
    "handleGdbCommand\0command\0handleGdbExit\0"
    "handleGdbRunExecutable\0handleGdbStartExecutable\0"
    "handleGdbAttachExecutable\0"
    "handleGdbConnectExecutable\0"
    "handleGdbCoreFileExecutable\0"
    "handleGdbShutdown\0handleGdbRunToLine\0"
    "fullname\0lineno\0handleGdbNext\0"
    "handleGdbStep\0handleGdbFinish\0"
    "handleGdbContinue\0handleGdbInterrupt\0"
    "handleGdbInterruptSIGINT\0"
    "handleGdbInterruptSIGKILL\0"
    "handleGdbInterruptSIGFPE\0"
    "handleGdbInterruptSIGSEGV\0"
    "handleGdbInterruptSIGUSR1\0"
    "handleGdbInterruptSIGUSR2\0"
    "handleGdbExecutableSources\0"
    "handleGdbExecutableFunctions\0id\0"
    "functionRegex\0handleGdbExecutableTypes\0"
    "typeRegex\0handleGdbExecutableVariables\0"
    "variableNameRegex\0variableTypeRegex\0"
    "handleGdbExecutableLibraries\0"
    "handleGdbExecutableName\0"
    "handleGdbExecutableArguments\0"
    "handleGdbExecutableWorkingDirectory\0"
    "handleGdbExecutableLoadBreakpoints\0"
    "handleGdbStackListFrames\0"
    "handleGdbStackSelectFrame\0frameno\0"
    "handleGdbStackListLocals\0"
    "handleGdbStackListArguments\0"
    "handleGdbGenericpointList\0"
    "handleGdbBreakpointDelete\0breakpoints\0"
    "handleGdbBreakpointEnable\0"
    "handleGdbBreakpointDisable\0"
    "handleGdbBreakpointInsert\0breakpoint\0"
    "handleGdbBreakpointReload\0breakpointsText\0"
    "handleGdbWatchpointReload\0watchpointsText\0"
    "handleGdbCatchpointReload\0catchpointsText\0"
    "handleGdbWatchpointDelete\0watchpoints\0"
    "handleGdbWatchpointEnable\0"
    "handleGdbWatchpointDisable\0"
    "handleGdbWatchpointInsert\0watchpoint\0"
    "handleGdbCatchpointDelete\0catchpoints\0"
    "handleGdbCatchpointEnable\0"
    "handleGdbCatchpointDisable\0"
    "handleGdbCatchpointInsert\0catchpoint\0"
    "handleGdbPrintpointDelete\0"
    "handleGdbPrintpointEnable\0"
    "handleGdbPrintpointDisable\0"
    "handleGdbPrintpointInsert\0printpoint\0"
    "handleGdbThreadListIds\0handleGdbThreadListFrames\0"
    "handleGdbThreadSelectId\0threadid\0"
    "handleGdbRegisterListNames\0"
    "handleGdbRegisterListValues\0"
    "handleGdbDataEvaluateExpression\0"
    "expressionid\0expression\0handleGdbDataListValues\0"
    "handleGdbDataListExpressions\0"
    "handleGdbDataAddExpression\0"
    "handleGdbDataDeleteExpressions\0"
    "expressionids\0handleGdbMemoryAddExpression\0"
    "handleGdbArrayAddExpression\0"
    "handleGdbMemoryEvaluateExpression\0"
    "address\0count\0handleGdbArrayEvaluateExpression\0"
    "handleGdbMemoryVisualizer\0"
    "handleGdbArrayVisualizer\0handleSplitterMoved\0"
    "pos\0index\0handleManualCommandChanged\0"
    "handleLogOuputChanged\0handleGdbLoadBreakpoints\0"
    "handleGdbSaveBreakpoints\0"
    "handleGdbArrVisualizer\0handleGdbStrVisualizer\0"
    "handleGdbSoloVisualizer\0"
    "handleGdbDoubleVisualizer\0"
    "handleGdbArrAddExpression\0"
    "handleGdbArrStrExpression\0"
    "handleGdbSoloAddExpression\0"
    "handleGdbDoubleAddExpression\0"
    "handleGdbProcessFinished\0exitCode\0"
    "QProcess::ExitStatus\0exitStatus\0"
    "handleGdbProcessErrored\0QProcess::ProcessError\0"
    "errorStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GdbWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      88,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  454,    2, 0x06 /* Public */,
       3,    1,  455,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,  458,    2, 0x0a /* Public */,
       7,    0,  461,    2, 0x0a /* Public */,
       8,    1,  462,    2, 0x0a /* Public */,
      10,    0,  465,    2, 0x0a /* Public */,
      11,    0,  466,    2, 0x0a /* Public */,
      12,    0,  467,    2, 0x0a /* Public */,
      13,    0,  468,    2, 0x0a /* Public */,
      14,    0,  469,    2, 0x0a /* Public */,
      15,    0,  470,    2, 0x0a /* Public */,
      16,    0,  471,    2, 0x0a /* Public */,
      17,    2,  472,    2, 0x0a /* Public */,
      20,    0,  477,    2, 0x0a /* Public */,
      21,    0,  478,    2, 0x0a /* Public */,
      22,    0,  479,    2, 0x0a /* Public */,
      23,    0,  480,    2, 0x0a /* Public */,
      24,    0,  481,    2, 0x0a /* Public */,
      25,    0,  482,    2, 0x0a /* Public */,
      26,    0,  483,    2, 0x0a /* Public */,
      27,    0,  484,    2, 0x0a /* Public */,
      28,    0,  485,    2, 0x0a /* Public */,
      29,    0,  486,    2, 0x0a /* Public */,
      30,    0,  487,    2, 0x0a /* Public */,
      31,    0,  488,    2, 0x0a /* Public */,
      32,    2,  489,    2, 0x0a /* Public */,
      35,    2,  494,    2, 0x0a /* Public */,
      37,    3,  499,    2, 0x0a /* Public */,
      40,    0,  506,    2, 0x0a /* Public */,
      41,    0,  507,    2, 0x0a /* Public */,
      42,    0,  508,    2, 0x0a /* Public */,
      43,    0,  509,    2, 0x0a /* Public */,
      44,    0,  510,    2, 0x0a /* Public */,
      45,    0,  511,    2, 0x0a /* Public */,
      46,    1,  512,    2, 0x0a /* Public */,
      48,    0,  515,    2, 0x0a /* Public */,
      49,    0,  516,    2, 0x0a /* Public */,
      50,    0,  517,    2, 0x0a /* Public */,
      51,    1,  518,    2, 0x0a /* Public */,
      53,    1,  521,    2, 0x0a /* Public */,
      54,    1,  524,    2, 0x0a /* Public */,
      55,    1,  527,    2, 0x0a /* Public */,
      57,    1,  530,    2, 0x0a /* Public */,
      59,    1,  533,    2, 0x0a /* Public */,
      61,    1,  536,    2, 0x0a /* Public */,
      63,    1,  539,    2, 0x0a /* Public */,
      65,    1,  542,    2, 0x0a /* Public */,
      66,    1,  545,    2, 0x0a /* Public */,
      67,    1,  548,    2, 0x0a /* Public */,
      69,    1,  551,    2, 0x0a /* Public */,
      71,    1,  554,    2, 0x0a /* Public */,
      72,    1,  557,    2, 0x0a /* Public */,
      73,    1,  560,    2, 0x0a /* Public */,
      75,    1,  563,    2, 0x0a /* Public */,
      76,    1,  566,    2, 0x0a /* Public */,
      77,    1,  569,    2, 0x0a /* Public */,
      78,    1,  572,    2, 0x0a /* Public */,
      80,    0,  575,    2, 0x0a /* Public */,
      81,    0,  576,    2, 0x0a /* Public */,
      82,    1,  577,    2, 0x0a /* Public */,
      84,    0,  580,    2, 0x0a /* Public */,
      85,    0,  581,    2, 0x0a /* Public */,
      86,    2,  582,    2, 0x0a /* Public */,
      89,    0,  587,    2, 0x0a /* Public */,
      90,    0,  588,    2, 0x0a /* Public */,
      91,    1,  589,    2, 0x0a /* Public */,
      92,    1,  592,    2, 0x0a /* Public */,
      94,    1,  595,    2, 0x0a /* Public */,
      95,    1,  598,    2, 0x0a /* Public */,
      96,    3,  601,    2, 0x0a /* Public */,
      99,    3,  608,    2, 0x0a /* Public */,
     100,    0,  615,    2, 0x0a /* Public */,
     101,    0,  616,    2, 0x0a /* Public */,
     102,    2,  617,    2, 0x0a /* Public */,
     105,    0,  622,    2, 0x0a /* Public */,
     106,    0,  623,    2, 0x0a /* Public */,
     107,    0,  624,    2, 0x0a /* Public */,
     108,    0,  625,    2, 0x0a /* Public */,
     109,    0,  626,    2, 0x0a /* Public */,
     110,    0,  627,    2, 0x0a /* Public */,
     111,    0,  628,    2, 0x0a /* Public */,
     112,    0,  629,    2, 0x0a /* Public */,
     113,    1,  630,    2, 0x0a /* Public */,
     114,    1,  633,    2, 0x0a /* Public */,
     115,    1,  636,    2, 0x0a /* Public */,
     116,    1,  639,    2, 0x0a /* Public */,
     117,    2,  642,    2, 0x0a /* Public */,
     121,    1,  647,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   18,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   33,   34,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   33,   36,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,   33,   38,   39,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   47,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   52,
    QMetaType::Void, QMetaType::QString,   52,
    QMetaType::Void, QMetaType::QString,   52,
    QMetaType::Void, QMetaType::QString,   56,
    QMetaType::Void, QMetaType::QStringList,   58,
    QMetaType::Void, QMetaType::QStringList,   60,
    QMetaType::Void, QMetaType::QStringList,   62,
    QMetaType::Void, QMetaType::QString,   64,
    QMetaType::Void, QMetaType::QString,   64,
    QMetaType::Void, QMetaType::QString,   64,
    QMetaType::Void, QMetaType::QString,   68,
    QMetaType::Void, QMetaType::QString,   70,
    QMetaType::Void, QMetaType::QString,   70,
    QMetaType::Void, QMetaType::QString,   70,
    QMetaType::Void, QMetaType::QString,   74,
    QMetaType::Void, QMetaType::QString,   52,
    QMetaType::Void, QMetaType::QString,   52,
    QMetaType::Void, QMetaType::QString,   52,
    QMetaType::Void, QMetaType::QString,   79,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   83,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   87,   88,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   88,
    QMetaType::Void, QMetaType::QString,   93,
    QMetaType::Void, QMetaType::QString,   88,
    QMetaType::Void, QMetaType::QString,   88,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Int,   87,   97,   98,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Int,   87,   97,   98,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,  103,  104,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   88,
    QMetaType::Void, QMetaType::QString,   88,
    QMetaType::Void, QMetaType::QString,   88,
    QMetaType::Void, QMetaType::QString,   88,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 119,  118,  120,
    QMetaType::Void, 0x80000000 | 122,  123,

       0        // eod
};

void GdbWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GdbWidget *_t = static_cast<GdbWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stoppingPointReached(); break;
        case 1: _t->changeWindowTitle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->handleText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->handleManualCommandExecute(); break;
        case 4: _t->handleGdbCommand((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->handleGdbExit(); break;
        case 6: _t->handleGdbRunExecutable(); break;
        case 7: _t->handleGdbStartExecutable(); break;
        case 8: _t->handleGdbAttachExecutable(); break;
        case 9: _t->handleGdbConnectExecutable(); break;
        case 10: _t->handleGdbCoreFileExecutable(); break;
        case 11: _t->handleGdbShutdown(); break;
        case 12: _t->handleGdbRunToLine((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->handleGdbNext(); break;
        case 14: _t->handleGdbStep(); break;
        case 15: _t->handleGdbFinish(); break;
        case 16: _t->handleGdbContinue(); break;
        case 17: _t->handleGdbInterrupt(); break;
        case 18: _t->handleGdbInterruptSIGINT(); break;
        case 19: _t->handleGdbInterruptSIGKILL(); break;
        case 20: _t->handleGdbInterruptSIGFPE(); break;
        case 21: _t->handleGdbInterruptSIGSEGV(); break;
        case 22: _t->handleGdbInterruptSIGUSR1(); break;
        case 23: _t->handleGdbInterruptSIGUSR2(); break;
        case 24: _t->handleGdbExecutableSources(); break;
        case 25: _t->handleGdbExecutableFunctions((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 26: _t->handleGdbExecutableTypes((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 27: _t->handleGdbExecutableVariables((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 28: _t->handleGdbExecutableLibraries(); break;
        case 29: _t->handleGdbExecutableName(); break;
        case 30: _t->handleGdbExecutableArguments(); break;
        case 31: _t->handleGdbExecutableWorkingDirectory(); break;
        case 32: _t->handleGdbExecutableLoadBreakpoints(); break;
        case 33: _t->handleGdbStackListFrames(); break;
        case 34: _t->handleGdbStackSelectFrame((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->handleGdbStackListLocals(); break;
        case 36: _t->handleGdbStackListArguments(); break;
        case 37: _t->handleGdbGenericpointList(); break;
        case 38: _t->handleGdbBreakpointDelete((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 39: _t->handleGdbBreakpointEnable((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 40: _t->handleGdbBreakpointDisable((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 41: _t->handleGdbBreakpointInsert((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 42: _t->handleGdbBreakpointReload((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 43: _t->handleGdbWatchpointReload((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 44: _t->handleGdbCatchpointReload((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 45: _t->handleGdbWatchpointDelete((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 46: _t->handleGdbWatchpointEnable((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 47: _t->handleGdbWatchpointDisable((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 48: _t->handleGdbWatchpointInsert((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 49: _t->handleGdbCatchpointDelete((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 50: _t->handleGdbCatchpointEnable((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 51: _t->handleGdbCatchpointDisable((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 52: _t->handleGdbCatchpointInsert((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 53: _t->handleGdbPrintpointDelete((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 54: _t->handleGdbPrintpointEnable((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 55: _t->handleGdbPrintpointDisable((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 56: _t->handleGdbPrintpointInsert((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 57: _t->handleGdbThreadListIds(); break;
        case 58: _t->handleGdbThreadListFrames(); break;
        case 59: _t->handleGdbThreadSelectId((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 60: _t->handleGdbRegisterListNames(); break;
        case 61: _t->handleGdbRegisterListValues(); break;
        case 62: _t->handleGdbDataEvaluateExpression((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 63: _t->handleGdbDataListValues(); break;
        case 64: _t->handleGdbDataListExpressions(); break;
        case 65: _t->handleGdbDataAddExpression((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 66: _t->handleGdbDataDeleteExpressions((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 67: _t->handleGdbMemoryAddExpression((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 68: _t->handleGdbArrayAddExpression((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 69: _t->handleGdbMemoryEvaluateExpression((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 70: _t->handleGdbArrayEvaluateExpression((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 71: _t->handleGdbMemoryVisualizer(); break;
        case 72: _t->handleGdbArrayVisualizer(); break;
        case 73: _t->handleSplitterMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 74: _t->handleManualCommandChanged(); break;
        case 75: _t->handleLogOuputChanged(); break;
        case 76: _t->handleGdbLoadBreakpoints(); break;
        case 77: _t->handleGdbSaveBreakpoints(); break;
        case 78: _t->handleGdbArrVisualizer(); break;
        case 79: _t->handleGdbStrVisualizer(); break;
        case 80: _t->handleGdbSoloVisualizer(); break;
        case 81: _t->handleGdbDoubleVisualizer(); break;
        case 82: _t->handleGdbArrAddExpression((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 83: _t->handleGdbArrStrExpression((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 84: _t->handleGdbSoloAddExpression((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 85: _t->handleGdbDoubleAddExpression((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 86: _t->handleGdbProcessFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 87: _t->handleGdbProcessErrored((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GdbWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GdbWidget::stoppingPointReached)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GdbWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GdbWidget::changeWindowTitle)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GdbWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_GdbWidget.data,
    qt_meta_data_GdbWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GdbWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GdbWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GdbWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GdbWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 88)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 88;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 88)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 88;
    }
    return _id;
}

// SIGNAL 0
void GdbWidget::stoppingPointReached()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void GdbWidget::changeWindowTitle(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
