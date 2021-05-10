/********************************************************************************
** Form generated from reading UI file 'stumanager.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUMANAGER_H
#define UI_STUMANAGER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StuManager
{
public:
    QAction *actionbeifen;
    QAction *actionhuifu;
    QWidget *centralwidget;
    QLabel *background;
    QLabel *title;
    QPushButton *AddStu;
    QPushButton *EditStu;
    QMenuBar *menuBar;
    QMenu *menu;

    void setupUi(QMainWindow *StuManager)
    {
        if (StuManager->objectName().isEmpty())
            StuManager->setObjectName(QString::fromUtf8("StuManager"));
        StuManager->resize(820, 600);
        StuManager->setMinimumSize(QSize(810, 600));
        StuManager->setMaximumSize(QSize(860, 600));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/images/bg.png"), QSize(), QIcon::Normal, QIcon::Off);
        StuManager->setWindowIcon(icon);
        actionbeifen = new QAction(StuManager);
        actionbeifen->setObjectName(QString::fromUtf8("actionbeifen"));
        actionhuifu = new QAction(StuManager);
        actionhuifu->setObjectName(QString::fromUtf8("actionhuifu"));
        centralwidget = new QWidget(StuManager);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        background = new QLabel(centralwidget);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(-80, 0, 950, 650));
        background->setMinimumSize(QSize(950, 650));
        background->setMaximumSize(QSize(860, 510));
        background->setStyleSheet(QString::fromUtf8("border-image: url(:/image/images/login.jpg);"));
        background->setScaledContents(false);
        title = new QLabel(centralwidget);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(10, 0, 601, 121));
        title->setStyleSheet(QString::fromUtf8(""));
        AddStu = new QPushButton(centralwidget);
        AddStu->setObjectName(QString::fromUtf8("AddStu"));
        AddStu->setGeometry(QRect(300, 200, 181, 41));
        AddStu->setStyleSheet(QString::fromUtf8(""));
        EditStu = new QPushButton(centralwidget);
        EditStu->setObjectName(QString::fromUtf8("EditStu"));
        EditStu->setGeometry(QRect(300, 260, 181, 41));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 178));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        QBrush brush1(QColor(255, 0, 4, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::LinkVisited, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush1);
        EditStu->setPalette(palette);
        EditStu->setStyleSheet(QString::fromUtf8(""));
        StuManager->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(StuManager);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 820, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        StuManager->setMenuBar(menuBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(actionbeifen);
        menu->addAction(actionhuifu);

        retranslateUi(StuManager);

        QMetaObject::connectSlotsByName(StuManager);
    } // setupUi

    void retranslateUi(QMainWindow *StuManager)
    {
        StuManager->setWindowTitle(QCoreApplication::translate("StuManager", "\345\255\246\347\224\237\351\200\232\350\256\257\345\275\225", nullptr));
        actionbeifen->setText(QCoreApplication::translate("StuManager", "\345\244\207\344\273\275", nullptr));
        actionhuifu->setText(QCoreApplication::translate("StuManager", "\346\201\242\345\244\215", nullptr));
        background->setText(QString());
        title->setText(QCoreApplication::translate("StuManager", "<html><head/><body><p><span style=\" font-size:36pt; font-weight:600; color:#ffffff;\">\344\270\255\345\233\275\347\237\277\344\270\232\345\244\247\345\255\246</span></p></body></html>", nullptr));
        AddStu->setText(QCoreApplication::translate("StuManager", "\346\267\273\345\212\240\345\255\246\347\224\237", nullptr));
        EditStu->setText(QCoreApplication::translate("StuManager", "\347\274\226\350\276\221/\346\237\245\350\257\242\345\255\246\347\224\237", nullptr));
        menu->setTitle(QCoreApplication::translate("StuManager", "\345\244\207\344\273\275\344\270\216\346\201\242\345\244\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StuManager: public Ui_StuManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUMANAGER_H
