#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //str_change.clear();
    str_nochange.clear();
    if(ReadFromFile() == -1)
    {
        QMessageBox::critical(this, "错误", "文件打开失败", "确定");
    }

    this->model = new QStandardItemModel;
    this->ui->tableView->setModel(model);
    clear();
    int i = 0;
    int row = 0;
    for(i = 0; i < str_lines.length(); i++)
    {
        QString line = str_lines.at(i);
        line = line.trimmed();
        QStringList subs = line.split(' ');
        display(row++, subs);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_add_commodity_clicked()
{
    this->c.show();
}

int MainWindow::ReadFromFile()
{
    QFile file("commodity.txt");
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

void MainWindow::on_btn_search_clicked()
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
            display(row++, subs);
            //qDebug() << subs;

            break;
        case 1:
            if(text == subs.at(0))
            {
                display(row++, subs);
                //qDebug() << subs;

            }
            break;
        case 2:
            if("果蔬" == subs.at(2))
            {
                display(row++, subs);
                //qDebug() << subs;

            }
            break;
        case 3:
            if("食品" == subs.at(2))
            {
                display(row++, subs);
                //qDebug() << subs;
            }
            break;
        case 4:
            if("烟酒" == subs.at(2))
            {
                display(row++, subs);
                //qDebug() << subs;
            }
            break;
        case 5:
            if("饮品" == subs.at(2))
            {
                display(row++, subs);
                //qDebug() << subs;
            }
            break;
        case 6:
            if("日用" == subs.at(2))
            {
                display(row++, subs);
                //qDebug() << subs;
            }
            break;
        case 7:
            if("粮油" == subs.at(2))
            {
                display(row++, subs);
                //qDebug() << subs;
            }
            break;
        case 8:
            if(subs.at(2) != "果蔬" && subs.at(2) != "食品" && subs.at(2) != "烟酒" && subs.at(2) != "饮品"
                     && subs.at(2) != "日用" && subs.at(2) != "粮油")
            {
                display(row++, subs);
                //qDebug() << subs;
            }
        default:
            line = line + '\n';
            this->str_nochange.append(line);
            break;
        }
    }
    //this->ui->le_text->setText("");
}

void MainWindow::clear()
{
    this->model->clear();
    this->model->setHorizontalHeaderItem(0, new QStandardItem("商品名称"));
    this->model->setHorizontalHeaderItem(1, new QStandardItem("商品价格"));
    this->model->setHorizontalHeaderItem(2, new QStandardItem("商品属性"));
    this->ui->tableView->setColumnWidth(0,175);
    this->ui->tableView->setColumnWidth(1,175);
    this->ui->tableView->setColumnWidth(2,175);

    //this->str_change.clear();
    this->str_nochange.clear();
}

void MainWindow::display(int row, QStringList subs)
{
    int i = 0;
    for(i = 0; i < subs.length(); i++)
    {
        this->model->setItem(row, i, new QStandardItem(subs.at(i)));
    }
}

void MainWindow::on_btn_save_clicked()
{
        int count = this->model->rowCount();
        int i = 0;
        QList<QString> cnt;
        for (i = 0; i < count; i++)
        {
            QStandardItem * name = this->model->item(i,0);
            QStandardItem * price = this->model->item(i,1);
            QStandardItem * attribute = this->model->item(i,2);
            QString str;

            if(name->text()[0] == ' ' || name->text().length() < 1)
            {
                str += "其他 ";
            }
            else
            {
                str += name->text();
                str += ' ';
            }
            if(price->text()[0] == ' ' || price->text().length() < 1)
            {
                str += "其他 ";
            }
            else
            {
                str += price->text();
                str += ' ';
            }
            if(attribute->text()[0] == ' ' || attribute->text().length() < 1)
            {
                str += "其他\n";
            }
            else
            {
                str += attribute->text();
                str += '\n';
            }

            cnt.append(str);
        }
        cnt.append(str_nochange);
        WriteToFile(cnt);
}

void MainWindow::WriteToFile(QList<QString> cnt)
{
    int ret = QMessageBox::information(this, "提示", "是否保存修改", "确定", "取消");
    if(ret == 0)
    {
        password *passwd = new password;
        //this->p.show();
        passwd->exec();
        if(passwd->r_ture() == 1)
        {
            QFile file("commodity.txt");
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

void MainWindow::on_btn_delete_clicked()
{
    this->d.SetLable("删除商品");
    this->d.SetFileName("commodity.txt");
    this->d.show();
}


void MainWindow::on_btn_query_m_triggered()
{
    this->q.show();
}
