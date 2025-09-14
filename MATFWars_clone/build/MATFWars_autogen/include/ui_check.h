/********************************************************************************
** Form generated from reading UI file 'check.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECK_H
#define UI_CHECK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Check
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *sure_label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *yes_check_button;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *no_check_button;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *Check)
    {
        if (Check->objectName().isEmpty())
            Check->setObjectName(QString::fromUtf8("Check"));
        Check->resize(700, 300);
        Check->setMinimumSize(QSize(700, 300));
        Check->setMaximumSize(QSize(700, 300));
        Check->setStyleSheet(QString::fromUtf8("#Check{\n"
"	border-image: url(:/background/background2.jpg);\n"
"}"));
        verticalLayout = new QVBoxLayout(Check);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        sure_label = new QLabel(Check);
        sure_label->setObjectName(QString::fromUtf8("sure_label"));
        sure_label->setStyleSheet(QString::fromUtf8("font: 600 35pt \"URW Bookman\";\n"
"color: rgb(246, 206, 206);"));
        sure_label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(sure_label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, -1, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        yes_check_button = new QPushButton(Check);
        yes_check_button->setObjectName(QString::fromUtf8("yes_check_button"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(3);
        sizePolicy.setVerticalStretch(3);
        sizePolicy.setHeightForWidth(yes_check_button->sizePolicy().hasHeightForWidth());
        yes_check_button->setSizePolicy(sizePolicy);
        yes_check_button->setMinimumSize(QSize(30, 50));
        yes_check_button->setMaximumSize(QSize(300, 50));
        yes_check_button->setStyleSheet(QString::fromUtf8("color:rgb(180, 72, 72);\n"
"font: 600 25pt \"URW Bookman\";\n"
"background-color: rgb(238,148,148);\n"
"border-radius:10px;"));

        horizontalLayout->addWidget(yes_check_button);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        no_check_button = new QPushButton(Check);
        no_check_button->setObjectName(QString::fromUtf8("no_check_button"));
        sizePolicy.setHeightForWidth(no_check_button->sizePolicy().hasHeightForWidth());
        no_check_button->setSizePolicy(sizePolicy);
        no_check_button->setMinimumSize(QSize(30, 50));
        no_check_button->setMaximumSize(QSize(300, 50));
        no_check_button->setStyleSheet(QString::fromUtf8("color:rgb(180, 72, 72);\n"
"font: 600 25pt \"URW Bookman\";\n"
"background-color: rgb(238,148,148);\n"
"border-radius:10px;"));

        horizontalLayout->addWidget(no_check_button);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(Check);

        QMetaObject::connectSlotsByName(Check);
    } // setupUi

    void retranslateUi(QDialog *Check)
    {
        Check->setWindowTitle(QCoreApplication::translate("Check", "MATFWars", nullptr));
        sure_label->setText(QCoreApplication::translate("Check", "ARE YOU SURE?", nullptr));
        yes_check_button->setText(QCoreApplication::translate("Check", "YES", nullptr));
        no_check_button->setText(QCoreApplication::translate("Check", "NO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Check: public Ui_Check {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECK_H
