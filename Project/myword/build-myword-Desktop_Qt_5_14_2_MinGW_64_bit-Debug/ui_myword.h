/********************************************************************************
** Form generated from reading UI file 'myword.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWORD_H
#define UI_MYWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myword
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *myword)
    {
        if (myword->objectName().isEmpty())
            myword->setObjectName(QString::fromUtf8("myword"));
        myword->resize(800, 600);
        centralwidget = new QWidget(myword);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        myword->setCentralWidget(centralwidget);
        menubar = new QMenuBar(myword);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        myword->setMenuBar(menubar);
        statusbar = new QStatusBar(myword);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        myword->setStatusBar(statusbar);

        retranslateUi(myword);

        QMetaObject::connectSlotsByName(myword);
    } // setupUi

    void retranslateUi(QMainWindow *myword)
    {
        myword->setWindowTitle(QCoreApplication::translate("myword", "myword", nullptr));
    } // retranslateUi

};

namespace Ui {
    class myword: public Ui_myword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWORD_H
