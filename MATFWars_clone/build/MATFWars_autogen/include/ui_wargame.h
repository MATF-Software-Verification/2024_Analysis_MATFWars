/********************************************************************************
** Form generated from reading UI file 'wargame.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARGAME_H
#define UI_WARGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_WarGame
{
public:
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QGraphicsView *gvCanvas;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_8;
    QLabel *y_label;
    QLineEdit *leFunctionInput;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *fire_war_button;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *help_war_button;
    QSpacerItem *horizontalSpacer;
    QPushButton *quit_war_button;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *chat_textEdit;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *chat_lineEdit;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *chat_send_button;

    void setupUi(QDialog *WarGame)
    {
        if (WarGame->objectName().isEmpty())
            WarGame->setObjectName(QString::fromUtf8("WarGame"));
        WarGame->resize(1098, 650);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WarGame->sizePolicy().hasHeightForWidth());
        WarGame->setSizePolicy(sizePolicy);
        WarGame->setMinimumSize(QSize(1098, 650));
        WarGame->setMaximumSize(QSize(1098, 650));
        WarGame->setStyleSheet(QString::fromUtf8("#WarGame{\n"
"	background-color: rgb(79,43,43);\n"
"}"));
        horizontalLayout_4 = new QHBoxLayout(WarGame);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gvCanvas = new QGraphicsView(WarGame);
        gvCanvas->setObjectName(QString::fromUtf8("gvCanvas"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(gvCanvas->sizePolicy().hasHeightForWidth());
        gvCanvas->setSizePolicy(sizePolicy1);
        gvCanvas->setBaseSize(QSize(0, 0));
        gvCanvas->setStyleSheet(QString::fromUtf8(""));
        gvCanvas->setLineWidth(1);

        verticalLayout->addWidget(gvCanvas);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_8 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);

        y_label = new QLabel(WarGame);
        y_label->setObjectName(QString::fromUtf8("y_label"));
        y_label->setStyleSheet(QString::fromUtf8("color: rgb(180, 72, 72);\n"
"font: 600 20pt \"URW Bookman\";\n"
""));

        horizontalLayout->addWidget(y_label);

        leFunctionInput = new QLineEdit(WarGame);
        leFunctionInput->setObjectName(QString::fromUtf8("leFunctionInput"));
        leFunctionInput->setMinimumSize(QSize(30, 40));
        leFunctionInput->setStyleSheet(QString::fromUtf8("border:5px solid;\n"
"border-color: rgb(238, 148, 148);\n"
"background-color: white;\n"
"color: black;"));

        horizontalLayout->addWidget(leFunctionInput);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        fire_war_button = new QPushButton(WarGame);
        fire_war_button->setObjectName(QString::fromUtf8("fire_war_button"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(3);
        sizePolicy2.setVerticalStretch(3);
        sizePolicy2.setHeightForWidth(fire_war_button->sizePolicy().hasHeightForWidth());
        fire_war_button->setSizePolicy(sizePolicy2);
        fire_war_button->setMinimumSize(QSize(30, 50));
        fire_war_button->setMaximumSize(QSize(300, 50));
        fire_war_button->setStyleSheet(QString::fromUtf8("color:rgb(180, 72, 72);\n"
"font: 600 25pt \"URW Bookman\";\n"
"border-radius:10px;\n"
"border:7px solid rgb(238, 148, 148);\n"
"background-color: rgb(238, 148, 148);"));

        horizontalLayout->addWidget(fire_war_button);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(63, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        help_war_button = new QPushButton(WarGame);
        help_war_button->setObjectName(QString::fromUtf8("help_war_button"));
        sizePolicy2.setHeightForWidth(help_war_button->sizePolicy().hasHeightForWidth());
        help_war_button->setSizePolicy(sizePolicy2);
        help_war_button->setMinimumSize(QSize(30, 50));
        help_war_button->setMaximumSize(QSize(300, 50));
        help_war_button->setStyleSheet(QString::fromUtf8("color:rgb(180, 72, 72);\n"
"font: 600 25pt \"URW Bookman\";\n"
"border-radius:10px;\n"
"border:7px solid rgb(238, 148, 148);\n"
"background-color: rgb(238, 148, 148);"));

        horizontalLayout_2->addWidget(help_war_button);

        horizontalSpacer = new QSpacerItem(95, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        quit_war_button = new QPushButton(WarGame);
        quit_war_button->setObjectName(QString::fromUtf8("quit_war_button"));
        sizePolicy2.setHeightForWidth(quit_war_button->sizePolicy().hasHeightForWidth());
        quit_war_button->setSizePolicy(sizePolicy2);
        quit_war_button->setMinimumSize(QSize(30, 50));
        quit_war_button->setMaximumSize(QSize(300, 50));
        quit_war_button->setStyleSheet(QString::fromUtf8("color:rgb(180, 72, 72);\n"
"font: 600 25pt \"URW Bookman\";\n"
"border-radius:10px;\n"
"border:7px solid rgb(238, 148, 148);\n"
"background-color: rgb(238, 148, 148);"));

        horizontalLayout_2->addWidget(quit_war_button);

        horizontalSpacer_3 = new QSpacerItem(36, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        chat_textEdit = new QTextEdit(WarGame);
        chat_textEdit->setObjectName(QString::fromUtf8("chat_textEdit"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(chat_textEdit->sizePolicy().hasHeightForWidth());
        chat_textEdit->setSizePolicy(sizePolicy3);
        chat_textEdit->setAutoFillBackground(false);
        chat_textEdit->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: black;"));

        verticalLayout_2->addWidget(chat_textEdit);

        verticalSpacer_4 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        chat_lineEdit = new QLineEdit(WarGame);
        chat_lineEdit->setObjectName(QString::fromUtf8("chat_lineEdit"));
        sizePolicy.setHeightForWidth(chat_lineEdit->sizePolicy().hasHeightForWidth());
        chat_lineEdit->setSizePolicy(sizePolicy);
        chat_lineEdit->setStyleSheet(QString::fromUtf8("border:10px solid;\n"
"border-color: white;\n"
"background-color:white;\n"
"color: black;\n"
""));

        horizontalLayout_6->addWidget(chat_lineEdit);

        horizontalSpacer_6 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        chat_send_button = new QPushButton(WarGame);
        chat_send_button->setObjectName(QString::fromUtf8("chat_send_button"));
        sizePolicy.setHeightForWidth(chat_send_button->sizePolicy().hasHeightForWidth());
        chat_send_button->setSizePolicy(sizePolicy);
        chat_send_button->setMinimumSize(QSize(30, 30));
        chat_send_button->setMaximumSize(QSize(75, 70));
        QPalette palette;
        QBrush brush(QColor(38, 38, 38, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(246, 97, 81, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(38, 38, 38, 128));
        brush2.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        chat_send_button->setPalette(palette);
        chat_send_button->setAutoFillBackground(false);
        chat_send_button->setStyleSheet(QString::fromUtf8("border-radius:15px;\n"
"border-image: url(:/background/chat_background.jpg);"));
        chat_send_button->setCheckable(false);

        horizontalLayout_6->addWidget(chat_send_button);


        verticalLayout_2->addLayout(horizontalLayout_6);


        horizontalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(WarGame);

        QMetaObject::connectSlotsByName(WarGame);
    } // setupUi

    void retranslateUi(QDialog *WarGame)
    {
        WarGame->setWindowTitle(QCoreApplication::translate("WarGame", "MATFWars", nullptr));
        y_label->setText(QCoreApplication::translate("WarGame", "y = ", nullptr));
        fire_war_button->setText(QCoreApplication::translate("WarGame", "FIRE", nullptr));
        help_war_button->setText(QCoreApplication::translate("WarGame", "HELP", nullptr));
        quit_war_button->setText(QCoreApplication::translate("WarGame", "QUIT", nullptr));
        chat_send_button->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WarGame: public Ui_WarGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARGAME_H
