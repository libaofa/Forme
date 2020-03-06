#include "add_student.h"
#include "ui_add_student.h"
#include <QString>
//#include <QDebug>
#include <QMessageBox>
#include <QPushButton>
#include <QList>
#include <QAbstractButton>
#include <QCheckBox>
#include <QFile>
#include <QTextStream>
#include <QIODevice>

Add_Student::Add_Student(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add_Student)
{
    ui->setupUi(this);
    this->ui->rbtn_male->setChecked(true);
}

Add_Student::~Add_Student()
{
    delete ui;
}

void Add_Student::on_btn_ok_clicked()
{
    QString name = this->ui->le_name->text();
    QString id = this->ui->le_id->text();
    QString sex = this->ui->sexGroup->checkedButton()->text();


    QList<QAbstractButton *> ins_list = this->ui->insGroup->buttons();
    QString ins;
    int i = 0;
    for (i = 0; i < ins_list.length(); i++)
    {
        QAbstractButton * che  = ins_list.at(i);
        if(che->isChecked())
        {
            ins += che->text();
            ins += ' ';
        }
    }
    //ins = ins.mid(0,ins.length()-1);
    ins = ins.trimmed();

    QString age = this->ui->cbb_age->currentText();
    QString dev = this->ui->cbb_yx->currentText();

    QString content = "姓名:\t" + name + '\n' + "学号:\t" + id + '\n'+ "年龄" + sex +
            "年龄:\t" + age + '\n' + '\n' + "院系:\t" + dev + '\n' + "兴趣:\t" + ins;
    QString cnt = name + ' ' + id + ' ' + sex + ' ' + age + ' ' + dev + ' '  + ins + '\n';
    if(name.length() < 1 || id.length() < 1 || ins.length() < 1)
    {
        QMessageBox::critical(this, "错误", "信息填写不完整", "确定");
    }
    else
    {
        int ret = QMessageBox::information(this,"请确认信息", content, "确认", "取消");
        if (0 == ret)
        {
            chearUserInterface();
            writeToFile(cnt);
        }
    }

}

void Add_Student::chearUserInterface()
{
    this->ui->le_name->setText("");
    this->ui->le_id->setText("");
    this->ui->rbtn_male->setChecked(true);
    this->ui->cbb_age->setCurrentIndex(0);
    this->ui->cbb_yx->setCurrentIndex(0);
    QList<QAbstractButton *> ins_list = this->ui->insGroup->buttons();
    int i = 0;
    for(i = 0 ; i < ins_list.length(); i++)
    {
        QAbstractButton * box = ins_list.at(i);
        box->setChecked(false);
    }
    this->ui->le_name->setFocus();
}

void Add_Student::writeToFile(QString cnt)
{
    QFile file("stu.txt");
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

void Add_Student::on_btn_cencel_clicked()
{
    this->close();
}
