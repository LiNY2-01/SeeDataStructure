QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport
greaterThan(QT_MAJOR_VERSION, 4): QT += charts
CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
TRANSLATIONS = \
            language.zh_CN.ts
SOURCES += \
    BaseDebug/LogWidget.cpp \
    BaseDebug/SeerBreakpointCreateDialog.cpp \
    BaseDebug/SeerBreakpointsBrowserWidget.cpp \
    BaseDebug/SeerBreakpointsOptionsBarWidget.cpp \
    BaseDebug/SeerCatchpointCreateDialog.cpp \
    BaseDebug/SeerCatchpointsBrowserWidget.cpp \
    BaseDebug/SeerDebugDialog.cpp \
    BaseDebug/SeerFunctionBrowserWidget.cpp \
    BaseDebug/SeerLibraryBrowserWidget.cpp \
    BaseDebug/SeerSourceBrowserWidget.cpp \
    BaseDebug/SeerSourceLibraryManagerWidget.cpp \
    BaseDebug/SeerTildeLogWidget.cpp \
    BaseDebug/SeerWatchpointCreateDialog.cpp \
    BaseDebug/SeerWatchpointsBrowserWidget.cpp \
    Editor/SeerCloseSourceDialog.cpp \
    Editor/SeerCppSourceHighlighter.cpp \
    Editor/SeerEditorManagerWidget.cpp \
    Editor/SeerEditorOptionsBarWidget.cpp \
    Editor/SeerEditorWidget.cpp \
    Editor/SeerEditorWidgetBreakPointArea.cpp \
    Editor/SeerEditorWidgetLineNumberArea.cpp \
    Editor/SeerEditorWidgetMiniMapArea.cpp \
    Editor/SeerEditorWidgetSourceArea.cpp \
    Editor/SeerHighlighterSettings.cpp \
    Editor/SeerTypeBrowserWidget.cpp \
    GdbCtrl/gdbconfigpage.cpp \
    GdbCtrl/gdblogwidget.cpp \
    GdbCtrl/gdbmonitor.cpp \
    GdbCtrl/gdbwidget.cpp \
    SeerArgumentsDialog.cpp \
    SeerRunStatusIndicator.cpp \
    SeerSlashProcDialog.cpp \
    Stack/SeerStackArgumentsBrowserWidget.cpp \
    Stack/SeerStackFramesBrowserWidget.cpp \
    Stack/SeerStackLocalsBrowserWidget.cpp \
    Stack/SeerStackManagerWidget.cpp \
    Thread/SeerThreadFramesBrowserWidget.cpp \
    Thread/SeerThreadIdsBrowserWidget.cpp \
    Thread/SeerThreadManagerWidget.cpp \
    Variable/SeerVariableBrowserWidget.cpp \
    Variable/SeerVariableLoggerBrowserWidget.cpp \
    Variable/SeerVariableManagerWidget.cpp \
    Variable/SeerVariableTrackerBrowserWidget.cpp \
    cfgpage/SeerConfigDialog.cpp \
    cfgpage/SeerEditorConfigPage.cpp \
    cfgpage/SeerKeysConfigPage.cpp \
    cfgpage/SeerSeerConfigPage.cpp \
    cfgpage/SeerSourceConfigPage.cpp \
    keysettings.cpp \
    main.cpp \
    myQT/QDetachTabWidget.cpp \
    myQT/QProcessInfo.cpp \
    myQT/QProcessInfoWidget.cpp \
    myQT/QProgressIndicator.cpp \
    myQT/QZoomChart.cpp \
    myQT/QZoomChartView.cpp \
    myQT/Qcolorbutton.cpp \
    sdsmainwindow.cpp \
    util.cpp \
    viz/array/SeerArrayVisualizerWidget.cpp \
    viz/array/SeerArrayWidget.cpp \
    viz/memory/SeerHexWidget.cpp \
    viz/memory/SeerMemoryVisualizerWidget.cpp\
    viz/arr.cpp \
    viz/double_link.cpp \
    viz/solo_link.cpp \
    viz/struct_view.cpp \
    viz/table.cpp

