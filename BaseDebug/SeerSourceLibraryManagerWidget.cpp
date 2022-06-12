#include "SeerSourceLibraryManagerWidget.h"
#include <QtWidgets/QToolButton>
#include <QtGui/QIcon>
#include <QtCore/QDebug>

SeerSourceLibraryManagerWidget::SeerSourceLibraryManagerWidget (QWidget* parent) : QWidget(parent) {

    // Initialize private data

    // Setup UI
    setupUi(this);

    // Setup the widgets
    tabWidget->setMovable(true);
    tabWidget->setTabsClosable(false);

    _sourceBrowserWidget    = new SeerSourceBrowserWidget(this);
    _functionBrowserWidget  = new SeerFunctionBrowserWidget(this);
    _typeBrowserWidget      = new SeerTypeBrowserWidget(this);
    _variableBrowserWidget  = new SeerVariableBrowserWidget(this);
    _libraryBrowserWidget   = new SeerLibraryBrowserWidget(this);

    tabWidget->addTab(_sourceBrowserWidget,    "源代码");
    tabWidget->addTab(_functionBrowserWidget,  "函数");
    tabWidget->addTab(_typeBrowserWidget,      "类型");
    tabWidget->addTab(_variableBrowserWidget,  "变量");
    tabWidget->addTab(_libraryBrowserWidget,   "链接库");

    QToolButton* refreshToolButton = new QToolButton(tabWidget);
    refreshToolButton->setIcon(QIcon(":/resources/RelaxLightIcons/view-refresh.svg"));
    refreshToolButton->setToolTip("Refresh the source/libraries information.");
    tabWidget->setCornerWidget(refreshToolButton, Qt::TopRightCorner);

    // Connect things.
    QObject::connect(refreshToolButton, &QToolButton::clicked,     this,  &SeerSourceLibraryManagerWidget::handleRefreshToolButtonClicked);
}

SeerSourceLibraryManagerWidget::~SeerSourceLibraryManagerWidget () {
}

SeerSourceBrowserWidget* SeerSourceLibraryManagerWidget::sourceBrowserWidget () {
    return _sourceBrowserWidget;
}

SeerFunctionBrowserWidget* SeerSourceLibraryManagerWidget::functionBrowserWidget () {
    return _functionBrowserWidget;
}

SeerTypeBrowserWidget* SeerSourceLibraryManagerWidget::typeBrowserWidget () {
    return _typeBrowserWidget;
}

SeerVariableBrowserWidget* SeerSourceLibraryManagerWidget::variableBrowserWidget () {
    return _variableBrowserWidget;
}

SeerLibraryBrowserWidget* SeerSourceLibraryManagerWidget::libraryBrowserWidget () {
    return _libraryBrowserWidget;
}

void SeerSourceLibraryManagerWidget::handleRefreshToolButtonClicked () {

    sourceBrowserWidget()->refresh();
    functionBrowserWidget()->refresh();
    typeBrowserWidget()->refresh();
    variableBrowserWidget()->refresh();
    libraryBrowserWidget()->refresh();
}

