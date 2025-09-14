/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *func_color_button;
    QPushButton *obst_color_button;

    void setupUi(QDialog *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QString::fromUtf8("Settings"));
        Settings->resize(700, 300);
        Settings->setMinimumSize(QSize(700, 300));
        Settings->setMaximumSize(QSize(700, 300));
        Settings->setStyleSheet(QString::fromUtf8("#Settings{\n"
"border-image: url(:/background/background2.jpg);\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(Settings);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(Settings);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 600 30pt \"URW Bookman\";\n"
"color: rgb(246, 206, 206);"));
        label->setAlignment(Qt::AlignCenter);
        label->setMargin(5);

        verticalLayout_2->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 60);
        func_color_button = new QPushButton(Settings);
        func_color_button->setObjectName(QString::fromUtf8("func_color_button"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(3);
        sizePolicy.setVerticalStretch(3);
        sizePolicy.setHeightForWidth(func_color_button->sizePolicy().hasHeightForWidth());
        func_color_button->setSizePolicy(sizePolicy);
        func_color_button->setMinimumSize(QSize(30, 50));
        func_color_button->setMaximumSize(QSize(300, 50));
        func_color_button->setStyleSheet(QString::fromUtf8("color:rgb(180, 72, 72);\n"
"font: 600 15pt \"URW Bookman\";\n"
"background-color:rgb(238, 148, 148);\n"
"border-radius:10px;"));

        horizontalLayout->addWidget(func_color_button);

        obst_color_button = new QPushButton(Settings);
        obst_color_button->setObjectName(QString::fromUtf8("obst_color_button"));
        sizePolicy.setHeightForWidth(obst_color_button->sizePolicy().hasHeightForWidth());
        obst_color_button->setSizePolicy(sizePolicy);
        obst_color_button->setMinimumSize(QSize(30, 50));
        obst_color_button->setMaximumSize(QSize(300, 50));
        obst_color_button->setStyleSheet(QString::fromUtf8("color:rgb(180, 72, 72);\n"
"font: 600 15pt \"URW Bookman\";\n"
"background-color:rgb(238, 148, 148);\n"
"border-radius:10px;"));

        horizontalLayout->addWidget(obst_color_button);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(Settings);

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QDialog *Settings)
    {
        Settings->setWindowTitle(QCoreApplication::translate("Settings", "MATFWars", nullptr));
        label->setText(QCoreApplication::translate("Settings", "SELECT COLOR:", nullptr));
        func_color_button->setText(QCoreApplication::translate("Settings", "FUNCTION", nullptr));
        obst_color_button->setText(QCoreApplication::translate("Settings", "OBSTACLE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
