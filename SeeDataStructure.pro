QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport
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

SOURCES += \
    BaseDebug/LogWidget.cpp \
    BaseDebug/SeerBreakpointCreateDialog.cpp \
    Editor/SeerCloseSourceDialog.cpp \
    Editor/SeerCppSourceHighlighter.cpp \
    Editor/SeerEditorConfigPage.cpp \
    Editor/SeerEditorManagerWidget.cpp \
    Editor/SeerEditorOptionsBarWidget.cpp \
    Editor/SeerEditorWidget.cpp \
    Editor/SeerEditorWidgetBreakPointArea.cpp \
    Editor/SeerEditorWidgetLineNumberArea.cpp \
    Editor/SeerEditorWidgetMiniMapArea.cpp \
    Editor/SeerEditorWidgetSourceArea.cpp \
    Editor/SeerHighlighterSettings.cpp \
    GdbCtrl/gdbconfigpage.cpp \
    GdbCtrl/gdblogwidget.cpp \
    GdbCtrl/gdbmonitor.cpp \
    GdbCtrl/gdbwidget.cpp \
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
    util.cpp

HEADERS += \
    BaseDebug/LogWidget.h \
    BaseDebug/SeerBreakpointCreateDialog.h \
    Editor/SeerCloseSourceDialog.h \
    Editor/SeerCppSourceHighlighter.h \
    Editor/SeerEditorConfigPage.h \
    Editor/SeerEditorManagerEntry.h \
    Editor/SeerEditorManagerWidget.h \
    Editor/SeerEditorOptionsBarWidget.h \
    Editor/SeerEditorWidget.h \
    Editor/SeerHighlighterSettings.h \
    GdbCtrl/gdbconfigpage.h \
    GdbCtrl/gdblogwidget.h \
    GdbCtrl/gdbmonitor.h \
    GdbCtrl/gdbwidget.h \
    keysettings.h \
    myQT/QDetachTabWidget.h \
    myQT/QProcessInfo.h \
    myQT/QProcessInfoWidget.h \
    myQT/QProgressIndicator.h \
    myQT/QZoomChart.h \
    myQT/QZoomChartView.h \
    myQT/Qcolorbutton.h \
    sdsmainwindow.h \
    util.h

FORMS += \
    BaseDebug/LogWidget.ui \
    BaseDebug/SeerBreakpointCreateDialog.ui \
    Editor/SeerCloseSourceDialog.ui \
    Editor/SeerEditorConfigPage.ui \
    Editor/SeerEditorManagerWidget.ui \
    Editor/SeerEditorOptionsBarWidget.ui \
    Editor/SeerEditorWidget.ui \
    GdbCtrl/gdbconfigpage.ui \
    GdbCtrl/gdbwidget.ui \
    myQT/QProcessInfoWidget.ui \
    sdsmainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    SeeDataStructureRc.qrc

DISTFILES += \
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
