#include "add_student.h"
#include <QApplication>
#include <mainwindow.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow m;
    m.show();
//    Add_Student w;
//    w.show();

    return a.exec();
}
