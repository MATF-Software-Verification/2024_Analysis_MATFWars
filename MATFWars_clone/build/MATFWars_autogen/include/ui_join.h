/********************************************************************************
** Form generated from reading UI file 'join.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOIN_H
#define UI_JOIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Join
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *name_label;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *name_lineEdit;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *port_label;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *port_lineEdit;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_7;
    QLabel *ip_label;
    QSpacerItem *horizontalSpacer_8;
    QLineEdit *ip_lineEdit;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *back_pop2_button;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *join_pop2_button;
    QSpacerItem *horizontalSpacer_12;

    void setupUi(QDialog *Join)
    {
        if (Join->objectName().isEmpty())
            Join->setObjectName(QString::fromUtf8("Join"));
        Join->resize(700, 319);
        Join->setMinimumSize(QSize(700, 300));
        Join->setMaximumSize(QSize(1000, 500));
        Join->setStyleSheet(QString::fromUtf8("#Join{\n"
"	border-image: url(:/background/background2.jpg);\n"
"}"));
        verticalLayout = new QVBoxLayout(Join);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        name_label = new QLabel(Join);
        name_label->setObjectName(QString::fromUtf8("name_label"));
        name_label->setMinimumSize(QSize(112, 50));
        name_label->setMaximumSize(QSize(112, 50));
        name_label->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"font: 600 20pt \"URW Bookman\";\n"
"color:rgb(180, 72, 72);\n"
"background-color:rgb(238, 148, 148);"));

        horizontalLayout->addWidget(name_label);

        horizontalSpacer_2 = new QSpacerItem(36, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        name_lineEdit = new QLineEdit(Join);
        name_lineEdit->setObjectName(QString::fromUtf8("name_lineEdit"));
        name_lineEdit->setMinimumSize(QSize(30, 50));
        name_lineEdit->setStyleSheet(QString::fromUtf8("border:5px solid;\n"
"border-color: rgb(238, 148, 148);\n"
""));

        horizontalLayout->addWidget(name_lineEdit);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        port_label = new QLabel(Join);
        port_label->setObjectName(QString::fromUtf8("port_label"));
        port_label->setMinimumSize(QSize(112, 50));
        port_label->setMaximumSize(QSize(112, 50));
        port_label->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"font: 600 20pt \"URW Bookman\";\n"
"color:rgb(180, 72, 72);\n"
"background-color:rgb(238, 148, 148);"));

        horizontalLayout_2->addWidget(port_label);

        horizontalSpacer_5 = new QSpacerItem(36, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        port_lineEdit = new QLineEdit(Join);
        port_lineEdit->setObjectName(QString::fromUtf8("port_lineEdit"));
        port_lineEdit->setMinimumSize(QSize(30, 50));
        port_lineEdit->setStyleSheet(QString::fromUtf8("border:5px solid;\n"
"border-color: rgb(238, 148, 148);\n"
""));

        horizontalLayout_2->addWidget(port_lineEdit);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        ip_label = new QLabel(Join);
        ip_label->setObjectName(QString::fromUtf8("ip_label"));
        ip_label->setMinimumSize(QSize(112, 50));
        ip_label->setMaximumSize(QSize(112, 50));
        ip_label->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"font: 600 20pt \"URW Bookman\";\n"
"color:rgb(180, 72, 72);\n"
"background-color:rgb(238, 148, 148);\n"
""));
        ip_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(ip_label);

        horizontalSpacer_8 = new QSpacerItem(36, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);

        ip_lineEdit = new QLineEdit(Join);
        ip_lineEdit->setObjectName(QString::fromUtf8("ip_lineEdit"));
        ip_lineEdit->setMinimumSize(QSize(30, 50));
        ip_lineEdit->setStyleSheet(QString::fromUtf8("border:5px solid;\n"
"border-color: rgb(238, 148, 148);"));

        horizontalLayout_3->addWidget(ip_lineEdit);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_9);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_10 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_10);

        back_pop2_button = new QPushButton(Join);
        back_pop2_button->setObjectName(QString::fromUtf8("back_pop2_button"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(3);
        sizePolicy.setVerticalStretch(3);
        sizePolicy.setHeightForWidth(back_pop2_button->sizePolicy().hasHeightForWidth());
        back_pop2_button->setSizePolicy(sizePolicy);
        back_pop2_button->setMinimumSize(QSize(30, 50));
        back_pop2_button->setMaximumSize(QSize(300, 50));
        back_pop2_button->setStyleSheet(QString::fromUtf8("color:rgb(180, 72, 72);\n"
"font: 600 25pt \"URW Bookman\";\n"
"background-color: rgb(238, 148, 148);\n"
"border-radius:10px;"));

        horizontalLayout_4->addWidget(back_pop2_button);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_11);

        join_pop2_button = new QPushButton(Join);
        join_pop2_button->setObjectName(QString::fromUtf8("join_pop2_button"));
        sizePolicy.setHeightForWidth(join_pop2_button->sizePolicy().hasHeightForWidth());
        join_pop2_button->setSizePolicy(sizePolicy);
        join_pop2_button->setMinimumSize(QSize(30, 50));
        join_pop2_button->setMaximumSize(QSize(300, 50));
        join_pop2_button->setStyleSheet(QString::fromUtf8("color:rgb(180, 72, 72);\n"
"font: 600 25pt \"URW Bookman\";\n"
"background-color: rgb(238, 148, 148);\n"
"border-radius:10px;"));

        horizontalLayout_4->addWidget(join_pop2_button);

        horizontalSpacer_12 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_12);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(Join);

        QMetaObject::connectSlotsByName(Join);
    } // setupUi

    void retranslateUi(QDialog *Join)
    {
        Join->setWindowTitle(QCoreApplication::translate("Join", "MATFWars", nullptr));
        name_label->setText(QCoreApplication::translate("Join", " NAME: ", nullptr));
        port_label->setText(QCoreApplication::translate("Join", " PORT: ", nullptr));
        ip_label->setText(QCoreApplication::translate("Join", " IP: ", nullptr));
        back_pop2_button->setText(QCoreApplication::translate("Join", "BACK", nullptr));
        join_pop2_button->setText(QCoreApplication::translate("Join", "JOIN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Join: public Ui_Join {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOIN_H
