cmake_minimum_required( VERSION 3.1 )
project(SeeDataStructure VERSION 1.0.1 LANGUAGES CXX)
set( CMAKE_CXX_STANDARD 14 )
set( CMAKE_INCLUDE_CURRENT_DIR ON )
set( CMAKE_AUTOMOC ON )
set( CMAKE_BUILD_TYPE Release )
add_definitions ( -Wall )
set(CMAKE_PREFIX_PATH ${QTDIR})
find_package(Qt5Core         REQUIRED)
find_package(Qt5Gui          REQUIRED)
find_package(Qt5Widgets      REQUIRED)
find_package(Qt5PrintSupport REQUIRED)
find_package(Qt5Charts       REQUIRED)
set (
		SeeDataStructure_HDRS
		BaseDebug/LogWidget.h 
		BaseDebug/SeerBreakpointCreateDialog.h 
		BaseDebug/SeerBreakpointsBrowserWidget.h 
		BaseDebug/SeerBreakpointsOptionsBarWidget.h 
		BaseDebug/SeerCatchpointCreateDialog.h 
		BaseDebug/SeerCatchpointsBrowserWidget.h 
		BaseDebug/SeerDebugDialog.h 
		BaseDebug/SeerDirectoryFilterProxyModel.h 
		BaseDebug/SeerExecutableFilterProxyModel.h 
		BaseDebug/SeerFunctionBrowserWidget.h 
		BaseDebug/SeerLibraryBrowserWidget.h 
		BaseDebug/SeerSourceLibraryManagerWidget.h
		BaseDebug/SeerSourceBrowserWidget.h
		BaseDebug/SeerTildeLogWidget.h 
		BaseDebug/SeerWatchpointCreateDialog.h 
		BaseDebug/SeerWatchpointsBrowserWidget.h 
		Editor/SeerCloseSourceDialog.h 
		Editor/SeerCppSourceHighlighter.h
		Editor/SeerEditorManagerEntry.h 
		Editor/SeerEditorManagerWidget.h 
		Editor/SeerEditorOptionsBarWidget.h 
		Editor/SeerEditorWidget.h 
		Editor/SeerHighlighterSettings.h 
		Editor/SeerTypeBrowserWidget.h 
		GdbCtrl/gdbconfigpage.h 
		GdbCtrl/gdblogwidget.h 
		GdbCtrl/gdbmonitor.h 
		GdbCtrl/gdbwidget.h 
		SeerAboutDialog.h 
		SeerArgumentsDialog.h 
		SeerRunStatusIndicator.h 
		SeerSlashProcDialog.h 
		Stack/SeerStackArgumentsBrowserWidget.h 
		Stack/SeerStackFramesBrowserWidget.h 
		Stack/SeerStackLocalsBrowserWidget.h 
		Stack/SeerStackManagerWidget.h 
		Thread/SeerThreadFramesBrowserWidget.h 
		Thread/SeerThreadIdsBrowserWidget.h 
		Thread/SeerThreadManagerWidget.h 
		Variable/SeerRegisterValuesBrowserWidget.h 
		Variable/SeerVariableBrowserWidget.h 
		Variable/SeerVariableLoggerBrowserWidget.h 
		Variable/SeerVariableManagerWidget.h 
		Variable/SeerVariableTrackerBrowserWidget.h 
		cfgpage/SeerConfigDialog.h 
		cfgpage/SeerEditorConfigPage.h 
		cfgpage/SeerKeysConfigPage.h 
		cfgpage/SeerSeerConfigPage.h 
		cfgpage/SeerSourceConfigPage.h 
		keysettings.h 
		myQT/QDetachTabWidget.h 
		myQT/QProcessInfo.h 
		myQT/QProcessInfoWidget.h 
		myQT/QProgressIndicator.h 
		myQT/QZoomChart.h 
		myQT/QZoomChartView.h 
		myQT/Qcolorbutton.h 
		sdsmainwindow.h 
		util.h 
		viz/array/SeerArrayVisualizerWidget.h 
		viz/array/SeerArrayWidget.h 
		viz/memory/SeerHexWidget.h 
		viz/memory/SeerMemoryVisualizerWidget.h
)

