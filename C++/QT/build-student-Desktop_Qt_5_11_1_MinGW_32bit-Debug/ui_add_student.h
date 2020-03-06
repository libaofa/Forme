/********************************************************************************
** Form generated from reading UI file 'add_student.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_STUDENT_H
#define UI_ADD_STUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Add_Student
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *le_name;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *le_id;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QRadioButton *rbtn_male;
    QRadioButton *rbtn_fmale;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QComboBox *cbb_age;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QComboBox *cbb_yx;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QGridLayout *gridLayout;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btn_ok;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_cencel;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_2;
    QButtonGroup *sexGroup;
    QButtonGroup *insGroup;

    void setupUi(QDialog *Add_Student)
    {
        if (Add_Student->objectName().isEmpty())
            Add_Student->setObjectName(QStringLiteral("Add_Student"));
        Add_Student->resize(350, 480);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Add_Student->sizePolicy().hasHeightForWidth());
        Add_Student->setSizePolicy(sizePolicy);
        Add_Student->setMinimumSize(QSize(350, 480));
        Add_Student->setMaximumSize(QSize(350, 480));
        verticalLayout_2 = new QVBoxLayout(Add_Student);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(Add_Student);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QStringLiteral("font: 20pt \"Agency FB\";"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(Add_Student);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label_2);

        le_name = new QLineEdit(Add_Student);
        le_name->setObjectName(QStringLiteral("le_name"));
        le_name->setClearButtonEnabled(true);

        horizontalLayout->addWidget(le_name);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 8);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(Add_Student);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(label_3);

        le_id = new QLineEdit(Add_Student);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setClearButtonEnabled(true);

        horizontalLayout_2->addWidget(le_id);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 8);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(Add_Student);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(label_4);

        rbtn_male = new QRadioButton(Add_Student);
        sexGroup = new QButtonGroup(Add_Student);
        sexGroup->setObjectName(QStringLiteral("sexGroup"));
        sexGroup->addButton(rbtn_male);
        rbtn_male->setObjectName(QStringLiteral("rbtn_male"));

        horizontalLayout_3->addWidget(rbtn_male);

        rbtn_fmale = new QRadioButton(Add_Student);
        sexGroup->addButton(rbtn_fmale);
        rbtn_fmale->setObjectName(QStringLiteral("rbtn_fmale"));

        horizontalLayout_3->addWidget(rbtn_fmale);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 4);
        horizontalLayout_3->setStretch(2, 4);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_5 = new QLabel(Add_Student);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(label_5);

        cbb_age = new QComboBox(Add_Student);
        cbb_age->addItem(QString());
        cbb_age->addItem(QString());
        cbb_age->addItem(QString());
        cbb_age->addItem(QString());
        cbb_age->addItem(QString());
        cbb_age->addItem(QString());
        cbb_age->addItem(QString());
        cbb_age->addItem(QString());
        cbb_age->addItem(QString());
        cbb_age->addItem(QString());
        cbb_age->addItem(QString());
        cbb_age->addItem(QString());
        cbb_age->setObjectName(QStringLiteral("cbb_age"));

        horizontalLayout_6->addWidget(cbb_age);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 4);
        horizontalLayout_6->setStretch(2, 4);

        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_6 = new QLabel(Add_Student);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(label_6);

        cbb_yx = new QComboBox(Add_Student);
        cbb_yx->addItem(QString());
        cbb_yx->addItem(QString());
        cbb_yx->addItem(QString());
        cbb_yx->addItem(QString());
        cbb_yx->setObjectName(QStringLiteral("cbb_yx"));

        horizontalLayout_7->addWidget(cbb_yx);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        horizontalLayout_7->setStretch(0, 1);
        horizontalLayout_7->setStretch(1, 4);
        horizontalLayout_7->setStretch(2, 4);

        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_7 = new QLabel(Add_Student);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(label_7);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        checkBox = new QCheckBox(Add_Student);
        insGroup = new QButtonGroup(Add_Student);
        insGroup->setObjectName(QStringLiteral("insGroup"));
        insGroup->setExclusive(false);
        insGroup->addButton(checkBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout->addWidget(checkBox, 0, 0, 1, 1);

        checkBox_2 = new QCheckBox(Add_Student);
        insGroup->addButton(checkBox_2);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        gridLayout->addWidget(checkBox_2, 0, 1, 1, 1);

        checkBox_3 = new QCheckBox(Add_Student);
        insGroup->addButton(checkBox_3);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));

        gridLayout->addWidget(checkBox_3, 1, 0, 1, 1);

        checkBox_4 = new QCheckBox(Add_Student);
        insGroup->addButton(checkBox_4);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));

        gridLayout->addWidget(checkBox_4, 1, 1, 1, 1);


        horizontalLayout_5->addLayout(gridLayout);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 8);

        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        btn_ok = new QPushButton(Add_Student);
        btn_ok->setObjectName(QStringLiteral("btn_ok"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btn_ok->sizePolicy().hasHeightForWidth());
        btn_ok->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(btn_ok);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        btn_cencel = new QPushButton(Add_Student);
        btn_cencel->setObjectName(QStringLiteral("btn_cencel"));

        horizontalLayout_4->addWidget(btn_cencel);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 1);
        horizontalLayout_4->setStretch(2, 5);
        horizontalLayout_4->setStretch(3, 1);
        horizontalLayout_4->setStretch(4, 1);

        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Add_Student);

        QMetaObject::connectSlotsByName(Add_Student);
    } // setupUi

    void retranslateUi(QDialog *Add_Student)
    {
        Add_Student->setWindowTitle(QApplication::translate("Add_Student", "\346\267\273\345\212\240\345\255\246\347\224\237", nullptr));
        label->setText(QApplication::translate("Add_Student", "\346\267\273\345\212\240\345\255\246\347\224\237", nullptr));
        label_2->setText(QApplication::translate("Add_Student", "\345\247\223\345\220\215:", nullptr));
        le_name->setPlaceholderText(QApplication::translate("Add_Student", "\350\257\267\350\276\223\345\205\245\345\247\223\345\220\215", nullptr));
        label_3->setText(QApplication::translate("Add_Student", "\345\255\246\345\217\267:", nullptr));
        le_id->setPlaceholderText(QApplication::translate("Add_Student", "\350\257\267\350\276\223\345\205\245\345\255\246\345\217\267(\346\234\200\345\260\22110\344\275\215)", nullptr));
        label_4->setText(QApplication::translate("Add_Student", "\346\200\247\345\210\253:", nullptr));
        rbtn_male->setText(QApplication::translate("Add_Student", "\347\224\267", nullptr));
        rbtn_fmale->setText(QApplication::translate("Add_Student", "\345\245\263", nullptr));
        label_5->setText(QApplication::translate("Add_Student", "\345\271\264\351\276\204:", nullptr));
        cbb_age->setItemText(0, QApplication::translate("Add_Student", "18", nullptr));
        cbb_age->setItemText(1, QApplication::translate("Add_Student", "19", nullptr));
        cbb_age->setItemText(2, QApplication::translate("Add_Student", "20", nullptr));
        cbb_age->setItemText(3, QApplication::translate("Add_Student", "21", nullptr));
        cbb_age->setItemText(4, QApplication::translate("Add_Student", "22", nullptr));
        cbb_age->setItemText(5, QApplication::translate("Add_Student", "23", nullptr));
        cbb_age->setItemText(6, QApplication::translate("Add_Student", "24", nullptr));
        cbb_age->setItemText(7, QApplication::translate("Add_Student", "25", nullptr));
        cbb_age->setItemText(8, QApplication::translate("Add_Student", "26", nullptr));
        cbb_age->setItemText(9, QApplication::translate("Add_Student", "27", nullptr));
        cbb_age->setItemText(10, QApplication::translate("Add_Student", "28", nullptr));
        cbb_age->setItemText(11, QApplication::translate("Add_Student", "29", nullptr));

        label_6->setText(QApplication::translate("Add_Student", "\351\231\242\347\263\273:", nullptr));
        cbb_yx->setItemText(0, QApplication::translate("Add_Student", "\350\256\241\347\256\227\346\234\272\345\255\246\351\231\242", nullptr));
        cbb_yx->setItemText(1, QApplication::translate("Add_Student", "\345\244\226\345\233\275\350\257\255\345\255\246\351\231\242", nullptr));
        cbb_yx->setItemText(2, QApplication::translate("Add_Student", "\345\267\245\345\225\206\347\256\241\347\220\206\345\255\246\351\231\242", nullptr));
        cbb_yx->setItemText(3, QApplication::translate("Add_Student", "\346\261\211\350\257\255\350\250\200\346\226\207\345\255\246\351\231\242", nullptr));

        label_7->setText(QApplication::translate("Add_Student", "\345\205\264\350\266\243:", nullptr));
        checkBox->setText(QApplication::translate("Add_Student", "\347\257\256\347\220\203", nullptr));
        checkBox_2->setText(QApplication::translate("Add_Student", "\346\216\222\347\220\203", nullptr));
        checkBox_3->setText(QApplication::translate("Add_Student", "\350\266\263\347\220\203", nullptr));
        checkBox_4->setText(QApplication::translate("Add_Student", "\347\276\275\346\257\233\347\220\203", nullptr));
        btn_ok->setText(QApplication::translate("Add_Student", "\347\241\256\345\256\232", nullptr));
        btn_cencel->setText(QApplication::translate("Add_Student", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Add_Student: public Ui_Add_Student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_STUDENT_H
