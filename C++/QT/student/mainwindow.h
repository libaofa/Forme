#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "add_student.h"
#include "query.h"
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionaddstu_triggered();

    void on_actionquerystu_triggered();

private:
    Ui::MainWindow *ui;
    Add_Student a;
    query q;
};

#endif // MAINWINDOW_H
