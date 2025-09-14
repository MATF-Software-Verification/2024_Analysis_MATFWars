/********************************************************************************
** Form generated from reading UI file 'leaderboard.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEADERBOARD_H
#define UI_LEADERBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Leaderboard
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *leaderboard_label;
    QSpacerItem *verticalSpacer;
    QTextEdit *leaderboard_textEdit;

    void setupUi(QDialog *Leaderboard)
    {
        if (Leaderboard->objectName().isEmpty())
            Leaderboard->setObjectName(QString::fromUtf8("Leaderboard"));
        Leaderboard->resize(595, 440);
        Leaderboard->setMinimumSize(QSize(595, 440));
        Leaderboard->setMaximumSize(QSize(595, 440));
        Leaderboard->setStyleSheet(QString::fromUtf8("#Leaderboard{\n"
"background-image: url(:/background/background2.jpg);\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(Leaderboard);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(20, 0, 20, 20);
        verticalSpacer_2 = new QSpacerItem(10, 15, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_2);

        leaderboard_label = new QLabel(Leaderboard);
        leaderboard_label->setObjectName(QString::fromUtf8("leaderboard_label"));
        leaderboard_label->setStyleSheet(QString::fromUtf8("font: 600 30pt \"URW Bookman\";\n"
"color: rgb(246, 206, 206);"));
        leaderboard_label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(leaderboard_label);

        verticalSpacer = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer);

        leaderboard_textEdit = new QTextEdit(Leaderboard);
        leaderboard_textEdit->setObjectName(QString::fromUtf8("leaderboard_textEdit"));
        leaderboard_textEdit->setTabletTracking(false);
        leaderboard_textEdit->setStyleSheet(QString::fromUtf8(" font: 600 15pt \"URW Bookman\";\n"
"background-color: rgb(238, 148, 148);\n"
""));
        leaderboard_textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        leaderboard_textEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        leaderboard_textEdit->setAutoFormatting(QTextEdit::AutoNone);
        leaderboard_textEdit->setTabChangesFocus(false);
        leaderboard_textEdit->setLineWrapMode(QTextEdit::WidgetWidth);
        leaderboard_textEdit->setTextInteractionFlags(Qt::TextBrowserInteraction);

        verticalLayout->addWidget(leaderboard_textEdit);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Leaderboard);

        QMetaObject::connectSlotsByName(Leaderboard);
    } // setupUi

    void retranslateUi(QDialog *Leaderboard)
    {
        Leaderboard->setWindowTitle(QCoreApplication::translate("Leaderboard", "MATFWars", nullptr));
        leaderboard_label->setText(QCoreApplication::translate("Leaderboard", "<html><head/><body><p>Leaderboard</p></body></html>", nullptr));
        leaderboard_textEdit->setMarkdown(QString());
    } // retranslateUi

};

namespace Ui {
    class Leaderboard: public Ui_Leaderboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEADERBOARD_H
