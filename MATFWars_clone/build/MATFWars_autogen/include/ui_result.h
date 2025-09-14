/********************************************************************************
** Form generated from reading UI file 'result.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULT_H
#define UI_RESULT_H

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

class Ui_Result
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QLabel *label;
    QSpacerItem *verticalSpacer_5;
    QLabel *score_label;
    QSpacerItem *verticalSpacer_4;
    QLabel *congrats_label;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *result_lineEdit;
    QSpacerItem *horizontalSpacer;
    QPushButton *enter_result_button;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *menu_result_button;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_6;

    void setupUi(QDialog *Result)
    {
        if (Result->objectName().isEmpty())
            Result->setObjectName(QString::fromUtf8("Result"));
        Result->resize(1000, 500);
        Result->setMinimumSize(QSize(700, 300));
        Result->setMaximumSize(QSize(1000, 500));
        Result->setStyleSheet(QString::fromUtf8("#Result{\n"
"border-image: url(:/background/background2.jpg);\n"
"}"));
        verticalLayout = new QVBoxLayout(Result);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        label = new QLabel(Result);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("color: rgb(246, 206, 206);\n"
"font: 600 25pt \"URW Bookman\";\n"
""));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        verticalSpacer_5 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_5);

        score_label = new QLabel(Result);
        score_label->setObjectName(QString::fromUtf8("score_label"));
        score_label->setStyleSheet(QString::fromUtf8("color: rgb(246, 206, 206);\n"
"font: 600 25pt \"URW Bookman\";\n"
""));
        score_label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(score_label);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);

        congrats_label = new QLabel(Result);
        congrats_label->setObjectName(QString::fromUtf8("congrats_label"));
        congrats_label->setStyleSheet(QString::fromUtf8("color: rgb(246, 206, 206);\n"
"font: 600 22pt \"URW Bookman\";"));
        congrats_label->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout->addWidget(congrats_label);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_2 = new QLabel(Result);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 600 25pt \"URW Bookman\";\n"
"color: rgb(246, 206, 206);\n"
""));

        horizontalLayout->addWidget(label_2);

        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        result_lineEdit = new QLineEdit(Result);
        result_lineEdit->setObjectName(QString::fromUtf8("result_lineEdit"));
        result_lineEdit->setMinimumSize(QSize(30, 50));
        result_lineEdit->setMaximumSize(QSize(16777215, 16777215));
        result_lineEdit->setStyleSheet(QString::fromUtf8("border:5px solid;\n"
"border-color: rgb(238, 148, 148);\n"
""));

        horizontalLayout->addWidget(result_lineEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        enter_result_button = new QPushButton(Result);
        enter_result_button->setObjectName(QString::fromUtf8("enter_result_button"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(3);
        sizePolicy.setVerticalStretch(3);
        sizePolicy.setHeightForWidth(enter_result_button->sizePolicy().hasHeightForWidth());
        enter_result_button->setSizePolicy(sizePolicy);
        enter_result_button->setMinimumSize(QSize(30, 50));
        enter_result_button->setMaximumSize(QSize(300, 50));
        enter_result_button->setStyleSheet(QString::fromUtf8("color:rgb(180, 72, 72);\n"
"font: 600 25pt \"URW Bookman\";\n"
"background-color:rgb(238, 148, 148);\n"
"border-radius:10px;"));

        horizontalLayout->addWidget(enter_result_button);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        menu_result_button = new QPushButton(Result);
        menu_result_button->setObjectName(QString::fromUtf8("menu_result_button"));
        sizePolicy.setHeightForWidth(menu_result_button->sizePolicy().hasHeightForWidth());
        menu_result_button->setSizePolicy(sizePolicy);
        menu_result_button->setMinimumSize(QSize(30, 50));
        menu_result_button->setMaximumSize(QSize(300, 50));
        menu_result_button->setStyleSheet(QString::fromUtf8("color:rgb(180, 72, 72);\n"
"font: 600 25pt \"URW Bookman\";\n"
"background-color:rgb(238, 148, 148);\n"
"border-radius:10px;"));

        horizontalLayout_2->addWidget(menu_result_button);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_6 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_6);


        retranslateUi(Result);

        QMetaObject::connectSlotsByName(Result);
    } // setupUi

    void retranslateUi(QDialog *Result)
    {
        Result->setWindowTitle(QCoreApplication::translate("Result", "MATFWars", nullptr));
        label->setText(QCoreApplication::translate("Result", "YOUR SCORE:", nullptr));
        score_label->setText(QCoreApplication::translate("Result", "0", nullptr));
        congrats_label->setText(QCoreApplication::translate("Result", "Congratulations you are on the leaderboard!", nullptr));
        label_2->setText(QCoreApplication::translate("Result", "NAME:", nullptr));
        enter_result_button->setText(QCoreApplication::translate("Result", "ENTER", nullptr));
        menu_result_button->setText(QCoreApplication::translate("Result", "MENU", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Result: public Ui_Result {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULT_H
