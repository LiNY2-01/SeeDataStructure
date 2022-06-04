#ifndef GDBCONFIGPAGE_H
#define GDBCONFIGPAGE_H

#include <QWidget>

namespace Ui {
class GdbConfigPage;
}

class GdbConfigPage : public QWidget
{
    Q_OBJECT

public:
    explicit GdbConfigPage(QWidget *parent = nullptr);
    ~GdbConfigPage();
    QString                 gdbProgram                                      () const;
    QString                 gdbArguments                                    () const;
    bool                    gdbAsyncMode                                    () const;
    bool                    gdbHandleTerminatingException                   () const;

    void                    setGdbProgram                                   (const QString& program);
    void                    setGdbArguments                                 (const QString& arguments);
    void                    setGdbAsyncMode                                 (bool flag);
    void                    setGdbHandleTerminatingException                (bool flag);


protected slots:
    void                    handleGdbProgramToolButton                      ();
    void                    handleGdbTestToolButton                         ();

private:
    Ui::GdbConfigPage *ui;
};

#endif // GDBCONFIGPAGE_H
