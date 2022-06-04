#ifndef DGBLOGWIDGET_H
#define DGBLOGWIDGET_H

#include <QObject>
#include "BaseDebug/LogWidget.h"
class GdbLogWidget : public LogWidget
{
    Q_OBJECT
public:
    explicit GdbLogWidget(QWidget *parent = nullptr);
    ~GdbLogWidget();
    void                processText                 (const QString& text);

signals:
    void                refreshBreakpointsList      ();

};

#endif // DGBLOGWIDGET_H
