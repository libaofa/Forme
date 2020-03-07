#ifndef COMMODITY_H
#define COMMODITY_H

#include <QDialog>

namespace Ui {
class commodity;
}

class commodity : public QDialog
{
    Q_OBJECT

public:
    explicit commodity(QWidget *parent = 0);
    ~commodity();

private slots:
    void on_btn_determine_clicked();
    void WriteToFile(QString cnt);

    void on_btn_cencel_clicked();

private:
    Ui::commodity *ui;
};

#endif // COMMODITY_H
