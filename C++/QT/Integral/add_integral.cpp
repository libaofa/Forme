#include "add_integral.h"
#include "ui_add_integral.h"
#include <QString>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QDebug>

add_integral::add_integral(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_integral)
{
    ui->setupUi(this);
}

add_integral::~add_integral()
{
    delete ui;
}

void add_integral::on_btn_determin_clicked()
{
    QString name = this->ui->le_name->text();
    QString phone = this->ui->le_phone->text();

    if(name.length() < 1 || name.length() > 15 || phone.length() != 11)
    {
        QMessageBox::critical(this, "错误", "请保持信息完整并保证姓名不超过15个字符、电话为11个字符", "确定");
    }
    else
    {
        if(ReadFromFile() == -1)
        {
            QMessageBox::critical(this, "错误", "文件打开失败", "确定");
        }

        QString content = "姓名:\t" + name + "\n电话:\t" + phone;
        QString cnt = name + ' ' + phone + " 0" + '\n';
        int flag = 1;
        int i = 0;

        for (i = 0; i < str_lines.length(); i++)
        {
            QString line = str_lines.at(i);
            line = line.trimmed();
            QStringList subs = line.split(' ');
            if(phone == subs.at(1))
            {
                QMessageBox::critical(this, "错误", "此电话号已被注册", "确定");
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        {
            int ret = QMessageBox::information(this, "提示", content, "确定", "取消");
            if(ret == 0)
            {
                WriteToFile(cnt);
                this->ui->le_name->setText("");
                this->ui->le_phone->setText("");
            }
            QMessageBox::information(this, "提示", "添加成功, 请退出此页后点击搜索按键查看", "确定");
        }
    }
}

void add_integral::WriteToFile(QString cnt)
{
    QFile file("member.txt");
    if(!file.open(QIODevice::Append | QIODevice::Text))
    {
        if(!file.open(QIODevice::WriteOnly | QIODevice::Text))
        {
            QMessageBox::critical(this, "错误", "文件打开失败，信息未保存!", "确定");
            return ;
        }
    }

    QTextStream out(&file);
    out<<cnt;
}

void add_integral::on_btn_cencel_clicked()
{
    this->close();
}

int add_integral::ReadFromFile()
{
    QFile file("member.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
            return -1;
        return -1;
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

    return 0;
}
