#ifndef ADD_STUDENT_H
#define ADD_STUDENT_H

#include <QDialog>

namespace Ui {
class Add_Student;
}

class Add_Student : public QDialog
{
    Q_OBJECT

public:
    explicit Add_Student(QWidget *parent = 0);
    ~Add_Student();
    void chearUserInterface();
    void writeToFile(QString cnt);

private slots:
    void on_btn_ok_clicked();

    void on_btn_cencel_clicked();

private:
    Ui::Add_Student *ui;

    QString name;
    QString id;
};

#endif // ADD_STUDENT_H
