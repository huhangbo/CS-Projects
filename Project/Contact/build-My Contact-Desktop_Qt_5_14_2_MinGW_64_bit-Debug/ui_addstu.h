/********************************************************************************
** Form generated from reading UI file 'addstu.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTU_H
#define UI_ADDSTU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddStu
{
public:
    QPushButton *back;
    QComboBox *ClassBox;
    QComboBox *PartBox;
    QLabel *Class;
    QLabel *Tel;
    QComboBox *GradeBox;
    QLabel *Part;
    QLabel *Name;
    QLineEdit *NameText;
    QLabel *Num;
    QLabel *Grade;
    QLineEdit *TelText;
    QLineEdit *NumText;
    QPushButton *yes;
    QPushButton *picture;
    QLabel *showpic;

    void setupUi(QDialog *AddStu)
    {
        if (AddStu->objectName().isEmpty())
            AddStu->setObjectName(QString::fromUtf8("AddStu"));
        AddStu->resize(470, 379);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/images/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        AddStu->setWindowIcon(icon);
        AddStu->setAutoFillBackground(false);
        AddStu->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"	border-radius:5px;\n"
"	background-color: rgba(0, 150, 136, 0.75);\n"
"	color:rgb(255,255,255);\n"
"	font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QComboBox:hover{\n"
"	border-color: rgb(0, 150, 136);\n"
"	background-color: rgba(0, 150, 136, 0.8);\n"
"}\n"
"QComboBox:pressed{\n"
"	background-color: rgba(0, 150, 136, 0.95);}\n"
"QComboBox::drop-down{border-left-color: darkgray;}\n"
"\n"
"QLineEdit{border-radius:5px;}\n"
""));
        back = new QPushButton(AddStu);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(260, 250, 121, 31));
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
        ClassBox = new QComboBox(AddStu);
        ClassBox->addItem(QString());
        ClassBox->setObjectName(QString::fromUtf8("ClassBox"));
        ClassBox->setGeometry(QRect(70, 162, 141, 21));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ClassBox->sizePolicy().hasHeightForWidth());
        ClassBox->setSizePolicy(sizePolicy);
        ClassBox->setAcceptDrops(false);
        ClassBox->setEditable(false);
        ClassBox->setInsertPolicy(QComboBox::InsertAtBottom);
        ClassBox->setFrame(false);
        PartBox = new QComboBox(AddStu);
        PartBox->addItem(QString());
        PartBox->addItem(QString());
        PartBox->addItem(QString());
        PartBox->addItem(QString());
        PartBox->addItem(QString());
        PartBox->addItem(QString());
        PartBox->setObjectName(QString::fromUtf8("PartBox"));
        PartBox->setGeometry(QRect(70, 129, 141, 21));
        sizePolicy.setHeightForWidth(PartBox->sizePolicy().hasHeightForWidth());
        PartBox->setSizePolicy(sizePolicy);
        PartBox->setFrame(false);
        Class = new QLabel(AddStu);
        Class->setObjectName(QString::fromUtf8("Class"));
        Class->setGeometry(QRect(24, 159, 40, 27));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        Class->setFont(font);
        Tel = new QLabel(AddStu);
        Tel->setObjectName(QString::fromUtf8("Tel"));
        Tel->setGeometry(QRect(24, 192, 40, 27));
        Tel->setFont(font);
        GradeBox = new QComboBox(AddStu);
        GradeBox->addItem(QString());
        GradeBox->addItem(QString());
        GradeBox->addItem(QString());
        GradeBox->addItem(QString());
        GradeBox->addItem(QString());
        GradeBox->addItem(QString());
        GradeBox->setObjectName(QString::fromUtf8("GradeBox"));
        GradeBox->setEnabled(true);
        GradeBox->setGeometry(QRect(70, 96, 141, 21));
        sizePolicy.setHeightForWidth(GradeBox->sizePolicy().hasHeightForWidth());
        GradeBox->setSizePolicy(sizePolicy);
        GradeBox->setEditable(false);
        GradeBox->setMaxCount(30);
        GradeBox->setDuplicatesEnabled(false);
        GradeBox->setFrame(false);
        Part = new QLabel(AddStu);
        Part->setObjectName(QString::fromUtf8("Part"));
        Part->setGeometry(QRect(24, 126, 40, 27));
        Part->setFont(font);
        Name = new QLabel(AddStu);
        Name->setObjectName(QString::fromUtf8("Name"));
        Name->setGeometry(QRect(24, 60, 40, 27));
        Name->setFont(font);
        NameText = new QLineEdit(AddStu);
        NameText->setObjectName(QString::fromUtf8("NameText"));
        NameText->setGeometry(QRect(70, 63, 141, 20));
        sizePolicy.setHeightForWidth(NameText->sizePolicy().hasHeightForWidth());
        NameText->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font1.setPointSize(10);
        NameText->setFont(font1);
        NameText->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	setMaxLength(8);\n"
"    setPlaceholderText(\"abc\");\n"
"	background:transparent;\n"
"	border-width:0;\n"
"	border-style:outset;\n"
"\n"
"}\n"
"\n"
"\n"
""));
        NameText->setMaxLength(10);
        NameText->setFrame(false);
        NameText->setClearButtonEnabled(true);
        Num = new QLabel(AddStu);
        Num->setObjectName(QString::fromUtf8("Num"));
        Num->setGeometry(QRect(24, 27, 40, 27));
        Num->setFont(font);
        Grade = new QLabel(AddStu);
        Grade->setObjectName(QString::fromUtf8("Grade"));
        Grade->setGeometry(QRect(24, 93, 40, 27));
        Grade->setFont(font);
        TelText = new QLineEdit(AddStu);
        TelText->setObjectName(QString::fromUtf8("TelText"));
        TelText->setGeometry(QRect(70, 195, 141, 20));
        sizePolicy.setHeightForWidth(TelText->sizePolicy().hasHeightForWidth());
        TelText->setSizePolicy(sizePolicy);
        TelText->setFont(font1);
        TelText->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	setMaxLength(8);\n"
"    setPlaceholderText(\"abc\");\n"
"	background:transparent;\n"
"	border-width:0;\n"
"	border-style:outset;\n"
"\n"
"}\n"
"\n"
"\n"
""));
        TelText->setInputMethodHints(Qt::ImhDigitsOnly);
        TelText->setMaxLength(11);
        TelText->setFrame(false);
        TelText->setClearButtonEnabled(true);
        NumText = new QLineEdit(AddStu);
        NumText->setObjectName(QString::fromUtf8("NumText"));
        NumText->setGeometry(QRect(70, 30, 141, 20));
        sizePolicy.setHeightForWidth(NumText->sizePolicy().hasHeightForWidth());
        NumText->setSizePolicy(sizePolicy);
        NumText->setFont(font1);
        NumText->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	setMaxLength(8);\n"
"	background:transparent;\n"
"	border-width:0;\n"
"	border-style:outset;\n"
"}\n"
"\n"
"\n"
""));
        NumText->setInputMethodHints(Qt::ImhDigitsOnly);
        NumText->setMaxLength(8);
        NumText->setFrame(false);
        NumText->setClearButtonEnabled(true);
        yes = new QPushButton(AddStu);
        yes->setObjectName(QString::fromUtf8("yes"));
        yes->setGeometry(QRect(120, 250, 121, 31));
        yes->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        picture = new QPushButton(AddStu);
        picture->setObjectName(QString::fromUtf8("picture"));
        picture->setGeometry(QRect(270, 190, 101, 21));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(9);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(9);
        picture->setFont(font2);
        picture->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:5px;\n"
"	background-color: rgba(0, 150, 136, 0.75);\n"
"	color:rgb(255,255,255);\n"
"	font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
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
        showpic = new QLabel(AddStu);
        showpic->setObjectName(QString::fromUtf8("showpic"));
        showpic->setGeometry(QRect(270, 30, 101, 141));
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
        QWidget::setTabOrder(NumText, NameText);
        QWidget::setTabOrder(NameText, GradeBox);
        QWidget::setTabOrder(GradeBox, PartBox);
        QWidget::setTabOrder(PartBox, ClassBox);
        QWidget::setTabOrder(ClassBox, TelText);
        QWidget::setTabOrder(TelText, picture);
        QWidget::setTabOrder(picture, yes);
        QWidget::setTabOrder(yes, back);

        retranslateUi(AddStu);

        GradeBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AddStu);
    } // setupUi

    void retranslateUi(QDialog *AddStu)
    {
        AddStu->setWindowTitle(QCoreApplication::translate("AddStu", "\346\226\260\345\242\236\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        back->setText(QCoreApplication::translate("AddStu", "\350\277\224\345\233\236", nullptr));
        ClassBox->setItemText(0, QCoreApplication::translate("AddStu", "\350\257\267\345\205\210\351\200\211\346\213\251\345\255\246\351\231\242", nullptr));

        ClassBox->setCurrentText(QCoreApplication::translate("AddStu", "\350\257\267\345\205\210\351\200\211\346\213\251\345\255\246\351\231\242", nullptr));
        PartBox->setItemText(0, QCoreApplication::translate("AddStu", "\350\257\267\351\200\211\346\213\251\345\255\246\351\231\242", nullptr));
        PartBox->setItemText(1, QCoreApplication::translate("AddStu", "\350\256\241\347\256\227\346\234\272\345\255\246\351\231\242", nullptr));
        PartBox->setItemText(2, QCoreApplication::translate("AddStu", "\347\224\265\345\212\233\345\255\246\351\231\242", nullptr));
        PartBox->setItemText(3, QCoreApplication::translate("AddStu", "\344\277\241\346\216\247\345\255\246\351\231\242", nullptr));
        PartBox->setItemText(4, QCoreApplication::translate("AddStu", "\345\256\211\345\205\250\345\255\246\351\231\242", nullptr));
        PartBox->setItemText(5, QCoreApplication::translate("AddStu", "\345\214\226\345\267\245\345\255\246\351\231\242", nullptr));

        Class->setText(QCoreApplication::translate("AddStu", "\347\217\255\347\272\247", nullptr));
        Tel->setText(QCoreApplication::translate("AddStu", "\347\224\265\350\257\235", nullptr));
        GradeBox->setItemText(0, QCoreApplication::translate("AddStu", "\350\257\267\351\200\211\346\213\251\345\271\264\347\272\247", nullptr));
        GradeBox->setItemText(1, QCoreApplication::translate("AddStu", "2017", nullptr));
        GradeBox->setItemText(2, QCoreApplication::translate("AddStu", "2018", nullptr));
        GradeBox->setItemText(3, QCoreApplication::translate("AddStu", "2019", nullptr));
        GradeBox->setItemText(4, QCoreApplication::translate("AddStu", "2020", nullptr));
        GradeBox->setItemText(5, QCoreApplication::translate("AddStu", "2021", nullptr));

        Part->setText(QCoreApplication::translate("AddStu", "\345\255\246\351\231\242", nullptr));
        Name->setText(QCoreApplication::translate("AddStu", "\345\247\223\345\220\215", nullptr));
        NameText->setInputMask(QString());
        NameText->setText(QString());
        NameText->setPlaceholderText(QCoreApplication::translate("AddStu", "\350\257\267\350\276\223\345\205\245\345\247\223\345\220\215", nullptr));
        Num->setText(QCoreApplication::translate("AddStu", "\345\255\246\345\217\267", nullptr));
        Grade->setText(QCoreApplication::translate("AddStu", "\345\271\264\347\272\247", nullptr));
        TelText->setInputMask(QString());
        TelText->setText(QString());
        TelText->setPlaceholderText(QCoreApplication::translate("AddStu", "\350\257\267\350\276\223\345\205\245\347\224\265\350\257\235", nullptr));
        NumText->setInputMask(QString());
        NumText->setText(QString());
        NumText->setPlaceholderText(QCoreApplication::translate("AddStu", "\346\234\200\345\244\232\345\205\253\344\275\215", nullptr));
        yes->setText(QCoreApplication::translate("AddStu", "\347\241\256\350\256\244", nullptr));
        picture->setText(QCoreApplication::translate("AddStu", "\344\277\256\346\224\271\347\205\247\347\211\207", nullptr));
        showpic->setText(QCoreApplication::translate("AddStu", "\346\234\252\344\270\212\344\274\240\347\205\247\347\211\207", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddStu: public Ui_AddStu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTU_H
