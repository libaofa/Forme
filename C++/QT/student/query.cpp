#include "query.h"
#include "ui_query.h"
#include <QTextStream>
#include <QMessageBox>
#include <QStringList>
#include <QDebug>



query::query(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::query)
{
    ui->setupUi(this);
//    if(readFromFile() == -1)
//    {
//        QMessageBox::critical(this, "错误", "文件打开失败", "确定");
//        this->close();
//    }
    this->model = new QStandardItemModel;

    clear();

    //this->ui->tableView->setColumnWidth(0,100);

    this->ui->tableView->setModel(model);
}

query::~query()
{
    delete ui;
}


int query::readFromFile()
{
    QFile file("stu.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        return -1;
    }

    QTextStream in(&file);

    while(!in.atEnd())
    {
        QString line = in.readLine();
        qDebug() << line;
        str_lines.append(line);
    }

    file.close();

    return 0;
}

void query::on_btn_search_clicked()
{

    clear();

    int index = this->ui->cbb_method->currentIndex();
    QString cnt = this->ui->le_cnt->text();
    doQuery(index, cnt);
}

void query::clear()
{
    this->model->clear();

    this->model->setHorizontalHeaderItem(0, new QStandardItem("姓名"));
    this->model->setHorizontalHeaderItem(1, new QStandardItem("学号"));
    this->model->setHorizontalHeaderItem(2, new QStandardItem("性别"));
    this->model->setHorizontalHeaderItem(3, new QStandardItem("年龄"));
    this->model->setHorizontalHeaderItem(4, new QStandardItem("院系"));
    this->model->setHorizontalHeaderItem(5, new QStandardItem("兴趣"));
}

void query::clear_str()
{
    ;
}

void query::doQuery(int index, QString cnt)
{
    int i = 0;
    int row = 0;
    for(i = 0; i < str_lines.length(); i++)
    {
        QString line = str_lines.at(i);
        line = line.trimmed();
        QStringList subs = line.split(' ');
        switch (index) {
        case 0:
            if(cnt == subs.at(0))
            {
                display(row++, subs);
                //qDebug() << subs;
            }
            break;
        case 1:
            if(cnt == subs.at(1))
            {
                display(row++, subs);
                //qDebug() << subs;
            }
            break;
        case 2:
            if(cnt == subs.at(4))
            {
                display(row++, subs);
                //qDebug() << subs;
            }
            break;
        case 3:
            display(row++, subs);
            break;
        default:
            break;
        }
    }
    str_lines.clear();
}

void query::display(int row, QStringList subs)
{
    int i = 0;
    for(i = 0; i < 5; i++)
    {
        this->model->setItem(row, i, new QStandardItem(subs.at(i)));
    }
    QString ins;
    for(i = 5; i < subs.length(); i++)
    {
        ins += subs.at(i) + " ";
    }
    ins = ins.trimmed();
    this->model->setItem(row, 5, new QStandardItem(ins));
}
