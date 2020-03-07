#ifndef PASSWORD_H
#define PASSWORD_H

#include <QDialog>
#include <QString>
#include <Qlist>

namespace Ui {
class password;
}

class password : public QDialog
{
    Q_OBJECT

public:
    explicit password(QWidget *parent = 0);
    ~password();

    QList<QString> ReadFromFile();

    int r_ture();

    void ture_0();

    void ture_1();

    void WriteToFile();

private slots:
    void on_btn_determin_clicked();

    void on_btn_cencel_clicked();

private:
    Ui::password *ui;

    int true_passwd;
};

#endif // PASSWORD_H
