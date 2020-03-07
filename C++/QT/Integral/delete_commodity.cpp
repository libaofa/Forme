#include "delete_commodity.h"
#include "ui_delete_commodity.h"
#include <QMessageBox>
#include <QDebug>

delete_commodity::delete_commodity(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::delete_commodity)
{
    ui->setupUi(this);
}

delete_commodity::~delete_commodity()
{
    delete ui;
}

void delete_commodity::on_btn_determine_clicked()
{
    QString num = this->ui->le_num->text();

    if( num.length() < 1)
    {
        QMessageBox::critical(this, "错误", "未填入信息", "确定");
    }
    else
    {
        num = num.trimmed();
        QStringList str = num.split(' ');
        int i = 0;
        int j = 0;
        int flag = 1;
        int digit_num[10]= {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};

        for (i = 0; i < str.length(); i++)
        {
            QString digit = str.at(i);
            for(j =0; j < digit.length(); j++)
            {
                if(digit[j] < 48 || digit[j] > 57)
                {
                    flag = 0;
                    break;
                }
            }

            digit_num[i] = digit.toInt();
            //qDebug() << digit_num;
        }
        if(flag == 0)
        {
            QMessageBox::critical(this, "错误", "请输入数字", "确定");
            this->ui->le_num->setText("");
        }
        else
        {

            QList<QString> str_lines = ReadFromFile();

            WriteToFile(str_lines, digit_num);
        }
    }
}

QList<QString> delete_commodity::ReadFromFile()
{
    QList<QString> str_lines;
    QFile file(filename);
    //qDebug() << filename;
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
            return str_lines;
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

void delete_commodity::WriteToFile(QList<QString> str_lines, int digit_num[])
{
    int i = 0;
    int j = 0;
    QString line_list;
    QString out_list;
    int count = 0;

    for (i = 1; i <= str_lines.length(); i++)
    {
        for (j = 0; j < 10; j++)
        {
            if(i == digit_num[j])
            {
                line_list += str_lines.at(i-1);
                line_list += '\n';
                digit_num[j] = -1;
                count++;
                break;
            }
        }
        if(j == 10)
        {
            out_list += str_lines.at(i-1);
            out_list += '\n';
        }
    }

    if(count == 0)
    {
        QMessageBox::critical(this, "错误", "未找到成员" , "确定");
    }
    else
    {
        int ret = QMessageBox::information(this, "是否删除", line_list , "确定", "取消");
        if(ret == 0)
        {
            password *passwd = new password;
            //this->p.show();
            passwd->exec();
            if(passwd->r_ture() == 1)
            {
                QFile file(filename);
                if(!file.open(QIODevice::WriteOnly | QIODevice::Text))
                {
                    QMessageBox::critical(this, "错误", "文件打开失败，信息未保存!", "确定");
                    return;
                }
                QTextStream out(&file);
                out<<out_list;
                this->ui->le_num->setText("");

                file.close();
                line_list = "";
                passwd->ture_0();
                QMessageBox::information(this, "提示", "删除成功, 请退出此页后点击搜索按键查看", "确定");
            }
            else
            {
                QMessageBox::critical(this, "错误", "密码错误，未执行删除操作", "确定");
            }
        }
    }
}

void delete_commodity::on_btn_cencel_clicked()
{
    this->ui->le_num->setText("");
    this->close();
}

void delete_commodity::SetFileName(QString file)
{
    this->filename = file;
}

void delete_commodity::SetLable(QString name_1)
{
    this->ui->la_1->setText(name_1);
}
