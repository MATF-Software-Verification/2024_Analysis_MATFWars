/********************************************************************************
** Form generated from reading UI file 'create.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATE_H
#define UI_CREATE_H

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

class Ui_Create
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *name_label;
    QSpacerItem *horizontalSpacer;
    QLineEdit *name_lineEdit;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *port_label;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *port_lineEdit;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *back_pop1_button;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *create_pop1_button;
    QSpacerItem *horizontalSpacer_9;

    void setupUi(QDialog *Create)
    {
        if (Create->objectName().isEmpty())
            Create->setObjectName(QString::fromUtf8("Create"));
        Create->resize(709, 307);
        Create->setMinimumSize(QSize(700, 300));
        Create->setMaximumSize(QSize(1000, 500));
        Create->setStyleSheet(QString::fromUtf8("#Create{\n"
"	border-image: url(:/background/background2.jpg);\n"
"}"));
        verticalLayout = new QVBoxLayout(Create);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        name_label = new QLabel(Create);
        name_label->setObjectName(QString::fromUtf8("name_label"));
        name_label->setMinimumSize(QSize(112, 50));
        name_label->setMaximumSize(QSize(112, 50));
        name_label->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"font: 600 20pt \"URW Bookman\";\n"
"color:rgb(180, 72, 72);\n"
"background-color:rgb(238, 148, 148);"));

        horizontalLayout->addWidget(name_label);

        horizontalSpacer = new QSpacerItem(36, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        name_lineEdit = new QLineEdit(Create);
        name_lineEdit->setObjectName(QString::fromUtf8("name_lineEdit"));
        name_lineEdit->setMinimumSize(QSize(30, 50));
        name_lineEdit->setStyleSheet(QString::fromUtf8("border:5px solid;\n"
"border-color: rgb(238, 148, 148);"));

        horizontalLayout->addWidget(name_lineEdit);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        port_label = new QLabel(Create);
        port_label->setObjectName(QString::fromUtf8("port_label"));
        port_label->setMinimumSize(QSize(112, 50));
        port_label->setMaximumSize(QSize(112, 50));
        port_label->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"font: 600 20pt \"URW Bookman\";\n"
"color:rgb(180, 72, 72);\n"
"background-color:rgb(238, 148, 148);\n"
"\n"
"\n"
"\n"
"\n"
""));

        horizontalLayout_2->addWidget(port_label);

        horizontalSpacer_5 = new QSpacerItem(36, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        port_lineEdit = new QLineEdit(Create);
        port_lineEdit->setObjectName(QString::fromUtf8("port_lineEdit"));
        port_lineEdit->setMinimumSize(QSize(30, 50));
        port_lineEdit->setStyleSheet(QString::fromUtf8("border:5px solid;\n"
"border-color: rgb(238, 148, 148);"));

        horizontalLayout_2->addWidget(port_lineEdit);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_8 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);

        back_pop1_button = new QPushButton(Create);
        back_pop1_button->setObjectName(QString::fromUtf8("back_pop1_button"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(3);
        sizePolicy.setVerticalStretch(3);
        sizePolicy.setHeightForWidth(back_pop1_button->sizePolicy().hasHeightForWidth());
        back_pop1_button->setSizePolicy(sizePolicy);
        back_pop1_button->setMinimumSize(QSize(30, 50));
        back_pop1_button->setMaximumSize(QSize(300, 50));
        back_pop1_button->setStyleSheet(QString::fromUtf8("color:rgb(180, 72, 72);\n"
"font: 600 25pt \"URW Bookman\";\n"
"background-color:rgb(238, 148, 148);\n"
"border-radius:10px;"));

        horizontalLayout_3->addWidget(back_pop1_button);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        create_pop1_button = new QPushButton(Create);
        create_pop1_button->setObjectName(QString::fromUtf8("create_pop1_button"));
        sizePolicy.setHeightForWidth(create_pop1_button->sizePolicy().hasHeightForWidth());
        create_pop1_button->setSizePolicy(sizePolicy);
        create_pop1_button->setMinimumSize(QSize(30, 50));
        create_pop1_button->setMaximumSize(QSize(300, 50));
        create_pop1_button->setStyleSheet(QString::fromUtf8("color:rgb(180, 72, 72);\n"
"font: 600 25pt \"URW Bookman\";\n"
"background-color: rgb(238, 148, 148);\n"
"border-radius:10px;"));

        horizontalLayout_3->addWidget(create_pop1_button);

        horizontalSpacer_9 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_9);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(Create);

        QMetaObject::connectSlotsByName(Create);
    } // setupUi

    void retranslateUi(QDialog *Create)
    {
        Create->setWindowTitle(QCoreApplication::translate("Create", "MATFWars", nullptr));
        name_label->setText(QCoreApplication::translate("Create", " NAME: ", nullptr));
        port_label->setText(QCoreApplication::translate("Create", " PORT:", nullptr));
        back_pop1_button->setText(QCoreApplication::translate("Create", "BACK", nullptr));
        create_pop1_button->setText(QCoreApplication::translate("Create", "CREATE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Create: public Ui_Create {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATE_H
