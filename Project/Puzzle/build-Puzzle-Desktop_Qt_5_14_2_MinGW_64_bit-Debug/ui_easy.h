/********************************************************************************
** Form generated from reading UI file 'easy.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EASY_H
#define UI_EASY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_easy
{
public:
    QLabel *volumnbg;
    QPushButton *setpic;
    QLabel *time;
    QLabel *bg;
    QSlider *volslider;
    QPushButton *restart;
    QLabel *step;
    QTextBrowser *showstep;
    QTextBrowser *showtime;
    QLabel *picbg;
    QLabel *bgwhite;
    QLabel *titleChi;
    QPushButton *back1;
    QLabel *yuantu;
    QPushButton *showpic;
    QLabel *p1;
    QLabel *p2;
    QLabel *p3;
    QLabel *p4;
    QLabel *p5;
    QLabel *p6;
    QLabel *p7;
    QLabel *p8;
    QLabel *p9;
    QPushButton *vol;

    void setupUi(QDialog *easy)
    {
        if (easy->objectName().isEmpty())
            easy->setObjectName(QString::fromUtf8("easy"));
        easy->resize(735, 467);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(easy->sizePolicy().hasHeightForWidth());
        easy->setSizePolicy(sizePolicy);
        volumnbg = new QLabel(easy);
        volumnbg->setObjectName(QString::fromUtf8("volumnbg"));
        volumnbg->setGeometry(QRect(440, 360, 231, 41));
        volumnbg->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"	background-color: rgba(255, 255, 255,0.7);"));
        setpic = new QPushButton(easy);
        setpic->setObjectName(QString::fromUtf8("setpic"));
        setpic->setGeometry(QRect(440, 260, 111, 41));
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
        time = new QLabel(easy);
        time->setObjectName(QString::fromUtf8("time"));
        time->setGeometry(QRect(440, 210, 231, 41));
        time->setStyleSheet(QString::fromUtf8("\n"
"	border-radius:20px;\n"
"	background-color: rgba(255, 255, 255,0.7);\n"
"	font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        bg = new QLabel(easy);
        bg->setObjectName(QString::fromUtf8("bg"));
        bg->setGeometry(QRect(0, -10, 741, 481));
        bg->setStyleSheet(QString::fromUtf8("border-image: url(:/res/mainwindow.png);"));
        volslider = new QSlider(easy);
        volslider->setObjectName(QString::fromUtf8("volslider"));
        volslider->setGeometry(QRect(499, 370, 151, 21));
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
        restart = new QPushButton(easy);
        restart->setObjectName(QString::fromUtf8("restart"));
        restart->setGeometry(QRect(440, 310, 111, 41));
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
        step = new QLabel(easy);
        step->setObjectName(QString::fromUtf8("step"));
        step->setGeometry(QRect(440, 160, 231, 41));
        step->setStyleSheet(QString::fromUtf8("\n"
"	border-radius:20px;\n"
"	background-color: rgba(255, 255, 255,0.7);\n"
"	font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        showstep = new QTextBrowser(easy);
        showstep->setObjectName(QString::fromUtf8("showstep"));
        showstep->setGeometry(QRect(520, 160, 131, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        showstep->setFont(font);
        showstep->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset;"));
        showtime = new QTextBrowser(easy);
        showtime->setObjectName(QString::fromUtf8("showtime"));
        showtime->setGeometry(QRect(520, 210, 131, 41));
        showtime->setFont(font);
        showtime->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset;"));
        picbg = new QLabel(easy);
        picbg->setObjectName(QString::fromUtf8("picbg"));
        picbg->setGeometry(QRect(31, 24, 381, 371));
        bgwhite = new QLabel(easy);
        bgwhite->setObjectName(QString::fromUtf8("bgwhite"));
        bgwhite->setGeometry(QRect(20, 20, 381, 381));
        bgwhite->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgba(255, 255, 255,0.7);"));
        titleChi = new QLabel(easy);
        titleChi->setObjectName(QString::fromUtf8("titleChi"));
        titleChi->setGeometry(QRect(450, 30, 191, 91));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\274\224\347\244\272\351\225\207\351\255\202\350\241\214\346\245\267"));
        font1.setPointSize(26);
        titleChi->setFont(font1);
        titleChi->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        back1 = new QPushButton(easy);
        back1->setObjectName(QString::fromUtf8("back1"));
        back1->setGeometry(QRect(560, 310, 111, 41));
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
        yuantu = new QLabel(easy);
        yuantu->setObjectName(QString::fromUtf8("yuantu"));
        yuantu->setGeometry(QRect(20, 20, 381, 381));
        yuantu->setScaledContents(true);
        yuantu->setAlignment(Qt::AlignCenter);
        showpic = new QPushButton(easy);
        showpic->setObjectName(QString::fromUtf8("showpic"));
        showpic->setGeometry(QRect(560, 260, 111, 41));
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
        p1 = new QLabel(easy);
        p1->setObjectName(QString::fromUtf8("p1"));
        p1->setGeometry(QRect(20, 20, 127, 127));
        p1->setScaledContents(true);
        p1->setAlignment(Qt::AlignCenter);
        p2 = new QLabel(easy);
        p2->setObjectName(QString::fromUtf8("p2"));
        p2->setGeometry(QRect(147, 20, 127, 127));
        p2->setScaledContents(true);
        p2->setAlignment(Qt::AlignCenter);
        p3 = new QLabel(easy);
        p3->setObjectName(QString::fromUtf8("p3"));
        p3->setGeometry(QRect(274, 20, 127, 127));
        p3->setScaledContents(true);
        p3->setAlignment(Qt::AlignCenter);
        p4 = new QLabel(easy);
        p4->setObjectName(QString::fromUtf8("p4"));
        p4->setGeometry(QRect(20, 147, 127, 127));
        p4->setScaledContents(true);
        p4->setAlignment(Qt::AlignCenter);
        p5 = new QLabel(easy);
        p5->setObjectName(QString::fromUtf8("p5"));
        p5->setGeometry(QRect(147, 147, 127, 127));
        p5->setScaledContents(true);
        p5->setAlignment(Qt::AlignCenter);
        p6 = new QLabel(easy);
        p6->setObjectName(QString::fromUtf8("p6"));
        p6->setGeometry(QRect(274, 147, 127, 127));
        p6->setScaledContents(true);
        p6->setAlignment(Qt::AlignCenter);
        p7 = new QLabel(easy);
        p7->setObjectName(QString::fromUtf8("p7"));
        p7->setGeometry(QRect(20, 274, 127, 127));
        p7->setScaledContents(true);
        p7->setAlignment(Qt::AlignCenter);
        p8 = new QLabel(easy);
        p8->setObjectName(QString::fromUtf8("p8"));
        p8->setGeometry(QRect(147, 274, 127, 127));
        p8->setScaledContents(true);
        p8->setAlignment(Qt::AlignCenter);
        p9 = new QLabel(easy);
        p9->setObjectName(QString::fromUtf8("p9"));
        p9->setGeometry(QRect(274, 274, 127, 127));
        p9->setScaledContents(true);
        p9->setAlignment(Qt::AlignCenter);
        vol = new QPushButton(easy);
        vol->setObjectName(QString::fromUtf8("vol"));
        vol->setGeometry(QRect(450, 360, 41, 41));
        vol->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:1px;\n"
"	background-color: rgba(255, 255, 255,0);\n"
"	border-image: url(:/res/sound.png);\n"
"}\n"
"\n"
""));
        bg->raise();
        volumnbg->raise();
        setpic->raise();
        time->raise();
        volslider->raise();
        restart->raise();
        step->raise();
        showstep->raise();
        showtime->raise();
        picbg->raise();
        bgwhite->raise();
        titleChi->raise();
        back1->raise();
        showpic->raise();
        p1->raise();
        p2->raise();
        p3->raise();
        p4->raise();
        p5->raise();
        p6->raise();
        p7->raise();
        p8->raise();
        p9->raise();
        yuantu->raise();
        vol->raise();

        retranslateUi(easy);

        QMetaObject::connectSlotsByName(easy);
    } // setupUi

    void retranslateUi(QDialog *easy)
    {
        easy->setWindowTitle(QCoreApplication::translate("easy", "\347\256\200 \345\215\225 \346\250\241 \345\274\217", nullptr));
        volumnbg->setText(QString());
        setpic->setText(QCoreApplication::translate("easy", "\345\212\240\350\275\275\345\233\276\347\211\207", nullptr));
        time->setText(QCoreApplication::translate("easy", "    \350\256\241\346\227\266\357\274\232", nullptr));
        bg->setText(QString());
        restart->setText(QCoreApplication::translate("easy", "\351\207\215\346\226\260\345\274\200\345\247\213", nullptr));
        step->setText(QCoreApplication::translate("easy", "    \346\255\245\346\225\260\357\274\232", nullptr));
        showstep->setHtml(QCoreApplication::translate("easy", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        showtime->setHtml(QCoreApplication::translate("easy", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:9pt;\"><br /></p></body></html>", nullptr));
        picbg->setText(QString());
        bgwhite->setText(QString());
        titleChi->setText(QCoreApplication::translate("easy", "\346\213\274\345\233\276\346\270\270\346\210\217", nullptr));
        back1->setText(QCoreApplication::translate("easy", "\350\277\224\345\233\236", nullptr));
        yuantu->setText(QString());
        showpic->setText(QCoreApplication::translate("easy", "\346\237\245\347\234\213\345\216\237\345\233\276", nullptr));
        p1->setText(QString());
        p2->setText(QString());
        p3->setText(QString());
        p4->setText(QString());
        p5->setText(QString());
        p6->setText(QString());
        p7->setText(QString());
        p8->setText(QString());
        p9->setText(QString());
        vol->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class easy: public Ui_easy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EASY_H
