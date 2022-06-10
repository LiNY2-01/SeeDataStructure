#ifndef SDSMAINWINDOW_H
#define SDSMAINWINDOW_H

#include <QMainWindow>
#include "ui_sdsmainwindow.h"
#include "SeerRunStatusIndicator.h"
#include "keysettings.h"
#include "QProgressIndicator.h"
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QShortcut>
#include <QtGui/QCloseEvent>
#include <QtGui/QResizeEvent>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include<QWidget>
#include<arr.h>
#include<struct_view.h>
#include<solo_link.h>
#include<double_link.h>
#include <QGraphicsDropShadowEffect>

QT_BEGIN_NAMESPACE
namespace Ui { class sdsMainWindow; }
QT_END_NAMESPACE

struct cWindow;
class sdsMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    sdsMainWindow(QWidget *parent = nullptr);
    ~sdsMainWindow();
    void                        setExecutableName                   (const QString& executableName);
    const QString&              executableName                      () const;
    void                        setExecutableArguments              (const QString& executableArguments);
    void                        setExecutableArguments              (const QStringList& executableArguments);
    const QString&              executableArguments                 () const;
    void                        setExecutableWorkingDirectory       (const QString& executableWorkingDirectory);
    const QString&              executableWorkingDirectory          () const;
    void                        setExecutableBreakpointsFilename    (const QString& breakpointsFilename);
    const QString&              executableBreakpointsFilename       () const;
    void                        setExecutablePid                    (int pid);
    int                         executablePid                       () const;
    void                        setExecutableHostPort               (const QString& executableHostPort);
    const QString&              executableHostPort                  () const;
    void                        setExecutableSerialBaud             (int executableBaudRate);
    int                         executableSerialBaud                () const;
    void                        setExecutableSerialParity           (const QString& executableParity);
    const QString&              executableSerialParity              () const;
    void                        setExecutableCoreFilename           (const QString& executableCoreFilename);
    const QString&              executableCoreFilename              () const;

    void                        launchExecutable                    (const QString& launchMode);
    const QString&              executableLaunchMode                () const;

private slots:
    void                        handleFileDebug                     ();
    void                        handleFileArguments                 ();
    void                        handleFileQuit                      ();
    void                        handleViewMemoryVisualizer          ();
    void                        handleViewArrayVisualizer           ();
    void                        handleViewConsoleNormal             ();
    void                        handleViewConsoleHidden             ();
    void                        handleViewConsoleMinimized          ();
    void                        handleSettingsConfiguration         ();
    void                        handleSettingsSaveConfiguration     ();
    void                        handleHelpAbout                     ();
    void                        handleText                          (const QString& text);
    void                        handleRunStatusChanged              (SeerRunStatusIndicator::RunStatus status);
    void                        handleChangeWindowTitle             (QString title);

protected:
    void                        writeSettings                       ();
    void                        readSettings                        ();
    void                        writeConfigSettings                 ();
    void                        readConfigSettings                  ();
    void                        resizeEvent                         (QResizeEvent* event);
    void                        closeEvent                          (QCloseEvent* event);
    void                        setKeySettings                      (const KeySettings& settings);
    const KeySettings       keySettings                         () const;
    void                        refreshShortCuts                    ();

private:
    QProgressIndicator*         _progressIndicator;
    KeySettings             _keySettings;

private:
    Ui::sdsMainWindow *ui;
    arr m1;
    Struct_view m2;
    Solo_link m3;
    Double_link m4;
    cWindow *d;
};
#endif // SDSMAINWINDOW_H
