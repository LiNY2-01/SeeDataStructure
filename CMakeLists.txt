

cmake_minimum_required( VERSION 3.1 )

project(SeeDataStructure VERSION 1.0.1 LANGUAGES CXX)
set( CMAKE_CXX_STANDARD 14 )
set( CMAKE_INCLUDE_CURRENT_DIR ON )
set( CMAKE_AUTOMOC ON )
set( CMAKE_BUILD_TYPE Release )
add_definitions ( -Wall )
find_package ( Qt5Widgets REQUIRED )
find_package ( Qt5Core REQUIRED )
find_package ( Qt5Gui REQUIRED )
set (
		SeeDataStructure_HDRS
		BaseDebug/LogWidget.h
		BaseDebug/SeerBreakpointCreateDialog.h
		Editor/SeerCloseSourceDialog.h 
		Editor/SeerCppSourceHighlighter.h
		Editor/SeerEditorConfigPage.h
		Editor/SeerEditorManagerEntry.h
		Editor/SeerEditorManagerWidget.h
		Editor/SeerEditorOptionsBarWidget.h
		Editor/SeerEditorWidget.h
		Editor/SeerHighlighterSettings.h
		GdbCtrl/gdbconfigpage.h
		GdbCtrl/gdblogwidget.h
		GdbCtrl/gdbmonitor.h
		GdbCtrl/gdbwidget.h
		myQT/QDetachTabWidget.h
		myQT/QProcessInfo.h
		myQT/QProcessInfoWidget.h
		myQT/QProgressIndicator.h
		myQT/QZoomChart.h
		myQT/QZoomChartView.h
		myQT/Qcolorbutton.h
		sdsmainwindow.h
		util.h
)

set ( 	SeeDataStructure_SRCS
		BaseDebug/LogWidget.cpp
		BaseDebug/SeerBreakpointCreateDialog.cpp
		Editor/SeerCloseSourceDialog.cpp 
		Editor/SeerCppSourceHighlighter.cpp
		Editor/SeerEditorConfigPage.cpp
		Editor/SeerEditorManagerWidget.cpp
		Editor/SeerEditorOptionsBarWidget.cpp
		Editor/SeerEditorWidget.cpp
		Editor/SeerEditorWidgetBreakPointArea.cpp
		Editor/SeerEditorWidgetLineNumberArea.cpp
		Editor/SeerEditorWidgetMiniMapArea.cpp
		Editor/SeerEditorWidgetSourceArea.cpp
		Editor/SeerHighlighterSettings.cpp
		GdbCtrl/gdbconfigpage.cpp
		GdbCtrl/gdblogwidget.cpp
		GdbCtrl/gdbmonitor.cpp
		GdbCtrl/gdbwidget.cpp
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
		)

set ( SeeDataStructure_UIS
		BaseDebug/LogWidget.ui
		BaseDebug/SeerBreakpointCreateDialog.ui
		Editor/SeerCloseSourceDialog.ui 
		Editor/SeerEditorConfigPage.ui
		Editor/SeerEditorManagerWidget.ui
		Editor/SeerEditorOptionsBarWidget.ui
		Editor/SeerEditorWidget.ui
		GdbCtrl/gdbconfigpage.ui
		GdbCtrl/gdbwidget.ui
		myQT/QProcessInfoWidget.ui
		sdsmainwindow.ui
	)
QT5_WRAP_UI(UIS ${SeeDataStructure_UIS})

set ( SeeDataStructure_RSCS

	)
QT5_ADD_RESOURCES(RSCS ${SeeDataStructure_RSCS})

add_executable ( SeeDataStructure ${SeeDataStructure_SRCS} ${UIS} ${RSCS} ${TRS} ${MOCS} )
target_link_libraries ( SeeDataStructure  Qt5::Core Qt5::Gui Qt5::Widgets )