HEADERS += \
    BaseDebug/LogWidget.h \
    BaseDebug/SeerBreakpointCreateDialog.h \
    BaseDebug/SeerBreakpointsBrowserWidget.h \
    BaseDebug/SeerBreakpointsOptionsBarWidget.h \
    BaseDebug/SeerCatchpointCreateDialog.h \
    BaseDebug/SeerCatchpointsBrowserWidget.h \
    BaseDebug/SeerDebugDialog.h \
    BaseDebug/SeerDirectoryFilterProxyModel.h \
    BaseDebug/SeerExecutableFilterProxyModel.h \
    BaseDebug/SeerFunctionBrowserWidget.h \
    BaseDebug/SeerLibraryBrowserWidget.h \
    BaseDebug/SeerSourceBrowserWidget.h \
    BaseDebug/SeerSourceLibraryManagerWidget.h \
    BaseDebug/SeerTildeLogWidget.h \
    BaseDebug/SeerWatchpointCreateDialog.h \
    BaseDebug/SeerWatchpointsBrowserWidget.h \
    Editor/SeerCloseSourceDialog.h \
    Editor/SeerCppSourceHighlighter.h \
    Editor/SeerEditorManagerEntry.h \
    Editor/SeerEditorManagerWidget.h \
    Editor/SeerEditorOptionsBarWidget.h \
    Editor/SeerEditorWidget.h \
    Editor/SeerHighlighterSettings.h \
    Editor/SeerTypeBrowserWidget.h \
    GdbCtrl/gdbconfigpage.h \
    GdbCtrl/gdblogwidget.h \
    GdbCtrl/gdbmonitor.h \
    GdbCtrl/gdbwidget.h \
    SeerArgumentsDialog.h \
    SeerRunStatusIndicator.h \
    SeerSlashProcDialog.h \
    Stack/SeerStackArgumentsBrowserWidget.h \
    Stack/SeerStackFramesBrowserWidget.h \
    Stack/SeerStackLocalsBrowserWidget.h \
    Stack/SeerStackManagerWidget.h \
    Thread/SeerThreadFramesBrowserWidget.h \
    Thread/SeerThreadIdsBrowserWidget.h \
    Thread/SeerThreadManagerWidget.h \
    Variable/SeerVariableBrowserWidget.h \
    Variable/SeerVariableLoggerBrowserWidget.h \
    Variable/SeerVariableManagerWidget.h \
    Variable/SeerVariableTrackerBrowserWidget.h \
    cfgpage/SeerConfigDialog.h \
    cfgpage/SeerEditorConfigPage.h \
    cfgpage/SeerKeysConfigPage.h \
    cfgpage/SeerSeerConfigPage.h \
    cfgpage/SeerSourceConfigPage.h \
    keysettings.h \
    myQT/QDetachTabWidget.h \
    myQT/QProcessInfo.h \
    myQT/QProcessInfoWidget.h \
    myQT/QProgressIndicator.h \
    myQT/QZoomChart.h \
    myQT/QZoomChartView.h \
    myQT/Qcolorbutton.h \
    sdsmainwindow.h \
    util.h \
    viz/array/SeerArrayVisualizerWidget.h \
    viz/array/SeerArrayWidget.h \
    viz/memory/SeerHexWidget.h \
    viz/memory/SeerMemoryVisualizerWidget.h\
    viz/arr.h \
    viz/double_link.h \
    viz/solo_link.h \
    viz/struct_view.h \
    viz/table.h


