#include "password.h"
#include "ui_password.h"
#include <QFile>
#include <QMessageBox>
#include <QTextStream>

password::password(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::password)
{
    ui->setupUi(this);
    true_passwd = 0;
}

password::~password()
{
    delete ui;
}

void password::on_btn_determin_clicked()
{
    QList<QString> str_lines = ReadFromFile();
    QString id = this->ui->le_id->text();
    QString passwd = this->ui->le_passwd->text();


    if(id != str_lines.at(0) || passwd != str_lines.at(1))
    {
        QString content = "账号或密码错误";
        QMessageBox::critical(this, "错误", content, "确定");
    }
    else
    {
        QMessageBox::information(this, "提示", "验证成功", "确定");
        true_passwd = 1;
        this->ui->le_id->setText("");
        this->ui->le_passwd->setText("");
        this->close();
    }
}

void password::on_btn_cencel_clicked()
{
    this->close();
}

QList<QString> password::ReadFromFile()
{
    QList<QString> str_lines;
    QFile file("mima.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        WriteToFile();
        str_lines.append("123");
        str_lines.append("123456");
        return str_lines;
    }

    QTextStream in(&file);

    str_lines.clear();

    while(!in.atEnd())
    {
        QString line = in.readLine();
        //qDebug() << line;
        str_lines.append(line);
    }

    file.close();
    return str_lines;
}

int password::r_ture()
{
    return this->true_passwd;
}

void password::ture_0()
{
    this->true_passwd = 0;
}

void password::ture_1()
{
    this->true_passwd = 1;
}

void password::WriteToFile()
{
            QFile file("mima.txt");
            int i = 0;

            if(!file.open(QIODevice::WriteOnly | QIODevice::Text))
            {
                QMessageBox::critical(this, "错误", "文件打开失败，信息未保存!", "确定");
                return;
            }
            QTextStream out(&file);


            out<<"123\n";
            out<<"123456\n";


            file.close();

}
