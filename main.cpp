#include "sdsmainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    sdsMainWindow w;
    w.show();
    return a.exec();
}
