/********************************************************************************
** Form generated from reading UI file 'help.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELP_H
#define UI_HELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Help
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;

    void setupUi(QDialog *Help)
    {
        if (Help->objectName().isEmpty())
            Help->setObjectName(QString::fromUtf8("Help"));
        Help->resize(398, 368);
        Help->setStyleSheet(QString::fromUtf8("#Help{\n"
"	background-color: rgb(73, 10, 10);\n"
"}"));
        verticalLayout = new QVBoxLayout(Help);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit = new QTextEdit(Help);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setStyleSheet(QString::fromUtf8("#textEdit{\n"
"background-color: rgb(73, 10, 10);\n"
"	color: rgb(230, 160, 160);\n"
"font: 600 11pt \"URW Bookman\";\n"
"}"));
        textEdit->setReadOnly(true);

        verticalLayout->addWidget(textEdit);


        retranslateUi(Help);

        QMetaObject::connectSlotsByName(Help);
    } // setupUi

    void retranslateUi(QDialog *Help)
    {
        Help->setWindowTitle(QCoreApplication::translate("Help", "Dialog", nullptr));
        textEdit->setHtml(QCoreApplication::translate("Help", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'URW Bookman'; font-size:11pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Liberation Serif','serif'; font-size:14pt; font-weight:700; background-color:transparent;\">Function Syntax</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px; background-color:transparent;\"><span style=\" font-family:'Ubuntu'; font-weight:700;\">Operators </span></p>\n"
"<ul style=\"mar"
                        "gin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 2;\">\n"
"<li style=\" font-family:'Ubuntu'; font-weight:400; background-color:transparent;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">+ </span></li>\n"
"<li style=\" font-family:'Ubuntu'; font-weight:400; background-color:transparent;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">- </span></li>\n"
"<li style=\" font-family:'Ubuntu'; font-weight:400; background-color:transparent;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">/ </span></li>\n"
"<li style=\" font-family:'Ubuntu'; font-weight:400; background-color:transparent;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:"
                        "0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">* </span></li>\n"
"<li style=\" font-family:'Ubuntu'; font-weight:400; background-color:transparent;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">^ </span></li></ul>\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px; background-color:transparent;\"><span style=\" font-family:'Ubuntu'; font-weight:700;\">Functions </span></p>\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 2;\">\n"
"<li style=\" font-family:'Ubuntu'; font-weight:400; background-color:transparent;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">sqrt() </span></li>\n"
"<li style=\" font-family:'Ubuntu'; font-weight:400; backgro"
                        "und-color:transparent;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">log() </span></li>\n"
"<li style=\" font-family:'Ubuntu'; font-weight:400; background-color:transparent;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">ln() </span></li>\n"
"<li style=\" font-family:'Ubuntu'; font-weight:400; background-color:transparent;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">abs() </span></li>\n"
"<li style=\" font-family:'Ubuntu'; font-weight:400; background-color:transparent;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">sin() </span></li>\n"
"<li style=\" font-family:'Ubuntu'; font-weigh"
                        "t:400; background-color:transparent;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">cos() </span></li>\n"
"<li style=\" font-family:'Ubuntu'; font-weight:400; background-color:transparent;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">tan() </span></li>\n"
"<li style=\" font-family:'Ubuntu'; font-weight:400; background-color:transparent;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">exp() </span></li></ul>\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px; background-color:transparent;\"><span style=\" font-family:'Ubuntu'; font-weight:700;\">Other Examples </span></p>\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0p"
                        "x; margin-left: 0px; margin-right: 0px; -qt-list-indent: 2;\">\n"
"<li style=\" font-family:'Ubuntu'; font-weight:400; background-color:transparent;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">y = ((x-3)^2)/20 </span></li>\n"
"<li style=\" font-family:'Ubuntu'; font-weight:400; background-color:transparent;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">y = ln(abs(x)) </span></li>\n"
"<li style=\" font-family:'Ubuntu'; font-weight:400; background-color:transparent;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">y = sin(x/20)*5 </span></li>\n"
"<li style=\" font-family:'Ubuntu'; font-weight:400; background-color:transparent;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; ma"
                        "rgin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">y = 1.2^x </span></li></ul>\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:transparent;\"><span style=\" font-family:'Ubuntu'; font-weight:400; background-color:transparent;\">Any constant added to your function is irrelevant to the result. For example, the functions </span><span style=\" font-family:'Ubuntu'; font-weight:700;\">y = 2*x + 3</span><span style=\" font-family:'Ubuntu'; font-weight:400;\">, </span><span style=\" font-family:'Ubuntu'; font-weight:700;\">y = 2*x - 8</span><span style=\" font-family:'Ubuntu'; font-weight:400;\"> and </span><span style=\" font-family:'Ubuntu'; font-weight:700;\">y = 2*x </span><span style=\" font-family:'Ubuntu'; font-weight:400;\">yield the exact same graph in the game. </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:"
                        "0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-weight:400; background-color:transparent;\"><br /></p>\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:transparent;\"><span style=\" font-family:'Ubuntu'; font-weight:400; background-color:transparent;\">The </span><span style=\" font-family:'Ubuntu'; font-weight:700;\">x</span><span style=\" font-family:'Ubuntu'; font-weight:400;\"> axis limits on the game are </span><span style=\" font-family:'Ubuntu'; font-weight:700;\">-15</span><span style=\" font-family:'Ubuntu'; font-weight:400;\"> and </span><span style=\" font-family:'Ubuntu'; font-weight:700;\">+15</span><span style=\" font-family:'Ubuntu'; font-weight:400;\"> and the </span><span style=\" font-family:'Ubuntu'; font-weight:700;\">y</span><span style=\" font-family:'Ubuntu'; font-weight:400;\"> axis limits are </span><span style=\" font-family:'Ubuntu'; font-weight:700;\">-9 </span><span styl"
                        "e=\" font-family:'Ubuntu'; font-weight:400;\">and </span><span style=\" font-family:'Ubuntu'; font-weight:700;\">9</span><span style=\" font-family:'Ubuntu'; font-weight:400;\">. That means functions can get very big. For example the function </span><span style=\" font-family:'Ubuntu'; font-weight:700;\">y = x^2</span><span style=\" font-family:'Ubuntu'; font-weight:400;\"> has the value </span><span style=\" font-family:'Ubuntu'; font-weight:700;\">100</span><span style=\" font-family:'Ubuntu'; font-weight:400;\"> when </span><span style=\" font-family:'Ubuntu'; font-weight:700;\">x</span><span style=\" font-family:'Ubuntu'; font-weight:400;\"> equals </span><span style=\" font-family:'Ubuntu'; font-weight:700;\">10</span><span style=\" font-family:'Ubuntu'; font-weight:400;\">. That means this function will hit the ceiling of the game very fast. This problem can be solved by scaling the function appropriately, the function </span><span style=\" font-family:'Ubuntu'; font-weight:700;\">y = (x^2)/50</span><spa"
                        "n style=\" font-family:'Ubuntu'; font-weight:400;\"> will produce a nice looking parabola. </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-weight:400;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-weight:400;\">Another thing that may confuse you is that your soldiers will always be standing on negative values for </span><span style=\" font-family:'Ubuntu'; font-weight:700;\">x</span><span style=\" font-family:'Ubuntu'; font-weight:400;\">. You are located to the left of the </span><span style=\" font-family:'Ubuntu'; font-weight:700;\">y</span><span style=\" font-family:'Ubuntu'; font-weight:400;\"> axis, so that is expected and it means functions like </span><span style=\" font-family:'Ubuntu'; font-weight:700;\">y = sqrt(x)</span><span styl"
                        "e=\" font-family:'Ubuntu'; font-weight:400;\"> will not like you and will explode immediately. You should try something like </span><span style=\" font-family:'Ubuntu'; font-weight:700;\">y = sqrt(abs(x))</span><span style=\" font-family:'Ubuntu'; font-weight:400;\">. </span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Help: public Ui_Help {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELP_H
