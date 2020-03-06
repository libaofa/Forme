/********************************************************************************
** Form generated from reading UI file 'query.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERY_H
#define UI_QUERY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_query
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *cbb_method;
    QLineEdit *le_cnt;
    QPushButton *btn_search;
    QTableView *tableView;

    void setupUi(QDialog *query)
    {
        if (query->objectName().isEmpty())
            query->setObjectName(QStringLiteral("query"));
        query->resize(650, 450);
        query->setMinimumSize(QSize(650, 450));
        query->setMaximumSize(QSize(650, 450));
        verticalLayout = new QVBoxLayout(query);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        cbb_method = new QComboBox(query);
        cbb_method->addItem(QString());
        cbb_method->addItem(QString());
        cbb_method->addItem(QString());
        cbb_method->addItem(QString());
        cbb_method->setObjectName(QStringLiteral("cbb_method"));

        horizontalLayout->addWidget(cbb_method);

        le_cnt = new QLineEdit(query);
        le_cnt->setObjectName(QStringLiteral("le_cnt"));

        horizontalLayout->addWidget(le_cnt);

        btn_search = new QPushButton(query);
        btn_search->setObjectName(QStringLiteral("btn_search"));

        horizontalLayout->addWidget(btn_search);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 8);
        horizontalLayout->setStretch(2, 3);

        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(query);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);


        retranslateUi(query);

        QMetaObject::connectSlotsByName(query);
    } // setupUi

    void retranslateUi(QDialog *query)
    {
        query->setWindowTitle(QApplication::translate("query", "Dialog", nullptr));
        cbb_method->setItemText(0, QApplication::translate("query", "\346\214\211\345\247\223\345\220\215\346\237\245\350\257\242", nullptr));
        cbb_method->setItemText(1, QApplication::translate("query", "\346\214\211\345\255\246\345\217\267\346\237\245\350\257\242", nullptr));
        cbb_method->setItemText(2, QApplication::translate("query", "\346\214\211\351\231\242\347\263\273\346\237\245\350\257\242", nullptr));
        cbb_method->setItemText(3, QApplication::translate("query", "\346\230\276\347\244\272\346\211\200\346\234\211", nullptr));

        btn_search->setText(QApplication::translate("query", "\346\220\234\347\264\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class query: public Ui_query {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERY_H
