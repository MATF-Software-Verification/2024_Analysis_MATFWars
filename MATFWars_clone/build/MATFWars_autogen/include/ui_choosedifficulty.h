/********************************************************************************
** Form generated from reading UI file 'choosedifficulty.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEDIFFICULTY_H
#define UI_CHOOSEDIFFICULTY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ChooseDifficulty
{
public:
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QRadioButton *easy_radioButton;
    QSpacerItem *horizontalSpacer_2;
    QRadioButton *hard_radioButton;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *back_difficulty_button;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *go_difficulty_button;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *ChooseDifficulty)
    {
        if (ChooseDifficulty->objectName().isEmpty())
            ChooseDifficulty->setObjectName(QString::fromUtf8("ChooseDifficulty"));
        ChooseDifficulty->resize(1000, 500);
        ChooseDifficulty->setMinimumSize(QSize(700, 300));
        ChooseDifficulty->setMaximumSize(QSize(1000, 500));
        ChooseDifficulty->setStyleSheet(QString::fromUtf8("#ChooseDifficulty{\n"
"	border-image: url(:/background/background2.jpg);\n"
"}"));
        verticalLayout_3 = new QVBoxLayout(ChooseDifficulty);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        label = new QLabel(ChooseDifficulty);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(30, 80));
        label->setStyleSheet(QString::fromUtf8("font: 600 30pt \"URW Bookman\";\n"
"color: rgb(180, 72, 72);\n"
"padding:10px;\n"
"border:10px solid;\n"
"border-radius:10px;\n"
"border-color: rgb(254, 183, 183);"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);


        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalSpacer_4 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        easy_radioButton = new QRadioButton(ChooseDifficulty);
        easy_radioButton->setObjectName(QString::fromUtf8("easy_radioButton"));
        easy_radioButton->setStyleSheet(QString::fromUtf8("font: 600 25pt \"URW Bookman\";\n"
"color: rgb(180, 72, 72);"));
        easy_radioButton->setChecked(true);

        horizontalLayout->addWidget(easy_radioButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        hard_radioButton = new QRadioButton(ChooseDifficulty);
        hard_radioButton->setObjectName(QString::fromUtf8("hard_radioButton"));
        hard_radioButton->setStyleSheet(QString::fromUtf8("font: 600 25pt \"URW Bookman\";\n"
"color: rgb(180, 72, 72);"));

        horizontalLayout->addWidget(hard_radioButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        back_difficulty_button = new QPushButton(ChooseDifficulty);
        back_difficulty_button->setObjectName(QString::fromUtf8("back_difficulty_button"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(3);
        sizePolicy.setVerticalStretch(3);
        sizePolicy.setHeightForWidth(back_difficulty_button->sizePolicy().hasHeightForWidth());
        back_difficulty_button->setSizePolicy(sizePolicy);
        back_difficulty_button->setMinimumSize(QSize(30, 50));
        back_difficulty_button->setMaximumSize(QSize(300, 50));
        back_difficulty_button->setStyleSheet(QString::fromUtf8("color:rgb(180, 72, 72);\n"
"font: 600 30pt \"URW Bookman\";\n"
"background-color: rgb(238, 148, 148);\n"
"border-radius:10px;"));

        horizontalLayout_2->addWidget(back_difficulty_button);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);

        go_difficulty_button = new QPushButton(ChooseDifficulty);
        go_difficulty_button->setObjectName(QString::fromUtf8("go_difficulty_button"));
        sizePolicy.setHeightForWidth(go_difficulty_button->sizePolicy().hasHeightForWidth());
        go_difficulty_button->setSizePolicy(sizePolicy);
        go_difficulty_button->setMinimumSize(QSize(30, 50));
        go_difficulty_button->setMaximumSize(QSize(300, 50));
        go_difficulty_button->setStyleSheet(QString::fromUtf8("color:rgb(180, 72, 72);\n"
"font: 600 30pt \"URW Bookman\";\n"
"background-color: rgb(238, 148, 148);\n"
"border-radius:10px;"));

        horizontalLayout_2->addWidget(go_difficulty_button);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);


        retranslateUi(ChooseDifficulty);

        QMetaObject::connectSlotsByName(ChooseDifficulty);
    } // setupUi

    void retranslateUi(QDialog *ChooseDifficulty)
    {
        ChooseDifficulty->setWindowTitle(QCoreApplication::translate("ChooseDifficulty", "MATFWars", nullptr));
        label->setText(QCoreApplication::translate("ChooseDifficulty", "CHOOSE DIFFICULTY:", nullptr));
        easy_radioButton->setText(QCoreApplication::translate("ChooseDifficulty", "EASY", nullptr));
        hard_radioButton->setText(QCoreApplication::translate("ChooseDifficulty", "HARD", nullptr));
        back_difficulty_button->setText(QCoreApplication::translate("ChooseDifficulty", "BACK", nullptr));
        go_difficulty_button->setText(QCoreApplication::translate("ChooseDifficulty", "GO!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChooseDifficulty: public Ui_ChooseDifficulty {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEDIFFICULTY_H
