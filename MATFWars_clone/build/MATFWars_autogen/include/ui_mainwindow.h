/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QLabel *choose_label;
    QSpacerItem *horizontalSpacer_5;
    QToolButton *tool_button;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *war_game_button;
    QSpacerItem *horizontalSpacer;
    QPushButton *guess_game_button;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *leaderboard_main_button;
    QSpacerItem *horizontalSpacer_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(900, 600);
        MainWindow->setMinimumSize(QSize(900, 600));
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        MainWindow->setStyleSheet(QString::fromUtf8("#MainWindow{\n"
"background-image: url(:/background/background1.png);\n"
"\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("#centralwidget{\n"
"background-image: url(:/background/background1.png);\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(70, 30, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        choose_label = new QLabel(centralwidget);
        choose_label->setObjectName(QString::fromUtf8("choose_label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(3);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(choose_label->sizePolicy().hasHeightForWidth());
        choose_label->setSizePolicy(sizePolicy);
        choose_label->setMinimumSize(QSize(0, 0));
        choose_label->setMaximumSize(QSize(1000, 400));
        QFont font;
        font.setFamilies({QString::fromUtf8("URW Bookman")});
        font.setPointSize(50);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        font.setStyleStrategy(QFont::PreferDefault);
        choose_label->setFont(font);
        choose_label->setFocusPolicy(Qt::NoFocus);
        choose_label->setAutoFillBackground(false);
        choose_label->setStyleSheet(QString::fromUtf8("font: 600 50pt \"URW Bookman\";\n"
"selection-color: rgb(180, 72, 72);\n"
"padding:10px;\n"
"border:10px inset ;\n"
"border-color: rgb(79, 43, 43);\n"
"border-radius:10px"));
        choose_label->setFrameShape(QFrame::NoFrame);
        choose_label->setFrameShadow(QFrame::Raised);
        choose_label->setLineWidth(0);
        choose_label->setMidLineWidth(0);
        choose_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(choose_label);

        horizontalSpacer_5 = new QSpacerItem(70, 30, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        tool_button = new QToolButton(centralwidget);
        tool_button->setObjectName(QString::fromUtf8("tool_button"));
        tool_button->setMinimumSize(QSize(80, 80));
        tool_button->setStyleSheet(QString::fromUtf8("border-image: url(:/background/settings.png);\n"
"border-radius:20px;\n"
""));

        horizontalLayout_3->addWidget(tool_button);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(50, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        war_game_button = new QPushButton(centralwidget);
        war_game_button->setObjectName(QString::fromUtf8("war_game_button"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(3);
        sizePolicy1.setVerticalStretch(3);
        sizePolicy1.setHeightForWidth(war_game_button->sizePolicy().hasHeightForWidth());
        war_game_button->setSizePolicy(sizePolicy1);
        war_game_button->setMinimumSize(QSize(50, 30));
        war_game_button->setMaximumSize(QSize(500, 300));
        war_game_button->setStyleSheet(QString::fromUtf8("border-image: url(:/background/btn1.jpg);\n"
"font: 600 35pt \"URW Bookman\";\n"
"border-radius:10px;\n"
"color: rgb(180, 72, 72);\n"
""));
        war_game_button->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(war_game_button);

        horizontalSpacer = new QSpacerItem(50, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        guess_game_button = new QPushButton(centralwidget);
        guess_game_button->setObjectName(QString::fromUtf8("guess_game_button"));
        guess_game_button->setEnabled(true);
        sizePolicy1.setHeightForWidth(guess_game_button->sizePolicy().hasHeightForWidth());
        guess_game_button->setSizePolicy(sizePolicy1);
        guess_game_button->setMinimumSize(QSize(50, 30));
        guess_game_button->setMaximumSize(QSize(500, 300));
        guess_game_button->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"color: rgb(180, 72, 72);\n"
"border-image: url(:/background/btn2.jpg);\n"
"font: 600 30pt \"URW Bookman\";\n"
""));

        horizontalLayout->addWidget(guess_game_button);

        horizontalSpacer_3 = new QSpacerItem(50, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(50, 50, -1, -1);
        horizontalSpacer_6 = new QSpacerItem(2, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        leaderboard_main_button = new QPushButton(centralwidget);
        leaderboard_main_button->setObjectName(QString::fromUtf8("leaderboard_main_button"));
        sizePolicy.setHeightForWidth(leaderboard_main_button->sizePolicy().hasHeightForWidth());
        leaderboard_main_button->setSizePolicy(sizePolicy);
        leaderboard_main_button->setMinimumSize(QSize(0, 0));
        leaderboard_main_button->setMaximumSize(QSize(1200, 130));
        leaderboard_main_button->setStyleSheet(QString::fromUtf8("color:rgb(180, 72, 72);\n"
"border-radius:15px;\n"
"font: 600 35pt \"URW Bookman\";\n"
"color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(245, 224, 176, 255), stop:0.09 rgba(246, 189, 237, 255), stop:0.14 rgba(194, 207, 246, 255), stop:0.19 rgba(184, 160, 168, 255), stop:0.25 rgba(171, 186, 248, 255), stop:0.32 rgba(243, 248, 224, 255), stop:0.385 rgba(249, 162, 183, 255), stop:0.47 rgba(100, 115, 124, 255), stop:0.58 rgba(251, 205, 202, 255), stop:0.65 rgba(170, 128, 185, 255), stop:0.75 rgba(252, 222, 204, 255), stop:0.805 rgba(206, 122, 218, 255), stop:0.86 rgba(254, 223, 175, 255), stop:0.91 rgba(254, 236, 244, 255), stop:1 rgba(255, 191, 221, 255));\n"
"border:8px solid rgb(79, 43, 43);"));

        horizontalLayout_2->addWidget(leaderboard_main_button);

        horizontalSpacer_7 = new QSpacerItem(60, 40, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);


        verticalLayout_2->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 900, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MATFWars", nullptr));
        choose_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700; color:#783d3d;\">CHOOSE A GAME:</span></p></body></html>", nullptr));
        tool_button->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        war_game_button->setText(QCoreApplication::translate("MainWindow", "War game", nullptr));
        guess_game_button->setText(QCoreApplication::translate("MainWindow", "Guessing game", nullptr));
        leaderboard_main_button->setText(QCoreApplication::translate("MainWindow", "Leaderboard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
