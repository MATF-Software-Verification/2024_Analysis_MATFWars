/********************************************************************************
** Form generated from reading UI file 'winner.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINNER_H
#define UI_WINNER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Winner
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QLabel *winner_label;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *quit_winner_button;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QDialog *Winner)
    {
        if (Winner->objectName().isEmpty())
            Winner->setObjectName(QString::fromUtf8("Winner"));
        Winner->resize(700, 300);
        Winner->setMinimumSize(QSize(700, 300));
        Winner->setMaximumSize(QSize(700, 300));
        Winner->setStyleSheet(QString::fromUtf8("#Winner{\n"
"	background-image: url(:/background/background2.jpg);\n"
"	\n"
"	border-image: url(:/background/confetti.png);\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(Winner);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(20, 20, 20, 20);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label = new QLabel(Winner);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(470, 50));
        label->setMaximumSize(QSize(112, 50));
        label->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"font: 600 17pt \"URW Bookman\";\n"
"color:rgb(180, 72, 72);\n"
"background-color:rgb(238, 148, 148);"));
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(false);

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 3, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        winner_label = new QLabel(Winner);
        winner_label->setObjectName(QString::fromUtf8("winner_label"));
        winner_label->setStyleSheet(QString::fromUtf8("font: 600 55pt \"URW Bookman\";\n"
"color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(238,148,148, 255), stop:0.497326 rgba(180, 72, 72, 147), stop:1 rgba(238,148,148, 255));"));
        winner_label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(winner_label);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        quit_winner_button = new QPushButton(Winner);
        quit_winner_button->setObjectName(QString::fromUtf8("quit_winner_button"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(3);
        sizePolicy.setVerticalStretch(3);
        sizePolicy.setHeightForWidth(quit_winner_button->sizePolicy().hasHeightForWidth());
        quit_winner_button->setSizePolicy(sizePolicy);
        quit_winner_button->setMinimumSize(QSize(30, 50));
        quit_winner_button->setMaximumSize(QSize(300, 50));
        quit_winner_button->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"font: 600 25pt \"URW Bookman\";\n"
"color:rgb(180, 72, 72);\n"
"background-color:rgb(238, 148, 148);"));

        horizontalLayout->addWidget(quit_winner_button);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_4);


        retranslateUi(Winner);

        QMetaObject::connectSlotsByName(Winner);
    } // setupUi

    void retranslateUi(QDialog *Winner)
    {
        Winner->setWindowTitle(QCoreApplication::translate("Winner", "MATFWars", nullptr));
        label->setText(QString());
        winner_label->setText(QCoreApplication::translate("Winner", "WINNER!", nullptr));
        quit_winner_button->setText(QCoreApplication::translate("Winner", "QUIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Winner: public Ui_Winner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINNER_H
