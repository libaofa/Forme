#include "query_member.h"
#include "ui_query_member.h"
#include <QFile>
#include <QMessageBox>
#include <QDebug>

query_member::query_member(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::query_member)
{
    ui->setupUi(this);

    this->model = new QStandardItemModel;
    this->ui->tableView->setModel(model);
    clear();

    int i = 0;
    int row = 0;
    if(ReadFromFile() == -1)
    {
        QMessageBox::critical(this, "错误", "文件打开失败", "确定");
    }
    for(i = 0; i < str_lines.length(); i++)
    {
        QString line = str_lines.at(i);
        line = line.trimmed();
        QStringList subs = line.split(' ');
        display(row++, subs);
    }
}

query_member::~query_member()
{
    delete ui;
}

void query_member::on_btn_add_clicked()
{
    this->a.show();
}

void query_member::on_btn_search_clicked()
{
    clear();
    if(ReadFromFile() == -1)
    {
        QMessageBox::critical(this, "错误", "文件打开失败", "确定");
    }
    int index = this->ui->cbb_method->currentIndex();
    QString text = this->ui->le_text->text();
    int i = 0;
    int row = 0;
    for(i = 0; i < str_lines.length(); i++)
    {
        QString line = str_lines.at(i);
        line = line.trimmed();
        QStringList subs = line.split(' ');
        switch (index) {
        case 0:
            //qDebug() << subs;
            display(row++, subs);
            break;
        case 1:
            if(text == subs.at(0))
            {
                //qDebug() << subs;
                display(row++, subs);
            }
            break;
        case 2:
            if(text == subs.at(1))
            {
                //qDebug() << subs;
                display(row++, subs);
            }
            break;
        default:
            break;
        }
    }
}

int query_member::ReadFromFile()
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

void query_member::display(int row, QStringList subs)
{
    int i = 0;
    for(i = 0; i < subs.length(); i++)
    {
        this->model->setItem(row, i, new QStandardItem(subs.at(i)));
    }
}

void query_member::clear()
{
    this->model->clear();
    this->model->setHorizontalHeaderItem(0, new QStandardItem("姓名"));
    this->model->setHorizontalHeaderItem(1, new QStandardItem("电话"));
    this->model->setHorizontalHeaderItem(2, new QStandardItem("积分"));
    this->ui->tableView->setColumnWidth(0,150);
    this->ui->tableView->setColumnWidth(1,150);
    this->ui->tableView->setColumnWidth(2,150);

    //this->str_nochange.clear();
}

void query_member::on_btn_save_clicked()
{
    int count = this->model->rowCount();
    int i = 0;
    QList<QString> cnt;
    int flag = 1;

    for (i = 0; i < count; i++)
    {
        QStandardItem * name = this->model->item(i,0);
        QStandardItem * phone = this->model->item(i,1);
        QStandardItem * integral = this->model->item(i,2);
        QString str;

        if(name->text()[0] == ' ' || name->text().length() < 1)
        {
            QMessageBox::critical(this, "错误", "保存失败,姓名不可为空", "确定");
            flag = 0;
            break;
        }
        else
        {
            str += name->text();
            str += ' ';

            if(phone->text()[0] == ' ' || phone->text().length() < 1)
            {
                QMessageBox::critical(this, "错误", "保存失败,电话应为11位数字", "确定");
                flag = 0;
                break;
            }
            else
            {
                int i1 = 0;
                for (i1 = 0; i1 < phone->text().length(); i1++)
                {
                    if(phone->text()[i1] < 48 || phone->text()[i1] > 57)
                    {
                        break;
                    }
                }
                //qDebug() << "phone:"<<i1<<phone->text().length();
                if(i1 != 11)
                {
                    QMessageBox::critical(this, "错误", "保存失败,电话应为11位数字", "确定");
                    flag = 0;
                    break;
                }
                else
                {
                    str += phone->text();
                    str += ' ';
                    flag = 1;

                    if(integral->text()[0] == ' ' || integral->text().length() < 1)
                    {
                        QMessageBox::critical(this, "错误", "保存失败,积分不可为空", "确定");
                        flag = 0;
                        break;
                    }
                    else
                    {
                        int i1 = 0;
                        for (i1 = 0; i1 < phone->text().length(); i1++)
                        {
                            if(integral->text()[i1] < 48 || integral->text()[i1] > 57)
                            {
                                break;
                            }
                        }
                        if(i1 != integral->text().length())
                        {
                            QMessageBox::critical(this, "错误", "保存失败,积分应为数字", "确定");
                            flag = 0;
                            qDebug() << "22222222";
                            break;
                        }
                        else
                        {
                            str += integral->text();
                            str += '\n';
                            flag = 1;
                        }
                    }
                }
            }
        }
        cnt.append(str);
    }
    if(flag == 1)
    {
        cnt.append(str_nochange);
        WriteToFile(cnt);
    }
}

void query_member::WriteToFile(QList<QString> cnt)
{
    int ret = QMessageBox::information(this, "提示", "是否保存修改", "确定", "取消");
    if(ret == 0)
    {
        password *passwd = new password;
        //this->p.show();
        passwd->exec();
        if(passwd->r_ture() == 1)
        {
            QFile file("member.txt");
            int i = 0;

            if(!file.open(QIODevice::WriteOnly | QIODevice::Text))
            {
                QMessageBox::critical(this, "错误", "文件打开失败，信息未保存!", "确定");
                return;
            }
            QTextStream out(&file);

            for (i = 0; i < cnt.length(); i++)
            {
                QString str = cnt.at(i);
                out<<str;
            }

            file.close();
            passwd->ture_0();
            QMessageBox::information(this, "提示", "保存成功, 请退出此页后点击搜索按键查看", "确定");
        }
        else
        {
            QMessageBox::critical(this, "错误", "密码错误，未执行保存操作", "确定");
        }
    }
}

void query_member::on_btn_delete_clicked()
{
    this->d.SetLable("删除成员");
    this->d.SetFileName("member.txt");
    this->d.show();
}
