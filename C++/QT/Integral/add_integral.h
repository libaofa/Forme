#ifndef ADD_INTEGRAL_H
#define ADD_INTEGRAL_H

#include <QDialog>
#include <QString>
#include <Qlist>

namespace Ui {
class add_integral;
}

class add_integral : public QDialog
{
    Q_OBJECT

public:
    explicit add_integral(QWidget *parent = 0);
    ~add_integral();

    void WriteToFile(QString cnt);

    int ReadFromFile();

private slots:
    void on_btn_determin_clicked();

    void on_btn_cencel_clicked();

private:
    Ui::add_integral *ui;

    QList<QString> str_lines;
};

#endif // ADD_INTEGRAL_H