FORMS += \
    BaseDebug/LogWidget.ui \
    BaseDebug/SeerBreakpointCreateDialog.ui \
    BaseDebug/SeerBreakpointsBrowserWidget.ui \
    BaseDebug/SeerBreakpointsOptionsBarWidget.ui \
    BaseDebug/SeerCatchpointCreateDialog.ui \
    BaseDebug/SeerCatchpointsBrowserWidget.ui \
    BaseDebug/SeerDebugDialog.ui \
    BaseDebug/SeerFunctionBrowserWidget.ui \
    BaseDebug/SeerLibraryBrowserWidget.ui \
    BaseDebug/SeerSourceBrowserWidget.ui \
    BaseDebug/SeerSourceLibraryManagerWidget.ui \
    BaseDebug/SeerWatchpointCreateDialog.ui \
    BaseDebug/SeerWatchpointsBrowserWidget.ui \
    Editor/SeerCloseSourceDialog.ui \
    Editor/SeerEditorManagerWidget.ui \
    Editor/SeerEditorOptionsBarWidget.ui \
    Editor/SeerEditorWidget.ui \
    Editor/SeerTypeBrowserWidget.ui \
    GdbCtrl/gdbconfigpage.ui \
    GdbCtrl/gdbwidget.ui \
    SeerArgumentsDialog.ui \
    SeerSlashProcDialog.ui \
    Stack/SeerStackArgumentsBrowserWidget.ui \
    Stack/SeerStackFramesBrowserWidget.ui \
    Stack/SeerStackLocalsBrowserWidget.ui \
    Stack/SeerStackManagerWidget.ui \
    Thread/SeerThreadFramesBrowserWidget.ui \
    Thread/SeerThreadIdsBrowserWidget.ui \
    Thread/SeerThreadManagerWidget.ui \
    Variable/SeerVariableBrowserWidget.ui \
    Variable/SeerVariableLoggerBrowserWidget.ui \
    Variable/SeerVariableManagerWidget.ui \
    Variable/SeerVariableTrackerBrowserWidget.ui \
    cfgpage/SeerConfigDialog.ui \
    cfgpage/SeerEditorConfigPage.ui \
    cfgpage/SeerKeysConfigPage.ui \
    cfgpage/SeerSeerConfigPage.ui \
    cfgpage/SeerSourceConfigPage.ui \
    myQT/QProcessInfoWidget.ui \
    sdsmainwindow.ui \
    viz/array/SeerArrayVisualizerWidget.ui \
    viz/memory/SeerMemoryVisualizerWidget.ui\
    viz/arr.ui \
    viz/double_link.ui \
    viz/solo_link.ui \
    viz/struct_view.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    SeeDataStructureRc.qrc \



DISTFILES += \
    .gitignore \
    CMakeLists.txt \
    resources/README.icons \
    resources/RelaxLightIcons/document-new.svg \
    resources/RelaxLightIcons/document-open.svg \
    resources/RelaxLightIcons/document-print.svg \
    resources/RelaxLightIcons/document-save-as.svg \
    resources/RelaxLightIcons/document-save.svg \
    resources/RelaxLightIcons/edit-clear.svg \
    resources/RelaxLightIcons/edit-delete.svg \
    resources/RelaxLightIcons/edit-find.svg \
    resources/RelaxLightIcons/go-down.svg \
    resources/RelaxLightIcons/go-up.svg \
    resources/RelaxLightIcons/list-add.svg \
    resources/RelaxLightIcons/list-remove.svg \
    resources/RelaxLightIcons/view-refresh.svg \
    resources/RelaxLightIcons/x.x \
    resources/about.txt \
    resources/arguments.png \
    resources/array.png \
    resources/console.png \
    resources/continue.png \
    resources/debug.png \
    resources/down_arrow.png \
    resources/editor.png \
    resources/exit.png \
    resources/file.png \
    resources/folder.png \
    resources/font.png \
    resources/gdb.png \
    resources/hide.png \
    resources/icons/test.svg \
    resources/keyboard-key.png \
    resources/maximize.png \
    resources/memory.png \
    resources/minimize.png \
    resources/next.png \
    resources/quit.png \
    resources/restart.png \
    resources/seer_128x128.png \
    resources/seer_256x256.png \
    resources/seer_32x32.png \
    resources/seer_512x512.png \
    resources/seer_64x64.png \
    resources/source.png \
    resources/step_into.png \
    resources/step_out.png \
    resources/step_over.png \
    resources/stop.png \
    resources/up_arrow.png
INCLUDEPATH +=  BaseDebug/  \
                cfgpage/    \
                Editor/     \
                GdbCtrl/    \
                myQT/       \
                Stack/      \
                Thread/     \
                Variable/   \
                viz/        \
                viz/array/  \
                viz/memory/ \

