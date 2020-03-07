#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "commodity.h"
#include <QString>
#include <Qlist>
#include <QStandardItem>
#include <QStandardItemModel>
#include "delete_commodity.h"
#include "query_member.h"
#include "password.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    int ReadFromFile();
    void WriteToFile(QList<QString> cnt);

private slots:
    void on_btn_search_clicked();

    void on_btn_query_m_triggered();

    void on_btn_save_clicked();

    void on_btn_delete_clicked();

    void on_add_commodity_clicked();

private:
    Ui::MainWindow *ui;
    commodity c;
    delete_commodity d;
    query_member q;
    password p;

    QList<QString> str_lines;
    //QList<QString> str_change;
    QList<QString> str_nochange;
    QStandardItemModel *model;

    void clear();
    void display(int row, QStringList subs);
    int save_flag;
};

#endif // MAINWINDOW_H
