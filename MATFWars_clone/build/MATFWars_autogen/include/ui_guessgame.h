/********************************************************************************
** Form generated from reading UI file 'guessgame.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUESSGAME_H
#define UI_GUESSGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GuessGame
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QGraphicsView *gvCanvas;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *y_label;
    QLineEdit *leFunctionInput;
    QSpacerItem *horizontalSpacer_3;
    QLabel *score_label;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *back_guess_button;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *enter_guess_button;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QLabel *timer_label;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *GuessGame)
    {
        if (GuessGame->objectName().isEmpty())
            GuessGame->setObjectName(QString::fromUtf8("GuessGame"));
        GuessGame->resize(1276, 606);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GuessGame->sizePolicy().hasHeightForWidth());
        GuessGame->setSizePolicy(sizePolicy);
        GuessGame->setMinimumSize(QSize(900, 600));
        GuessGame->setStyleSheet(QString::fromUtf8("#GuessGame{\n"
"	background-color:rgb(79,43,43);\n"
"}"));
        verticalLayout_4 = new QVBoxLayout(GuessGame);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gvCanvas = new QGraphicsView(GuessGame);
        gvCanvas->setObjectName(QString::fromUtf8("gvCanvas"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(gvCanvas->sizePolicy().hasHeightForWidth());
        gvCanvas->setSizePolicy(sizePolicy1);
        gvCanvas->setMinimumSize(QSize(0, 450));
        gvCanvas->setStyleSheet(QString::fromUtf8("border:7px solid;\n"
"border-color: rgb(238, 148, 148);"));
        gvCanvas->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        gvCanvas->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        gvCanvas->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);

        horizontalLayout->addWidget(gvCanvas);


        verticalLayout_4->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, -1, 0, -1);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        y_label = new QLabel(GuessGame);
        y_label->setObjectName(QString::fromUtf8("y_label"));
        y_label->setStyleSheet(QString::fromUtf8("color: rgb(180, 72, 72);\n"
"font: 600 20pt \"URW Bookman\";\n"
""));

        horizontalLayout_2->addWidget(y_label);

        leFunctionInput = new QLineEdit(GuessGame);
        leFunctionInput->setObjectName(QString::fromUtf8("leFunctionInput"));
        sizePolicy1.setHeightForWidth(leFunctionInput->sizePolicy().hasHeightForWidth());
        leFunctionInput->setSizePolicy(sizePolicy1);
        leFunctionInput->setMaximumSize(QSize(16777215, 50));
        leFunctionInput->setStyleSheet(QString::fromUtf8("border:5px solid;\n"
"border-color: rgb(238, 148, 148);\n"
""));

        horizontalLayout_2->addWidget(leFunctionInput);

        horizontalSpacer_3 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        score_label = new QLabel(GuessGame);
        score_label->setObjectName(QString::fromUtf8("score_label"));
        score_label->setStyleSheet(QString::fromUtf8("color: rgb(180, 72, 72);\n"
"font: 600 20pt \"URW Bookman\";\n"
""));

        horizontalLayout_2->addWidget(score_label);

        horizontalSpacer_4 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_3->addItem(verticalSpacer_2);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_5);

        back_guess_button = new QPushButton(GuessGame);
        back_guess_button->setObjectName(QString::fromUtf8("back_guess_button"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(3);
        sizePolicy2.setVerticalStretch(3);
        sizePolicy2.setHeightForWidth(back_guess_button->sizePolicy().hasHeightForWidth());
        back_guess_button->setSizePolicy(sizePolicy2);
        back_guess_button->setMinimumSize(QSize(30, 50));
        back_guess_button->setMaximumSize(QSize(800, 60));
        back_guess_button->setStyleSheet(QString::fromUtf8("color:rgb(180, 72, 72);\n"
"font: 600 17pt \"URW Bookman\";\n"
"border-radius:10px;\n"
"border:7px solid;\n"
"border-color: rgb(238, 148, 148);\n"
"background-color: rgb(238, 148, 148);\n"
""));

        horizontalLayout_11->addWidget(back_guess_button);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_6);

        enter_guess_button = new QPushButton(GuessGame);
        enter_guess_button->setObjectName(QString::fromUtf8("enter_guess_button"));
        sizePolicy2.setHeightForWidth(enter_guess_button->sizePolicy().hasHeightForWidth());
        enter_guess_button->setSizePolicy(sizePolicy2);
        enter_guess_button->setMinimumSize(QSize(30, 50));
        enter_guess_button->setMaximumSize(QSize(800, 60));
        enter_guess_button->setStyleSheet(QString::fromUtf8("color:rgb(180, 72, 72);\n"
"font: 600 17pt \"URW Bookman\";\n"
"border-radius:10px;\n"
"border:7px solid;\n"
"border-color: rgb(238, 148, 148);\n"
"background-color: rgb(238, 148, 148);"));

        horizontalLayout_11->addWidget(enter_guess_button);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_7);


        verticalLayout_3->addLayout(horizontalLayout_11);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_3);


        horizontalLayout_4->addLayout(verticalLayout_3);

        horizontalSpacer = new QSpacerItem(40, 40, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        timer_label = new QLabel(GuessGame);
        timer_label->setObjectName(QString::fromUtf8("timer_label"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(timer_label->sizePolicy().hasHeightForWidth());
        timer_label->setSizePolicy(sizePolicy3);
        timer_label->setMinimumSize(QSize(40, 0));
        timer_label->setStyleSheet(QString::fromUtf8("color:rgb(180, 72, 72);\n"
"font: 600 21pt \"URW Bookman\";"));
        timer_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(timer_label);

        horizontalSpacer_2 = new QSpacerItem(40, 40, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout_4);


        retranslateUi(GuessGame);

        QMetaObject::connectSlotsByName(GuessGame);
    } // setupUi

    void retranslateUi(QDialog *GuessGame)
    {
        GuessGame->setWindowTitle(QCoreApplication::translate("GuessGame", "MATFWars", nullptr));
        y_label->setText(QCoreApplication::translate("GuessGame", "y = ", nullptr));
        score_label->setText(QCoreApplication::translate("GuessGame", "0", nullptr));
        back_guess_button->setText(QCoreApplication::translate("GuessGame", "BACK", nullptr));
        enter_guess_button->setText(QCoreApplication::translate("GuessGame", "ENTER", nullptr));
        timer_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GuessGame: public Ui_GuessGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUESSGAME_H
