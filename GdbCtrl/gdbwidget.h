#ifndef GDBWIDGET_H
#define GDBWIDGET_H

#include <QWidget>

namespace Ui {
class GdbWidget;
}

class GdbWidget : public QWidget
{
    Q_OBJECT

public:
    explicit GdbWidget(QWidget *parent = nullptr);
    ~GdbWidget();

private:
    Ui::GdbWidget *ui;
};

#endif // GDBWIDGET_H
