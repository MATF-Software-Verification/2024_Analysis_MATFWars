/********************************************************************************
** Form generated from reading UI file 'warchoose.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARCHOOSE_H
#define UI_WARCHOOSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_WarChoose
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *create_choose_button;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *join_choose_button;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *back_choose_button;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QDialog *WarChoose)
    {
        if (WarChoose->objectName().isEmpty())
            WarChoose->setObjectName(QString::fromUtf8("WarChoose"));
        WarChoose->resize(700, 343);
        WarChoose->setMinimumSize(QSize(700, 300));
        WarChoose->setMaximumSize(QSize(1000, 500));
        WarChoose->setAutoFillBackground(false);
        WarChoose->setStyleSheet(QString::fromUtf8("#WarChoose{\n"
"background-image: url(:/background/background2.jpg);\n"
"}"));
        verticalLayout = new QVBoxLayout(WarChoose);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        create_choose_button = new QPushButton(WarChoose);
        create_choose_button->setObjectName(QString::fromUtf8("create_choose_button"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(3);
        sizePolicy.setVerticalStretch(3);
        sizePolicy.setHeightForWidth(create_choose_button->sizePolicy().hasHeightForWidth());
        create_choose_button->setSizePolicy(sizePolicy);
        create_choose_button->setMinimumSize(QSize(30, 50));
        create_choose_button->setMaximumSize(QSize(300, 50));
        QFont font;
        font.setFamilies({QString::fromUtf8("URW Bookman")});
        font.setPointSize(25);
        font.setBold(true);
        font.setItalic(false);
        create_choose_button->setFont(font);
        create_choose_button->setAutoFillBackground(false);
        create_choose_button->setStyleSheet(QString::fromUtf8("color: rgb(180, 72, 72);\n"
"font: 600 25pt \"URW Bookman\";\n"
"border:5px solid;\n"
"border-radius:10px;\n"
"border-color: rgb(238, 148, 148);\n"
"background-color: rgb(238, 148, 148);\n"
""));

        horizontalLayout->addWidget(create_choose_button);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        join_choose_button = new QPushButton(WarChoose);
        join_choose_button->setObjectName(QString::fromUtf8("join_choose_button"));
        sizePolicy.setHeightForWidth(join_choose_button->sizePolicy().hasHeightForWidth());
        join_choose_button->setSizePolicy(sizePolicy);
        join_choose_button->setMinimumSize(QSize(30, 50));
        join_choose_button->setMaximumSize(QSize(300, 50));
        join_choose_button->setStyleSheet(QString::fromUtf8("color: rgb(180, 72, 72);\n"
"font: 600 25pt \"URW Bookman\";\n"
"border:5px solid;\n"
"border-radius:10px;\n"
"border-color: rgb(238, 148, 148);\n"
"background-color:  rgb(238, 148, 148);\n"
""));

        horizontalLayout->addWidget(join_choose_button);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, -1, -1);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        back_choose_button = new QPushButton(WarChoose);
        back_choose_button->setObjectName(QString::fromUtf8("back_choose_button"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(back_choose_button->sizePolicy().hasHeightForWidth());
        back_choose_button->setSizePolicy(sizePolicy1);
        back_choose_button->setMinimumSize(QSize(30, 50));
        back_choose_button->setMaximumSize(QSize(300, 50));
        back_choose_button->setStyleSheet(QString::fromUtf8("color: rgb(180, 72, 72);\n"
"font: 600 25pt \"URW Bookman\";\n"
"border:5px solid;\n"
"border-radius:10px;\n"
"border-color: rgb(238, 148, 148);\n"
"background-color:  rgb(238, 148, 148);"));

        horizontalLayout_2->addWidget(back_choose_button);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(WarChoose);

        QMetaObject::connectSlotsByName(WarChoose);
    } // setupUi

    void retranslateUi(QDialog *WarChoose)
    {
        WarChoose->setWindowTitle(QCoreApplication::translate("WarChoose", "MATFWars", nullptr));
        create_choose_button->setText(QCoreApplication::translate("WarChoose", "CREATE", nullptr));
        join_choose_button->setText(QCoreApplication::translate("WarChoose", "JOIN", nullptr));
        back_choose_button->setText(QCoreApplication::translate("WarChoose", "BACK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WarChoose: public Ui_WarChoose {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARCHOOSE_H
