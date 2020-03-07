#include "commodity.h"
#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //commodity w;
    //w.show();
    MainWindow w;
    w.show();
    return a.exec();
}
