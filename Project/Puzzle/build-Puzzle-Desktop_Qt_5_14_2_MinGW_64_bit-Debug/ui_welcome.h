/********************************************************************************
** Form generated from reading UI file 'welcome.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOME_H
#define UI_WELCOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_welcome
{
public:
    QWidget *welcomemain;
    QPushButton *Easy;
    QPushButton *Hard;
    QLabel *titleChi;
    QLabel *label_2;
    QPushButton *Rank;
    QLabel *label;

    void setupUi(QMainWindow *welcome)
    {
        if (welcome->objectName().isEmpty())
            welcome->setObjectName(QString::fromUtf8("welcome"));
        welcome->resize(698, 448);
        welcomemain = new QWidget(welcome);
        welcomemain->setObjectName(QString::fromUtf8("welcomemain"));
        Easy = new QPushButton(welcomemain);
        Easy->setObjectName(QString::fromUtf8("Easy"));
        Easy->setGeometry(QRect(60, 140, 161, 51));
        Easy->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:20px;\n"
"	background-color: rgba(255, 255, 255,0.7);\n"
"	font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgba(255, 255, 255,0.9);\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: rgba(255, 255, 255,0.95);\n"
"}\n"
"\n"
"\n"
""));
        Hard = new QPushButton(welcomemain);
        Hard->setObjectName(QString::fromUtf8("Hard"));
        Hard->setGeometry(QRect(90, 220, 161, 51));
        Hard->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:20px;\n"
"	background-color: rgba(255, 255, 255,0.7);\n"
"	font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgba(255, 255, 255,0.9);\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: rgba(255, 255, 255,0.95);\n"
"}\n"
"\n"
"\n"
""));
        titleChi = new QLabel(welcomemain);
        titleChi->setObjectName(QString::fromUtf8("titleChi"));
        titleChi->setGeometry(QRect(40, 10, 321, 151));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\274\224\347\244\272\351\225\207\351\255\202\350\241\214\346\245\267"));
        font.setPointSize(36);
        titleChi->setFont(font);
        titleChi->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2 = new QLabel(welcomemain);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 701, 451));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/res/mainwindow.png);"));
        Rank = new QPushButton(welcomemain);
        Rank->setObjectName(QString::fromUtf8("Rank"));
        Rank->setGeometry(QRect(120, 300, 161, 51));
        Rank->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:20px;\n"
"	background-color: rgba(255, 255, 255,0.7);\n"
"	font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgba(255, 255, 255,0.9);\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: rgba(255, 255, 255,0.95);\n"
"}\n"
"\n"
"\n"
""));
        label = new QLabel(welcomemain);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 370, 401, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        font1.setPointSize(16);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-radius:10px;\n"
"	background-color: rgba(0, 0, 0,0.5);"));
        welcome->setCentralWidget(welcomemain);
        label_2->raise();
        Easy->raise();
        Hard->raise();
        titleChi->raise();
        Rank->raise();
        label->raise();

        retranslateUi(welcome);

        QMetaObject::connectSlotsByName(welcome);
    } // setupUi

    void retranslateUi(QMainWindow *welcome)
    {
        welcome->setWindowTitle(QCoreApplication::translate("welcome", "\346\213\274\345\233\276\346\270\270\346\210\217 by hhb", nullptr));
        Easy->setText(QCoreApplication::translate("welcome", "\347\256\200\345\215\225\346\250\241\345\274\217", nullptr));
        Hard->setText(QCoreApplication::translate("welcome", "\346\214\221\346\210\230\346\250\241\345\274\217", nullptr));
        titleChi->setText(QCoreApplication::translate("welcome", "\346\213\274\345\233\276\346\270\270\346\210\217", nullptr));
        label_2->setText(QString());
        Rank->setText(QCoreApplication::translate("welcome", "\346\216\222\350\241\214\346\246\234", nullptr));
        label->setText(QCoreApplication::translate("welcome", " \345\244\247\346\225\260\346\215\2562019-1\347\217\255 \350\203\241\350\210\252\345\215\232 17195476", nullptr));
    } // retranslateUi

};

namespace Ui {
    class welcome: public Ui_welcome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_H
