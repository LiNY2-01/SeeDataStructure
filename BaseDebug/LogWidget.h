#ifndef LOGWIDGET_H
#define LOGWIDGET_H

#include <QWidget>
#include <QString>
#include "ui_LogWidget.h"
namespace Ui {
class LogWidget;
}

class LogWidget : public QWidget
{
    Q_OBJECT

public:
    explicit LogWidget(QWidget *parent = nullptr);
    ~LogWidget();

    virtual void        processText                 (const QString& text);

    bool                isLogEnabled                () const;
    void                setLogEnabled               (bool flag);
    void                moveToEnd                   ();

signals:
    void                logEnabledChanged           (bool flag);

public slots:
    void                handleText                  (const QString& text);
    void                handleClearButton           ();
    void                handlePrintButton           ();
    void                handleSaveButton            ();
    void                handleWrapTextCheckBox      ();
    void                handleEnableCheckBox        ();


protected:
    Ui::LogWidget *ui;
};

#endif // LOGWIDGET_H
