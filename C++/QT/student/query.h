#ifndef QUERY_H
#define QUERY_H

#include <QDialog>
#include <QFile>
#include <Qlist>
#include <QString>
#include <QStandardItem>
#include <QStandardItemModel>


namespace Ui {
class query;
}

class query : public QDialog
{
    Q_OBJECT

public:
    explicit query(QWidget *parent = 0);
    ~query();

    int readFromFile();
    void doQuery(int index, QString cnt);
    void display(int row, QStringList subs);
    void clear();
    void clear_str();


private slots:
    void on_btn_search_clicked();

private:
    Ui::query *ui;
    QList<QString> str_lines;
    QStandardItemModel *model;
};

#endif // QUERY_H
