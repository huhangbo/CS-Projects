/********************************************************************************
** Form generated from reading UI file 'editstu.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITSTU_H
#define UI_EDITSTU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_EditStu
{
public:
    QPushButton *back;
    QTableWidget *showtable;
    QPushButton *search;
    QLineEdit *searchword;
    QLabel *showpic;
    QPushButton *remove;
    QPushButton *update;
    QPushButton *save;

    void setupUi(QDialog *EditStu)
    {
        if (EditStu->objectName().isEmpty())
            EditStu->setObjectName(QString::fromUtf8("EditStu"));
        EditStu->resize(879, 475);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EditStu->sizePolicy().hasHeightForWidth());
        EditStu->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/images/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        EditStu->setWindowIcon(icon);
        EditStu->setInputMethodHints(Qt::ImhNone);
        back = new QPushButton(EditStu);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(740, 430, 121, 31));
        back->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:5px;\n"
"	background-color: rgba(0, 150, 136, 0.75);\n"
"	color:rgb(255,255,255);\n"
"	font: 75 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QPushButton:hover{\n"
"	border-color: rgb(0, 150, 136);\n"
"	background-color: rgba(0, 150, 136, 0.8);\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: rgba(0, 150, 136, 0.95);\n"
"}\n"
"\n"
"\n"
""));
        showtable = new QTableWidget(EditStu);
        if (showtable->columnCount() < 7)
            showtable->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        showtable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        showtable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        showtable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        showtable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        showtable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        showtable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        showtable->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        showtable->setObjectName(QString::fromUtf8("showtable"));
        showtable->setEnabled(true);
        showtable->setGeometry(QRect(18, 60, 701, 401));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        showtable->setFont(font);
        showtable->setStyleSheet(QString::fromUtf8("QHeaderView::section\n"
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
"}\n"
"\n"
""));
        showtable->setFrameShape(QFrame::Box);
        showtable->setFrameShadow(QFrame::Raised);
        showtable->setLineWidth(1);
        showtable->setMidLineWidth(1);
        showtable->setAutoScroll(true);
        showtable->setAutoScrollMargin(11);
        showtable->setEditTriggers(QAbstractItemView::DoubleClicked);
        showtable->setTabKeyNavigation(false);
        showtable->setProperty("showDropIndicator", QVariant(false));
        showtable->setDragEnabled(false);
        showtable->setDragDropOverwriteMode(false);
        showtable->setDragDropMode(QAbstractItemView::NoDragDrop);
        showtable->setAlternatingRowColors(true);
        showtable->setSelectionMode(QAbstractItemView::ExtendedSelection);
        showtable->setSelectionBehavior(QAbstractItemView::SelectItems);
        showtable->setTextElideMode(Qt::ElideMiddle);
        showtable->setShowGrid(true);
        showtable->setGridStyle(Qt::SolidLine);
        showtable->setSortingEnabled(true);
        showtable->setRowCount(0);
        showtable->setColumnCount(7);
        showtable->horizontalHeader()->setVisible(false);
        showtable->horizontalHeader()->setCascadingSectionResizes(false);
        showtable->horizontalHeader()->setMinimumSectionSize(60);
        showtable->horizontalHeader()->setDefaultSectionSize(100);
        showtable->horizontalHeader()->setHighlightSections(true);
        showtable->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        showtable->horizontalHeader()->setStretchLastSection(true);
        showtable->verticalHeader()->setVisible(false);
        showtable->verticalHeader()->setCascadingSectionResizes(true);
        showtable->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        showtable->verticalHeader()->setStretchLastSection(false);
        search = new QPushButton(EditStu);
        search->setObjectName(QString::fromUtf8("search"));
        search->setGeometry(QRect(740, 20, 121, 31));
        search->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:5px;\n"
"	background-color: rgba(0, 150, 136, 0.75);\n"
"	color:rgb(255,255,255);\n"
"	font: 75 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QPushButton:hover{\n"
"	border-color: rgb(0, 150, 136);\n"
"	background-color: rgba(0, 150, 136, 0.8);\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: rgba(0, 150, 136, 0.95);\n"
"}\n"
"\n"
"\n"
""));
        searchword = new QLineEdit(EditStu);
        searchword->setObjectName(QString::fromUtf8("searchword"));
        searchword->setGeometry(QRect(20, 20, 701, 31));
        searchword->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	border-radius:5px;\n"
"	border-color: rgb(0, 0, 0);\n"
"	font: 75 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"\n"
"\n"
"\n"
""));
        searchword->setReadOnly(false);
        searchword->setClearButtonEnabled(true);
        showpic = new QLabel(EditStu);
        showpic->setObjectName(QString::fromUtf8("showpic"));
        showpic->setGeometry(QRect(750, 120, 101, 141));
        sizePolicy.setHeightForWidth(showpic->sizePolicy().hasHeightForWidth());
        showpic->setSizePolicy(sizePolicy);
        showpic->setMinimumSize(QSize(101, 141));
        showpic->setMaximumSize(QSize(101, 141));
        showpic->setAutoFillBackground(false);
        showpic->setTextFormat(Qt::PlainText);
        showpic->setScaledContents(true);
        showpic->setAlignment(Qt::AlignCenter);
        showpic->setWordWrap(false);
        showpic->setOpenExternalLinks(false);
        remove = new QPushButton(EditStu);
        remove->setObjectName(QString::fromUtf8("remove"));
        remove->setGeometry(QRect(740, 390, 121, 31));
        remove->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:5px;\n"
"	background-color: rgba(0, 150, 136, 0.75);\n"
"	color:rgb(255,255,255);\n"
"	font: 75 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QPushButton:hover{\n"
"	border-color: rgb(0, 150, 136);\n"
"	background-color: rgba(0, 150, 136, 0.8);\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: rgba(0, 150, 136, 0.95);\n"
"}\n"
"\n"
"\n"
""));
        update = new QPushButton(EditStu);
        update->setObjectName(QString::fromUtf8("update"));
        update->setGeometry(QRect(740, 350, 121, 31));
        update->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:5px;\n"
"	background-color: rgba(0, 150, 136, 0.75);\n"
"	color:rgb(255,255,255);\n"
"	font: 75 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QPushButton:hover{\n"
"	border-color: rgb(0, 150, 136);\n"
"	background-color: rgba(0, 150, 136, 0.8);\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: rgba(0, 150, 136, 0.95);\n"
"}\n"
"\n"
"\n"
""));
        save = new QPushButton(EditStu);
        save->setObjectName(QString::fromUtf8("save"));
        save->setGeometry(QRect(740, 70, 121, 31));
        save->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:5px;\n"
"	background-color: rgba(0, 150, 136, 0.75);\n"
"	color:rgb(255,255,255);\n"
"	font: 75 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QPushButton:hover{\n"
"	border-color: rgb(0, 150, 136);\n"
"	background-color: rgba(0, 150, 136, 0.8);\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: rgba(0, 150, 136, 0.95);\n"
"}\n"
""));

        retranslateUi(EditStu);

        QMetaObject::connectSlotsByName(EditStu);
    } // setupUi

    void retranslateUi(QDialog *EditStu)
    {
        EditStu->setWindowTitle(QCoreApplication::translate("EditStu", "\346\237\245\350\257\242/\344\277\256\346\224\271\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        back->setText(QCoreApplication::translate("EditStu", "\350\277\224\345\233\236", nullptr));
        QTableWidgetItem *___qtablewidgetitem = showtable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("EditStu", "\345\255\246\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = showtable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("EditStu", "\345\247\223\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = showtable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("EditStu", "\345\271\264\347\272\247", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = showtable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("EditStu", "\345\255\246\351\231\242", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = showtable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("EditStu", "\347\217\255\347\272\247", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = showtable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("EditStu", "\347\224\265\350\257\235", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = showtable->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("EditStu", "\347\205\247\347\211\207", nullptr));
        search->setText(QCoreApplication::translate("EditStu", "\346\237\245\350\257\242", nullptr));
        searchword->setPlaceholderText(QCoreApplication::translate("EditStu", "\350\276\223\345\205\245\346\202\250\351\234\200\350\246\201\346\237\245\350\257\242\347\232\204\344\277\241\346\201\257\357\274\214\345\246\202\345\247\223\345\220\215\357\274\214\347\224\265\350\257\235\347\255\211", nullptr));
        showpic->setText(QCoreApplication::translate("EditStu", "\346\234\252\344\270\212\344\274\240\347\205\247\347\211\207", nullptr));
        remove->setText(QCoreApplication::translate("EditStu", "\345\210\240\351\231\244", nullptr));
        update->setText(QCoreApplication::translate("EditStu", "\346\233\264\346\226\260", nullptr));
        save->setText(QCoreApplication::translate("EditStu", "\345\244\207\344\273\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditStu: public Ui_EditStu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITSTU_H
