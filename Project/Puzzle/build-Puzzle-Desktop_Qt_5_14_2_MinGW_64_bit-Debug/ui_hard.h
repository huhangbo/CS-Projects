/********************************************************************************
** Form generated from reading UI file 'hard.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HARD_H
#define UI_HARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_hard
{
public:
    QPushButton *setpic;
    QPushButton *back1;
    QLabel *picbg;
    QLabel *yuantu;
    QLabel *p1;
    QLabel *bgwhite;
    QPushButton *showpic;
    QTextBrowser *showtime;
    QPushButton *restart;
    QLabel *step;
    QSlider *volslider;
    QLabel *time;
    QLabel *bg;
    QTextBrowser *showstep;
    QPushButton *vol;
    QLabel *volumnbg;
    QLabel *p2;
    QLabel *p5;
    QLabel *p6;
    QLabel *p7;
    QLabel *p8;
    QLabel *p9;
    QLabel *p10;
    QLabel *p11;
    QLabel *p12;
    QLabel *p3;
    QLabel *p4;
    QLabel *p13;
    QLabel *p14;
    QLabel *p15;
    QLabel *p16;
    QPushButton *set_step;
    QPushButton *set_time;
    QLabel *titleChi;

    void setupUi(QDialog *hard)
    {
        if (hard->objectName().isEmpty())
            hard->setObjectName(QString::fromUtf8("hard"));
        hard->resize(714, 461);
        setpic = new QPushButton(hard);
        setpic->setObjectName(QString::fromUtf8("setpic"));
        setpic->setGeometry(QRect(440, 270, 111, 41));
        setpic->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        back1 = new QPushButton(hard);
        back1->setObjectName(QString::fromUtf8("back1"));
        back1->setGeometry(QRect(560, 320, 111, 41));
        back1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        picbg = new QLabel(hard);
        picbg->setObjectName(QString::fromUtf8("picbg"));
        picbg->setGeometry(QRect(31, 34, 381, 371));
        yuantu = new QLabel(hard);
        yuantu->setObjectName(QString::fromUtf8("yuantu"));
        yuantu->setGeometry(QRect(20, 20, 400, 400));
        yuantu->setScaledContents(true);
        yuantu->setAlignment(Qt::AlignCenter);
        p1 = new QLabel(hard);
        p1->setObjectName(QString::fromUtf8("p1"));
        p1->setGeometry(QRect(30, 30, 90, 90));
        p1->setScaledContents(true);
        p1->setAlignment(Qt::AlignCenter);
        bgwhite = new QLabel(hard);
        bgwhite->setObjectName(QString::fromUtf8("bgwhite"));
        bgwhite->setGeometry(QRect(30, 30, 360, 360));
        bgwhite->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgba(255, 255, 255,0.7);"));
        showpic = new QPushButton(hard);
        showpic->setObjectName(QString::fromUtf8("showpic"));
        showpic->setGeometry(QRect(560, 270, 111, 41));
        showpic->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        showtime = new QTextBrowser(hard);
        showtime->setObjectName(QString::fromUtf8("showtime"));
        showtime->setGeometry(QRect(520, 220, 131, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        showtime->setFont(font);
        showtime->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset;"));
        restart = new QPushButton(hard);
        restart->setObjectName(QString::fromUtf8("restart"));
        restart->setGeometry(QRect(440, 320, 111, 41));
        restart->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        step = new QLabel(hard);
        step->setObjectName(QString::fromUtf8("step"));
        step->setGeometry(QRect(440, 170, 231, 41));
        step->setStyleSheet(QString::fromUtf8("\n"
"	border-radius:20px;\n"
"	background-color: rgba(255, 255, 255,0.7);\n"
"	font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        volslider = new QSlider(hard);
        volslider->setObjectName(QString::fromUtf8("volslider"));
        volslider->setGeometry(QRect(499, 380, 151, 21));
        volslider->setStyleSheet(QString::fromUtf8("QSlider{\n"
"    border-color: #cbcbcb;\n"
"}\n"
"\n"
""));
        volslider->setSliderPosition(20);
        volslider->setTracking(true);
        volslider->setOrientation(Qt::Horizontal);
        volslider->setInvertedAppearance(false);
        volslider->setInvertedControls(false);
        volslider->setTickPosition(QSlider::NoTicks);
        volslider->setTickInterval(20);
        time = new QLabel(hard);
        time->setObjectName(QString::fromUtf8("time"));
        time->setGeometry(QRect(440, 220, 231, 41));
        time->setStyleSheet(QString::fromUtf8("\n"
"	border-radius:20px;\n"
"	background-color: rgba(255, 255, 255,0.7);\n"
"	font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        bg = new QLabel(hard);
        bg->setObjectName(QString::fromUtf8("bg"));
        bg->setGeometry(QRect(0, 0, 721, 461));
        bg->setStyleSheet(QString::fromUtf8("border-image: url(:/res/mainwindow.png);"));
        showstep = new QTextBrowser(hard);
        showstep->setObjectName(QString::fromUtf8("showstep"));
        showstep->setGeometry(QRect(520, 170, 131, 41));
        showstep->setFont(font);
        showstep->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset;"));
        vol = new QPushButton(hard);
        vol->setObjectName(QString::fromUtf8("vol"));
        vol->setGeometry(QRect(450, 370, 41, 41));
        vol->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:1px;\n"
"	background-color: rgba(255, 255, 255,0);\n"
"	border-image: url(:/res/sound.png);\n"
"}\n"
"\n"
""));
        volumnbg = new QLabel(hard);
        volumnbg->setObjectName(QString::fromUtf8("volumnbg"));
        volumnbg->setGeometry(QRect(440, 370, 231, 41));
        volumnbg->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"	background-color: rgba(255, 255, 255,0.7);"));
        p2 = new QLabel(hard);
        p2->setObjectName(QString::fromUtf8("p2"));
        p2->setGeometry(QRect(120, 30, 90, 90));
        p2->setScaledContents(true);
        p2->setAlignment(Qt::AlignCenter);
        p5 = new QLabel(hard);
        p5->setObjectName(QString::fromUtf8("p5"));
        p5->setGeometry(QRect(30, 120, 90, 90));
        p5->setScaledContents(true);
        p5->setAlignment(Qt::AlignCenter);
        p6 = new QLabel(hard);
        p6->setObjectName(QString::fromUtf8("p6"));
        p6->setGeometry(QRect(120, 120, 90, 90));
        p6->setScaledContents(true);
        p6->setAlignment(Qt::AlignCenter);
        p7 = new QLabel(hard);
        p7->setObjectName(QString::fromUtf8("p7"));
        p7->setGeometry(QRect(210, 120, 90, 90));
        p7->setScaledContents(true);
        p7->setAlignment(Qt::AlignCenter);
        p8 = new QLabel(hard);
        p8->setObjectName(QString::fromUtf8("p8"));
        p8->setGeometry(QRect(300, 120, 90, 90));
        p8->setScaledContents(true);
        p8->setAlignment(Qt::AlignCenter);
        p9 = new QLabel(hard);
        p9->setObjectName(QString::fromUtf8("p9"));
        p9->setGeometry(QRect(30, 210, 90, 90));
        p9->setScaledContents(true);
        p9->setAlignment(Qt::AlignCenter);
        p10 = new QLabel(hard);
        p10->setObjectName(QString::fromUtf8("p10"));
        p10->setGeometry(QRect(120, 210, 90, 90));
        p10->setScaledContents(true);
        p10->setAlignment(Qt::AlignCenter);
        p11 = new QLabel(hard);
        p11->setObjectName(QString::fromUtf8("p11"));
        p11->setGeometry(QRect(210, 210, 90, 90));
        p11->setScaledContents(true);
        p11->setAlignment(Qt::AlignCenter);
        p12 = new QLabel(hard);
        p12->setObjectName(QString::fromUtf8("p12"));
        p12->setGeometry(QRect(300, 210, 90, 90));
        p12->setScaledContents(true);
        p12->setAlignment(Qt::AlignCenter);
        p3 = new QLabel(hard);
        p3->setObjectName(QString::fromUtf8("p3"));
        p3->setGeometry(QRect(210, 30, 90, 90));
        p3->setScaledContents(true);
        p3->setAlignment(Qt::AlignCenter);
        p4 = new QLabel(hard);
        p4->setObjectName(QString::fromUtf8("p4"));
        p4->setGeometry(QRect(300, 30, 90, 90));
        p4->setScaledContents(true);
        p4->setAlignment(Qt::AlignCenter);
        p13 = new QLabel(hard);
        p13->setObjectName(QString::fromUtf8("p13"));
        p13->setGeometry(QRect(30, 300, 90, 90));
        p13->setScaledContents(true);
        p13->setAlignment(Qt::AlignCenter);
        p14 = new QLabel(hard);
        p14->setObjectName(QString::fromUtf8("p14"));
        p14->setGeometry(QRect(120, 300, 90, 90));
        p14->setScaledContents(true);
        p14->setAlignment(Qt::AlignCenter);
        p15 = new QLabel(hard);
        p15->setObjectName(QString::fromUtf8("p15"));
        p15->setGeometry(QRect(210, 300, 90, 90));
        p15->setScaledContents(true);
        p15->setAlignment(Qt::AlignCenter);
        p16 = new QLabel(hard);
        p16->setObjectName(QString::fromUtf8("p16"));
        p16->setGeometry(QRect(300, 300, 90, 90));
        p16->setScaledContents(true);
        p16->setAlignment(Qt::AlignCenter);
        set_step = new QPushButton(hard);
        set_step->setObjectName(QString::fromUtf8("set_step"));
        set_step->setGeometry(QRect(440, 110, 111, 41));
        set_step->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        set_time = new QPushButton(hard);
        set_time->setObjectName(QString::fromUtf8("set_time"));
        set_time->setGeometry(QRect(570, 110, 101, 41));
        set_time->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        titleChi = new QLabel(hard);
        titleChi->setObjectName(QString::fromUtf8("titleChi"));
        titleChi->setGeometry(QRect(460, 30, 191, 71));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\274\224\347\244\272\351\225\207\351\255\202\350\241\214\346\245\267"));
        font1.setPointSize(26);
        titleChi->setFont(font1);
        titleChi->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        bg->raise();
        setpic->raise();
        back1->raise();
        picbg->raise();
        bgwhite->raise();
        showpic->raise();
        restart->raise();
        time->raise();
        volumnbg->raise();
        vol->raise();
        volslider->raise();
        p1->raise();
        p2->raise();
        p5->raise();
        p6->raise();
        p7->raise();
        p8->raise();
        p9->raise();
        p10->raise();
        p11->raise();
        p12->raise();
        p3->raise();
        p4->raise();
        p13->raise();
        p14->raise();
        p15->raise();
        p16->raise();
        yuantu->raise();
        step->raise();
        showstep->raise();
        showtime->raise();
        set_step->raise();
        set_time->raise();
        titleChi->raise();

        retranslateUi(hard);

        QMetaObject::connectSlotsByName(hard);
    } // setupUi

    void retranslateUi(QDialog *hard)
    {
        hard->setWindowTitle(QCoreApplication::translate("hard", "Dialog", nullptr));
        setpic->setText(QCoreApplication::translate("hard", "\345\212\240\350\275\275\345\233\276\347\211\207", nullptr));
        back1->setText(QCoreApplication::translate("hard", "\350\277\224\345\233\236", nullptr));
        picbg->setText(QString());
        yuantu->setText(QString());
        p1->setText(QString());
        bgwhite->setText(QString());
        showpic->setText(QCoreApplication::translate("hard", "\346\237\245\347\234\213\345\216\237\345\233\276", nullptr));
        showtime->setHtml(QCoreApplication::translate("hard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:9pt;\"><br /></p></body></html>", nullptr));
        restart->setText(QCoreApplication::translate("hard", "\351\207\215\346\226\260\345\274\200\345\247\213", nullptr));
        step->setText(QCoreApplication::translate("hard", "    \346\255\245\346\225\260\357\274\232", nullptr));
        time->setText(QCoreApplication::translate("hard", "    \350\256\241\346\227\266\357\274\232", nullptr));
        bg->setText(QString());
        showstep->setHtml(QCoreApplication::translate("hard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        vol->setText(QString());
        volumnbg->setText(QString());
        p2->setText(QString());
        p5->setText(QString());
        p6->setText(QString());
        p7->setText(QString());
        p8->setText(QString());
        p9->setText(QString());
        p10->setText(QString());
        p11->setText(QString());
        p12->setText(QString());
        p3->setText(QString());
        p4->setText(QString());
        p13->setText(QString());
        p14->setText(QString());
        p15->setText(QString());
        p16->setText(QString());
        set_step->setText(QCoreApplication::translate("hard", "\350\256\276\347\275\256\346\255\245\346\225\260", nullptr));
        set_time->setText(QCoreApplication::translate("hard", "\350\256\276\347\275\256\346\227\266\351\227\264", nullptr));
        titleChi->setText(QCoreApplication::translate("hard", "\346\213\274\345\233\276\346\270\270\346\210\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class hard: public Ui_hard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HARD_H
