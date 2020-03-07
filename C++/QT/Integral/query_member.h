#ifndef QUERY_MEMBER_H
#define QUERY_MEMBER_H

#include <QDialog>
#include <add_integral.h>
#include <Qlist>
#include <QString>
#include <QStandardItem>
#include <QStandardItemModel>
#include <delete_commodity.h>
#include "password.h"

namespace Ui {
class query_member;
}

class query_member : public QDialog
{
    Q_OBJECT

public:
    explicit query_member(QWidget *parent = 0);
    ~query_member();

    int ReadFromFile();

private slots:
    void on_btn_add_clicked();

    void on_btn_search_clicked();

    void display(int row, QStringList subs);

    void clear();

    void on_btn_save_clicked();

    void WriteToFile(QList<QString> cnt);

    void on_btn_delete_clicked();

private:
    Ui::query_member *ui;

    add_integral a;

    delete_commodity d;

    password p;

    QStandardItemModel *model;

    QList<QString> str_lines;
    QList<QString> str_nochange;
};

#endif // QUERY_MEMBER_H
