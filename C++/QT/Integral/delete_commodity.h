#ifndef DELETE_COMMODITY_H
#define DELETE_COMMODITY_H

#include <QDialog>
#include <QString>
#include <QStringList>
#include <QString>
#include <Qlist>
#include "password.h"

namespace Ui {
class delete_commodity;
}

class delete_commodity : public QDialog
{
    Q_OBJECT

public:
    explicit delete_commodity(QWidget *parent = 0);
    ~delete_commodity();

    QList<QString> ReadFromFile();

    void WriteToFile(QList<QString> str_lines, int digit_num[]);

    void SetFileName(QString file);

    void SetLable(QString name_1);


private slots:
    void on_btn_determine_clicked();

    void on_btn_cencel_clicked();


private:
    Ui::delete_commodity *ui;
    QString filename;
    password p;
};

#endif // DELETE_COMMODITY_H