set ( 	SeeDataStructure_SRCS
		BaseDebug/LogWidget.cpp 
		BaseDebug/SeerBreakpointCreateDialog.cpp 
		BaseDebug/SeerBreakpointsBrowserWidget.cpp 
		BaseDebug/SeerBreakpointsOptionsBarWidget.cpp 
		BaseDebug/SeerCatchpointCreateDialog.cpp 
		BaseDebug/SeerCatchpointsBrowserWidget.cpp 
		BaseDebug/SeerDebugDialog.cpp 
		BaseDebug/SeerFunctionBrowserWidget.cpp 
		BaseDebug/SeerLibraryBrowserWidget.cpp 
		BaseDebug/SeerSourceLibraryManagerWidget.cpp
		BaseDebug/SeerSourceBrowserWidget.cpp
		BaseDebug/SeerTildeLogWidget.cpp 
		BaseDebug/SeerWatchpointCreateDialog.cpp 
		BaseDebug/SeerWatchpointsBrowserWidget.cpp 
		Editor/SeerCloseSourceDialog.cpp 
		Editor/SeerCppSourceHighlighter.cpp
		Editor/SeerEditorManagerWidget.cpp 
		Editor/SeerEditorOptionsBarWidget.cpp 
		Editor/SeerEditorWidget.cpp 
		Editor/SeerEditorWidgetBreakPointArea.cpp 
		Editor/SeerEditorWidgetLineNumberArea.cpp 
		Editor/SeerEditorWidgetMiniMapArea.cpp 
		Editor/SeerEditorWidgetSourceArea.cpp 
		Editor/SeerHighlighterSettings.cpp 
		Editor/SeerTypeBrowserWidget.cpp 
		GdbCtrl/gdbconfigpage.cpp 
		GdbCtrl/gdblogwidget.cpp 
		GdbCtrl/gdbmonitor.cpp 
		GdbCtrl/gdbwidget.cpp 
		SeerAboutDialog.cpp 
		SeerArgumentsDialog.cpp 
		SeerRunStatusIndicator.cpp 
		SeerSlashProcDialog.cpp 
		Stack/SeerStackArgumentsBrowserWidget.cpp 
		Stack/SeerStackFramesBrowserWidget.cpp 
		Stack/SeerStackLocalsBrowserWidget.cpp 
		Stack/SeerStackManagerWidget.cpp 
		Thread/SeerThreadFramesBrowserWidget.cpp 
		Thread/SeerThreadIdsBrowserWidget.cpp 
		Thread/SeerThreadManagerWidget.cpp 
		Variable/SeerRegisterValuesBrowserWidget.cpp 
		Variable/SeerVariableBrowserWidget.cpp 
		Variable/SeerVariableLoggerBrowserWidget.cpp 
		Variable/SeerVariableManagerWidget.cpp 
		Variable/SeerVariableTrackerBrowserWidget.cpp 
		cfgpage/SeerConfigDialog.cpp 
		cfgpage/SeerEditorConfigPage.cpp 
		cfgpage/SeerKeysConfigPage.cpp 
		cfgpage/SeerSeerConfigPage.cpp 
		cfgpage/SeerSourceConfigPage.cpp 
		keysettings.cpp 
		main.cpp 
		myQT/QDetachTabWidget.cpp 
		myQT/QProcessInfo.cpp 
		myQT/QProcessInfoWidget.cpp 
		myQT/QProgressIndicator.cpp 
		myQT/QZoomChart.cpp 
		myQT/QZoomChartView.cpp 
		myQT/Qcolorbutton.cpp 
		sdsmainwindow.cpp 
		util.cpp 
		viz/array/SeerArrayVisualizerWidget.cpp 
		viz/array/SeerArrayWidget.cpp 
		viz/memory/SeerHexWidget.cpp 
		viz/memory/SeerMemoryVisualizerWidget.cpp
		)

set ( 	SeeDataStructure_UIS
		BaseDebug/LogWidget.ui 
		BaseDebug/SeerBreakpointCreateDialog.ui 
		BaseDebug/SeerBreakpointsBrowserWidget.ui 
		BaseDebug/SeerBreakpointsOptionsBarWidget.ui 
		BaseDebug/SeerCatchpointCreateDialog.ui 
		BaseDebug/SeerCatchpointsBrowserWidget.ui 
		BaseDebug/SeerDebugDialog.ui 
		BaseDebug/SeerFunctionBrowserWidget.ui 
		BaseDebug/SeerLibraryBrowserWidget.ui 
		BaseDebug/SeerSourceLibraryManagerWidget.ui
		BaseDebug/SeerSourceBrowserWidget.ui
		BaseDebug/SeerWatchpointCreateDialog.ui 
		BaseDebug/SeerWatchpointsBrowserWidget.ui

		Editor/SeerCloseSourceDialog.ui
		Editor/SeerEditorManagerWidget.ui 
		Editor/SeerEditorOptionsBarWidget.ui 
		Editor/SeerEditorWidget.ui 
		Editor/SeerTypeBrowserWidget.ui 
		GdbCtrl/gdbconfigpage.ui 
		GdbCtrl/gdbwidget.ui 
		SeerAboutDialog.ui 
		SeerArgumentsDialog.ui 
		SeerSlashProcDialog.ui 
		Stack/SeerStackArgumentsBrowserWidget.ui 
		Stack/SeerStackFramesBrowserWidget.ui 
		Stack/SeerStackLocalsBrowserWidget.ui 
		Stack/SeerStackManagerWidget.ui 
		Thread/SeerThreadFramesBrowserWidget.ui 
		Thread/SeerThreadIdsBrowserWidget.ui 
		Thread/SeerThreadManagerWidget.ui 
		Variable/SeerRegisterValuesBrowserWidget.ui 
		Variable/SeerVariableBrowserWidget.ui 
		Variable/SeerVariableLoggerBrowserWidget.ui 
		Variable/SeerVariableManagerWidget.ui 
		Variable/SeerVariableTrackerBrowserWidget.ui 
		cfgpage/SeerConfigDialog.ui 
		cfgpage/SeerEditorConfigPage.ui 
		cfgpage/SeerKeysConfigPage.ui 
		cfgpage/SeerSeerConfigPage.ui 
		cfgpage/SeerSourceConfigPage.ui 
		myQT/QProcessInfoWidget.ui 
		sdsmainwindow.ui 
		viz/array/SeerArrayVisualizerWidget.ui 
		viz/memory/SeerMemoryVisualizerWidget.ui
	)
QT5_WRAP_UI(UIS ${SeeDataStructure_UIS})
include_directories(myQT Editor GdbCtrl BaseDebug Stack Variable Thread cfgpage )
include_directories(viz viz/array viz/memory)
set ( SeeDataStructure_RSCS
		SeeDataStructureRc.qrc
		)
QT5_ADD_RESOURCES(RSCS ${SeeDataStructure_RSCS})

add_executable ( SeeDataStructure ${SeeDataStructure_SRCS} ${UIS} ${RSCS} ${TRS} ${MOCS} )

target_link_libraries(${PROJECT_NAME} Qt5::Widgets Qt5::Gui Qt5::Core Qt5::PrintSupport Qt5::Charts)