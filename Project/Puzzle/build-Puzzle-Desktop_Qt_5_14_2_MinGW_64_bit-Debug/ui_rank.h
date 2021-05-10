/********************************************************************************
** Form generated from reading UI file 'rank.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RANK_H
#define UI_RANK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rank
{
public:
    QLabel *bg;
    QTabWidget *rank_2;
    QWidget *rankEasy_2;
    QTableWidget *showeasy;
    QWidget *rankHard_2;
    QTableWidget *showhard;
    QPushButton *back3;
    QLabel *titleChi;

    void setupUi(QDialog *rank)
    {
        if (rank->objectName().isEmpty())
            rank->setObjectName(QString::fromUtf8("rank"));
        rank->resize(449, 424);
        bg = new QLabel(rank);
        bg->setObjectName(QString::fromUtf8("bg"));
        bg->setGeometry(QRect(-120, -10, 691, 441));
        bg->setStyleSheet(QString::fromUtf8("border-image: url(:/res/mainwindow.png);"));
        rank_2 = new QTabWidget(rank);
        rank_2->setObjectName(QString::fromUtf8("rank_2"));
        rank_2->setGeometry(QRect(20, 120, 261, 291));
        rank_2->setStyleSheet(QString::fromUtf8("QTabBar::tab{\n"
"\n"
"background-color: rgba(4, 116, 191,0.7);  /*\346\267\261\350\223\235\350\211\262*/\n"
"color:white;\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"min-width:120px;\n"
"min-height:20px;\n"
"padding:5px;}\n"
"\n"
"QTabBar::tab:selected{\n"
"border-color: white;\n"
"background-color: rgba(238, 159, 0,0.7); /*\346\251\230\351\273\204\350\211\262*/\n"
"color:white;\n"
"}\n"
"\n"
"QTabBar::tab:!selected {\n"
"margin-top: 5px;\n"
"}\n"
""));
        rank_2->setTabPosition(QTabWidget::North);
        rank_2->setTabShape(QTabWidget::Rounded);
        rank_2->setElideMode(Qt::ElideRight);
        rank_2->setUsesScrollButtons(true);
        rank_2->setDocumentMode(true);
        rank_2->setTabsClosable(false);
        rank_2->setMovable(false);
        rank_2->setTabBarAutoHide(true);
        rankEasy_2 = new QWidget();
        rankEasy_2->setObjectName(QString::fromUtf8("rankEasy_2"));
        rankEasy_2->setAutoFillBackground(false);
        rankEasy_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0.3);"));
        showeasy = new QTableWidget(rankEasy_2);
        if (showeasy->columnCount() < 2)
            showeasy->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        showeasy->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        showeasy->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        showeasy->setObjectName(QString::fromUtf8("showeasy"));
        showeasy->setGeometry(QRect(0, 0, 261, 261));
        showeasy->setStyleSheet(QString::fromUtf8("QHeaderView::section\n"
"{	\n"
"	color: white;\n"
"    text-align:center;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color: rgba(0, 150, 136, 0.6);\n"
"	border:1px solid #8faac9\n"
"}\n"
"\n"
"QTableView::item:selected\n"
"{	\n"
"	background-color: rgba(0, 150, 136, 0.4);\n"
"}\n"
"\n"
"QTableView\n"
"{\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"\n"
"}"));
        showeasy->setFrameShape(QFrame::NoFrame);
        showeasy->setFrameShadow(QFrame::Sunken);
        showeasy->setEditTriggers(QAbstractItemView::NoEditTriggers);
        showeasy->setAlternatingRowColors(false);
        showeasy->setGridStyle(Qt::NoPen);
        showeasy->setSortingEnabled(true);
        showeasy->setColumnCount(2);
        showeasy->horizontalHeader()->setCascadingSectionResizes(true);
        showeasy->horizontalHeader()->setDefaultSectionSize(100);
        showeasy->horizontalHeader()->setHighlightSections(true);
        showeasy->horizontalHeader()->setStretchLastSection(true);
        rank_2->addTab(rankEasy_2, QString());
        rankHard_2 = new QWidget();
        rankHard_2->setObjectName(QString::fromUtf8("rankHard_2"));
        rankHard_2->setAutoFillBackground(false);
        rankHard_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0.3);"));
        showhard = new QTableWidget(rankHard_2);
        if (showhard->columnCount() < 2)
            showhard->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        showhard->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        showhard->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        showhard->setObjectName(QString::fromUtf8("showhard"));
        showhard->setGeometry(QRect(0, 0, 261, 261));
        showhard->setStyleSheet(QString::fromUtf8("QHeaderView::section\n"
"{	\n"
"	color: white;\n"
"    text-align:center;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color: rgba(0, 150, 136, 0.6);\n"
"	border:1px solid #8faac9\n"
"}\n"
"\n"
"QTableView::item:selected\n"
"{	\n"
"	background-color: rgba(0, 150, 136, 0.4);\n"
"}\n"
"\n"
"QTableView\n"
"{\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"\n"
"}"));
        showhard->setFrameShape(QFrame::NoFrame);
        showhard->setEditTriggers(QAbstractItemView::NoEditTriggers);
        showhard->setGridStyle(Qt::NoPen);
        showhard->setSortingEnabled(true);
        showhard->setColumnCount(2);
        showhard->horizontalHeader()->setCascadingSectionResizes(true);
        showhard->horizontalHeader()->setDefaultSectionSize(100);
        showhard->horizontalHeader()->setHighlightSections(true);
        showhard->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        showhard->horizontalHeader()->setStretchLastSection(true);
        rank_2->addTab(rankHard_2, QString());
        back3 = new QPushButton(rank);
        back3->setObjectName(QString::fromUtf8("back3"));
        back3->setGeometry(QRect(300, 370, 141, 41));
        back3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        titleChi = new QLabel(rank);
        titleChi->setObjectName(QString::fromUtf8("titleChi"));
        titleChi->setGeometry(QRect(20, 20, 311, 81));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\274\224\347\244\272\351\225\207\351\255\202\350\241\214\346\245\267"));
        font.setPointSize(22);
        titleChi->setFont(font);
        titleChi->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        retranslateUi(rank);

        rank_2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(rank);
    } // setupUi

    void retranslateUi(QDialog *rank)
    {
        rank->setWindowTitle(QCoreApplication::translate("rank", "Dialog", nullptr));
        bg->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = showeasy->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("rank", "\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = showeasy->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("rank", "\346\255\245\346\225\260", nullptr));
        rank_2->setTabText(rank_2->indexOf(rankEasy_2), QCoreApplication::translate("rank", "\347\256\200\345\215\225\346\250\241\345\274\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = showhard->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("rank", "\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = showhard->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("rank", "\346\255\245\346\225\260", nullptr));
        rank_2->setTabText(rank_2->indexOf(rankHard_2), QCoreApplication::translate("rank", "\346\214\221\346\210\230\346\250\241\345\274\217", nullptr));
        back3->setText(QCoreApplication::translate("rank", "\350\277\224\345\233\236", nullptr));
        titleChi->setText(QCoreApplication::translate("rank", "\346\213\274\345\233\276\346\270\270\346\210\217\346\216\222\350\241\214\346\246\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rank: public Ui_rank {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANK_H
