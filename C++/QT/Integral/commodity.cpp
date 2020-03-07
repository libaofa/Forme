#include "commodity.h"
#include "ui_commodity.h"
#include <QString>
#include <QMessageBox>
#include <QAbstractButton>
#include <QList>
#include <QFile>
#include <QTextStream>
#include <QDebug>

commodity::commodity(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::commodity)
{
    ui->setupUi(this);
}

commodity::~commodity()
{
    delete ui;
}

void commodity::on_btn_determine_clicked()
{
    QString name = this->ui->le_name->text();
    QString price = this->ui->le_price->text();
    QList<QAbstractButton *> in_list = this->ui->attributeGroup->buttons();
    QString attribute;
    QAbstractButton * che;
    int i = 0;
    for (i = 0; i < in_list.length(); i++)
    {
        che  = in_list.at(i);
        if(che->isChecked())
        {
            attribute += che->text();
        }
    }

    QString content = "商品名称:\t" + name + "\n商品价格:\t" + price + "元\n商品属性:\t" + attribute;

    QString cnt = name + ' ' + price + ' ' + attribute + '\n';

    //qDebug() << name.length();
    //qDebug() << price.length();

    if(name.length() < 1 || name.length() > 15 || price.length() < 1 || price.length() > 5 || attribute < 1)
    {
        QMessageBox::critical(this, "错误", "信息填写不完整或超出范围", "确定");
    }
    else
    {
        int ret = QMessageBox::information(this,"请确认信息", content, "确认", "取消");
        if(ret == 0)
        {
            WriteToFile(cnt);
            this->ui->le_name->setText("");
            this->ui->le_price->setText("");
            che->setChecked(false);
        }
        QMessageBox::information(this, "提示", "添加成功, 请退出此页后点击搜索按键查看", "确定");
    }
}

void commodity::WriteToFile(QString cnt)
{
    QFile file("commodity.txt");
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

void commodity::on_btn_cencel_clicked()
{
    this->close();
}
