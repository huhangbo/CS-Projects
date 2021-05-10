/********************************************************************************
** Form generated from reading UI file 'loan.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOAN_H
#define UI_LOAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loan
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_1;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_1;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_1;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_7;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;

    void setupUi(QDialog *loan)
    {
        if (loan->objectName().isEmpty())
            loan->setObjectName(QString::fromUtf8("loan"));
        loan->resize(485, 465);
        loan->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        verticalLayoutWidget = new QWidget(loan);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 211, 181));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_1 = new QLabel(verticalLayoutWidget);
        label_1->setObjectName(QString::fromUtf8("label_1"));

        verticalLayout->addWidget(label_1);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        horizontalLayoutWidget = new QWidget(loan);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(230, 10, 251, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_2 = new QRadioButton(horizontalLayoutWidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setChecked(true);

        horizontalLayout->addWidget(radioButton_2);

        radioButton_1 = new QRadioButton(horizontalLayoutWidget);
        radioButton_1->setObjectName(QString::fromUtf8("radioButton_1"));

        horizontalLayout->addWidget(radioButton_1);

        verticalLayoutWidget_2 = new QWidget(loan);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(230, 50, 251, 141));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_1 = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_1->setObjectName(QString::fromUtf8("lineEdit_1"));
        lineEdit_1->setClearButtonEnabled(false);

        verticalLayout_2->addWidget(lineEdit_1);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout_2->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        verticalLayout_2->addWidget(lineEdit_3);

        pushButton = new QPushButton(loan);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(80, 200, 111, 31));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 255);"));
        pushButton_2 = new QPushButton(loan);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(280, 200, 101, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        verticalLayoutWidget_3 = new QWidget(loan);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(9, 239, 211, 211));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(verticalLayoutWidget_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_3->addWidget(label_6);

        label_5 = new QLabel(verticalLayoutWidget_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_3->addWidget(label_5);

        label_7 = new QLabel(verticalLayoutWidget_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_3->addWidget(label_7);

        verticalLayoutWidget_4 = new QWidget(loan);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(240, 240, 241, 211));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        lineEdit_4 = new QLineEdit(verticalLayoutWidget_4);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        verticalLayout_4->addWidget(lineEdit_4);

        lineEdit_5 = new QLineEdit(verticalLayoutWidget_4);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        verticalLayout_4->addWidget(lineEdit_5);

        lineEdit_6 = new QLineEdit(verticalLayoutWidget_4);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        verticalLayout_4->addWidget(lineEdit_6);


        retranslateUi(loan);

        QMetaObject::connectSlotsByName(loan);
    } // setupUi

    void retranslateUi(QDialog *loan)
    {
        loan->setWindowTitle(QCoreApplication::translate("loan", "Dialog", nullptr));
        label_1->setText(QCoreApplication::translate("loan", "\350\277\230\346\254\276\346\226\271\345\274\217", nullptr));
        label_2->setText(QCoreApplication::translate("loan", "\350\277\230\346\254\276\345\271\264\351\231\220\357\274\210\345\271\264\357\274\211", nullptr));
        label_3->setText(QCoreApplication::translate("loan", "\350\264\267\346\254\276\351\207\221\351\242\235\357\274\210\344\270\207\345\205\203\357\274\211", nullptr));
        label_4->setText(QCoreApplication::translate("loan", "\350\264\267\346\254\276\345\210\251\347\216\207\357\274\210%\357\274\211", nullptr));
        radioButton_2->setText(QCoreApplication::translate("loan", "\347\255\211\351\242\235\346\234\254\346\201\257", nullptr));
        radioButton_1->setText(QCoreApplication::translate("loan", "\347\255\211\351\242\235\346\234\254\351\207\221", nullptr));
        pushButton->setText(QCoreApplication::translate("loan", "\350\256\241\347\256\227", nullptr));
        pushButton_2->setText(QCoreApplication::translate("loan", "\351\207\215\346\226\260\350\256\241\347\256\227", nullptr));
        label_6->setText(QCoreApplication::translate("loan", "\346\234\210\345\235\207\350\277\230\346\254\276\357\274\210\345\205\203\357\274\211", nullptr));
        label_5->setText(QCoreApplication::translate("loan", "\345\210\251\346\201\257\346\200\273\351\242\235\357\274\210\345\205\203\357\274\211", nullptr));
        label_7->setText(QCoreApplication::translate("loan", "\350\277\230\346\254\276\346\200\273\351\242\235\357\274\210\345\205\203\357\274\211", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loan: public Ui_loan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOAN_H
