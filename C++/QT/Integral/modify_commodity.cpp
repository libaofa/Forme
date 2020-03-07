#include "modify_commodity.h"
#include "ui_modify_commodity.h"

modify_commodity::modify_commodity(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modify_commodity)
{
    ui->setupUi(this);
}

modify_commodity::~modify_commodity()
{
    delete ui;
}
