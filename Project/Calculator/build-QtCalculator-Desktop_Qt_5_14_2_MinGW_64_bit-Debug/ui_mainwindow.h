/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionStandard;
    QAction *actionAdvanced;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_expression;
    QLabel *label_Result;
    QTextEdit *textEdit_history;
    QSpacerItem *verticalSpacer;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton_radians;
    QRadioButton *radioButton_degrees;
    QPushButton *pushButton_history;
    QPushButton *pushButton_clear_history;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QPushButton *pushButton_c;
    QPushButton *pushButton_bracket_left;
    QPushButton *pushButton_bracket_right;
    QPushButton *pushButton_backspace;
    QPushButton *pushButton_exp;
    QPushButton *pushButton_ln;
    QPushButton *pushButton_caret;
    QPushButton *pushButton_sqrt;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_div;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_mul;
    QPushButton *pushButton_tan;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_sub;
    QPushButton *pushButton_ctg;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_add;
    QPushButton *pushButton_equally;
    QPushButton *pushButton_0;
    QPushButton *pushButton_pi;
    QPushButton *pushButton_mod;
    QMenuBar *menuBar;
    QMenu *menuMain;
    QMenu *menuMode;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(586, 518);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        MainWindow->setFont(font);
        MainWindow->setMouseTracking(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        actionStandard = new QAction(MainWindow);
        actionStandard->setObjectName(QString::fromUtf8("actionStandard"));
        actionStandard->setCheckable(true);
        actionStandard->setChecked(true);
        actionAdvanced = new QAction(MainWindow);
        actionAdvanced->setObjectName(QString::fromUtf8("actionAdvanced"));
        actionAdvanced->setCheckable(true);
        actionAdvanced->setChecked(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setMinimumSize(QSize(300, 400));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEdit_expression = new QLineEdit(centralwidget);
        lineEdit_expression->setObjectName(QString::fromUtf8("lineEdit_expression"));
        lineEdit_expression->setMaximumSize(QSize(16777215, 28));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Consolas"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        font1.setKerning(true);
        lineEdit_expression->setFont(font1);
        lineEdit_expression->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(lineEdit_expression);

        label_Result = new QLabel(centralwidget);
        label_Result->setObjectName(QString::fromUtf8("label_Result"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_Result->sizePolicy().hasHeightForWidth());
        label_Result->setSizePolicy(sizePolicy1);
        label_Result->setMinimumSize(QSize(0, 20));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Consolas"));
        font2.setPointSize(14);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        label_Result->setFont(font2);

        verticalLayout->addWidget(label_Result);

        textEdit_history = new QTextEdit(centralwidget);
        textEdit_history->setObjectName(QString::fromUtf8("textEdit_history"));
        textEdit_history->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(textEdit_history->sizePolicy().hasHeightForWidth());
        textEdit_history->setSizePolicy(sizePolicy2);
        QFont font3;
        font3.setFamily(QString::fromUtf8("Consolas"));
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setWeight(75);
        textEdit_history->setFont(font3);
        textEdit_history->setFocusPolicy(Qt::NoFocus);
        textEdit_history->setLayoutDirection(Qt::LeftToRight);
        textEdit_history->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(textEdit_history);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        radioButton_radians = new QRadioButton(frame);
        radioButton_radians->setObjectName(QString::fromUtf8("radioButton_radians"));
        radioButton_radians->setChecked(true);

        horizontalLayout_2->addWidget(radioButton_radians);

        radioButton_degrees = new QRadioButton(frame);
        radioButton_degrees->setObjectName(QString::fromUtf8("radioButton_degrees"));

        horizontalLayout_2->addWidget(radioButton_degrees);

        pushButton_history = new QPushButton(frame);
        pushButton_history->setObjectName(QString::fromUtf8("pushButton_history"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Consolas"));
        font4.setPointSize(10);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        pushButton_history->setFont(font4);

        horizontalLayout_2->addWidget(pushButton_history);

        pushButton_clear_history = new QPushButton(frame);
        pushButton_clear_history->setObjectName(QString::fromUtf8("pushButton_clear_history"));
        pushButton_clear_history->setFont(font4);

        horizontalLayout_2->addWidget(pushButton_clear_history);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addWidget(frame);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        pushButton_c = new QPushButton(centralwidget);
        pushButton_c->setObjectName(QString::fromUtf8("pushButton_c"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_c->sizePolicy().hasHeightForWidth());
        pushButton_c->setSizePolicy(sizePolicy3);
        pushButton_c->setMinimumSize(QSize(25, 25));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Consolas"));
        font5.setPointSize(10);
        font5.setBold(true);
        font5.setItalic(false);
        font5.setWeight(75);
        pushButton_c->setFont(font5);
        pushButton_c->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(pushButton_c, 0, 0, 1, 1);

        pushButton_bracket_left = new QPushButton(centralwidget);
        pushButton_bracket_left->setObjectName(QString::fromUtf8("pushButton_bracket_left"));
        sizePolicy3.setHeightForWidth(pushButton_bracket_left->sizePolicy().hasHeightForWidth());
        pushButton_bracket_left->setSizePolicy(sizePolicy3);
        pushButton_bracket_left->setMinimumSize(QSize(25, 25));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Consolas"));
        font6.setPointSize(10);
        font6.setBold(true);
        font6.setItalic(false);
        font6.setWeight(75);
        font6.setStyleStrategy(QFont::PreferDefault);
        pushButton_bracket_left->setFont(font6);
        pushButton_bracket_left->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(pushButton_bracket_left, 0, 1, 1, 1);

        pushButton_bracket_right = new QPushButton(centralwidget);
        pushButton_bracket_right->setObjectName(QString::fromUtf8("pushButton_bracket_right"));
        sizePolicy3.setHeightForWidth(pushButton_bracket_right->sizePolicy().hasHeightForWidth());
        pushButton_bracket_right->setSizePolicy(sizePolicy3);
        pushButton_bracket_right->setMinimumSize(QSize(25, 25));
        pushButton_bracket_right->setFont(font6);
        pushButton_bracket_right->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(pushButton_bracket_right, 0, 2, 1, 1);

        pushButton_backspace = new QPushButton(centralwidget);
        pushButton_backspace->setObjectName(QString::fromUtf8("pushButton_backspace"));
        sizePolicy3.setHeightForWidth(pushButton_backspace->sizePolicy().hasHeightForWidth());
        pushButton_backspace->setSizePolicy(sizePolicy3);
        pushButton_backspace->setMinimumSize(QSize(25, 25));
        pushButton_backspace->setFont(font6);
        pushButton_backspace->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(pushButton_backspace, 0, 3, 1, 1);

        pushButton_exp = new QPushButton(centralwidget);
        pushButton_exp->setObjectName(QString::fromUtf8("pushButton_exp"));
        sizePolicy3.setHeightForWidth(pushButton_exp->sizePolicy().hasHeightForWidth());
        pushButton_exp->setSizePolicy(sizePolicy3);
        pushButton_exp->setMinimumSize(QSize(25, 25));
        pushButton_exp->setFont(font6);
        pushButton_exp->setFocusPolicy(Qt::NoFocus);
        pushButton_exp->setAutoFillBackground(false);

        gridLayout->addWidget(pushButton_exp, 1, 0, 1, 1);

        pushButton_ln = new QPushButton(centralwidget);
        pushButton_ln->setObjectName(QString::fromUtf8("pushButton_ln"));
        sizePolicy3.setHeightForWidth(pushButton_ln->sizePolicy().hasHeightForWidth());
        pushButton_ln->setSizePolicy(sizePolicy3);
        pushButton_ln->setMinimumSize(QSize(25, 25));
        pushButton_ln->setFont(font6);
        pushButton_ln->setFocusPolicy(Qt::NoFocus);
        pushButton_ln->setAutoFillBackground(false);

        gridLayout->addWidget(pushButton_ln, 1, 1, 1, 1);

        pushButton_caret = new QPushButton(centralwidget);
        pushButton_caret->setObjectName(QString::fromUtf8("pushButton_caret"));
        sizePolicy3.setHeightForWidth(pushButton_caret->sizePolicy().hasHeightForWidth());
        pushButton_caret->setSizePolicy(sizePolicy3);
        pushButton_caret->setMinimumSize(QSize(25, 25));
        pushButton_caret->setFont(font6);
        pushButton_caret->setFocusPolicy(Qt::NoFocus);
        pushButton_caret->setAutoFillBackground(false);

        gridLayout->addWidget(pushButton_caret, 1, 2, 1, 1);

        pushButton_sqrt = new QPushButton(centralwidget);
        pushButton_sqrt->setObjectName(QString::fromUtf8("pushButton_sqrt"));
        sizePolicy3.setHeightForWidth(pushButton_sqrt->sizePolicy().hasHeightForWidth());
        pushButton_sqrt->setSizePolicy(sizePolicy3);
        pushButton_sqrt->setMinimumSize(QSize(25, 25));
        pushButton_sqrt->setFont(font6);
        pushButton_sqrt->setFocusPolicy(Qt::NoFocus);
        pushButton_sqrt->setAutoFillBackground(false);

        gridLayout->addWidget(pushButton_sqrt, 1, 3, 1, 1);

        pushButton_sin = new QPushButton(centralwidget);
        pushButton_sin->setObjectName(QString::fromUtf8("pushButton_sin"));
        sizePolicy3.setHeightForWidth(pushButton_sin->sizePolicy().hasHeightForWidth());
        pushButton_sin->setSizePolicy(sizePolicy3);
        pushButton_sin->setMinimumSize(QSize(25, 25));
        pushButton_sin->setFont(font6);
        pushButton_sin->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(pushButton_sin, 1, 4, 1, 1);

        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy3.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy3);
        pushButton_7->setMinimumSize(QSize(25, 25));
        pushButton_7->setFont(font6);
        pushButton_7->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(pushButton_7, 2, 0, 1, 1);

        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy3.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy3);
        pushButton_8->setMinimumSize(QSize(25, 25));
        pushButton_8->setFont(font6);
        pushButton_8->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(pushButton_8, 2, 1, 1, 1);

        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy3.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy3);
        pushButton_9->setMinimumSize(QSize(25, 25));
        pushButton_9->setFont(font6);
        pushButton_9->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(pushButton_9, 2, 2, 1, 1);

        pushButton_div = new QPushButton(centralwidget);
        pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));
        sizePolicy3.setHeightForWidth(pushButton_div->sizePolicy().hasHeightForWidth());
        pushButton_div->setSizePolicy(sizePolicy3);
        pushButton_div->setMinimumSize(QSize(25, 25));
        pushButton_div->setFont(font6);
        pushButton_div->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(pushButton_div, 2, 3, 1, 1);

        pushButton_cos = new QPushButton(centralwidget);
        pushButton_cos->setObjectName(QString::fromUtf8("pushButton_cos"));
        sizePolicy3.setHeightForWidth(pushButton_cos->sizePolicy().hasHeightForWidth());
        pushButton_cos->setSizePolicy(sizePolicy3);
        pushButton_cos->setMinimumSize(QSize(25, 25));
        pushButton_cos->setFont(font6);
        pushButton_cos->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(pushButton_cos, 2, 4, 1, 1);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy3.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy3);
        pushButton_4->setMinimumSize(QSize(25, 25));
        pushButton_4->setFont(font6);
        pushButton_4->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(pushButton_4, 3, 0, 1, 1);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy3.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy3);
        pushButton_5->setMinimumSize(QSize(25, 25));
        pushButton_5->setFont(font6);
        pushButton_5->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(pushButton_5, 3, 1, 1, 1);

        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy3.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy3);
        pushButton_6->setMinimumSize(QSize(25, 25));
        pushButton_6->setFont(font6);
        pushButton_6->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(pushButton_6, 3, 2, 1, 1);

        pushButton_mul = new QPushButton(centralwidget);
        pushButton_mul->setObjectName(QString::fromUtf8("pushButton_mul"));
        sizePolicy3.setHeightForWidth(pushButton_mul->sizePolicy().hasHeightForWidth());
        pushButton_mul->setSizePolicy(sizePolicy3);
        pushButton_mul->setMinimumSize(QSize(25, 25));
        pushButton_mul->setFont(font6);
        pushButton_mul->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(pushButton_mul, 3, 3, 1, 1);

        pushButton_tan = new QPushButton(centralwidget);
        pushButton_tan->setObjectName(QString::fromUtf8("pushButton_tan"));
        sizePolicy3.setHeightForWidth(pushButton_tan->sizePolicy().hasHeightForWidth());
        pushButton_tan->setSizePolicy(sizePolicy3);
        pushButton_tan->setMinimumSize(QSize(25, 25));
        pushButton_tan->setFont(font6);
        pushButton_tan->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(pushButton_tan, 3, 4, 1, 1);

        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        sizePolicy3.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy3);
        pushButton_1->setMinimumSize(QSize(25, 25));
        pushButton_1->setFont(font6);
        pushButton_1->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(pushButton_1, 4, 0, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy3.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy3);
        pushButton_2->setMinimumSize(QSize(25, 25));
        pushButton_2->setFont(font6);
        pushButton_2->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(pushButton_2, 4, 1, 1, 1);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy3.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy3);
        pushButton_3->setMinimumSize(QSize(25, 25));
        pushButton_3->setFont(font6);
        pushButton_3->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(pushButton_3, 4, 2, 1, 1);

        pushButton_sub = new QPushButton(centralwidget);
        pushButton_sub->setObjectName(QString::fromUtf8("pushButton_sub"));
        sizePolicy3.setHeightForWidth(pushButton_sub->sizePolicy().hasHeightForWidth());
        pushButton_sub->setSizePolicy(sizePolicy3);
        pushButton_sub->setMinimumSize(QSize(25, 25));
        pushButton_sub->setFont(font6);
        pushButton_sub->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(pushButton_sub, 4, 3, 1, 1);

        pushButton_ctg = new QPushButton(centralwidget);
        pushButton_ctg->setObjectName(QString::fromUtf8("pushButton_ctg"));
        sizePolicy3.setHeightForWidth(pushButton_ctg->sizePolicy().hasHeightForWidth());
        pushButton_ctg->setSizePolicy(sizePolicy3);
        pushButton_ctg->setMinimumSize(QSize(25, 25));
        pushButton_ctg->setFont(font6);
        pushButton_ctg->setFocusPolicy(Qt::NoFocus);
        pushButton_ctg->setAutoFillBackground(false);

        gridLayout->addWidget(pushButton_ctg, 4, 4, 1, 1);

        pushButton_dot = new QPushButton(centralwidget);
        pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
        sizePolicy3.setHeightForWidth(pushButton_dot->sizePolicy().hasHeightForWidth());
        pushButton_dot->setSizePolicy(sizePolicy3);
        pushButton_dot->setMinimumSize(QSize(25, 25));
        pushButton_dot->setFont(font6);
        pushButton_dot->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(pushButton_dot, 5, 2, 1, 1);

        pushButton_add = new QPushButton(centralwidget);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));
        sizePolicy3.setHeightForWidth(pushButton_add->sizePolicy().hasHeightForWidth());
        pushButton_add->setSizePolicy(sizePolicy3);
        pushButton_add->setMinimumSize(QSize(25, 25));
        pushButton_add->setFont(font6);
        pushButton_add->setFocusPolicy(Qt::NoFocus);
        pushButton_add->setCheckable(false);
        pushButton_add->setAutoDefault(false);
        pushButton_add->setFlat(false);

        gridLayout->addWidget(pushButton_add, 5, 3, 1, 1);

        pushButton_equally = new QPushButton(centralwidget);
        pushButton_equally->setObjectName(QString::fromUtf8("pushButton_equally"));
        sizePolicy3.setHeightForWidth(pushButton_equally->sizePolicy().hasHeightForWidth());
        pushButton_equally->setSizePolicy(sizePolicy3);
        pushButton_equally->setMinimumSize(QSize(25, 25));
        pushButton_equally->setFont(font6);
        pushButton_equally->setFocusPolicy(Qt::NoFocus);
        pushButton_equally->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 0, 0, 255), stop:0.166 rgba(255, 255, 0, 255), stop:0.333 rgba(0, 255, 0, 255), stop:0.5 rgba(0, 255, 255, 255), stop:0.666 rgba(0, 0, 255, 255), stop:0.833 rgba(255, 0, 255, 255), stop:1 rgba(255, 0, 0, 255));"));

        gridLayout->addWidget(pushButton_equally, 5, 4, 1, 1);

        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        sizePolicy3.setHeightForWidth(pushButton_0->sizePolicy().hasHeightForWidth());
        pushButton_0->setSizePolicy(sizePolicy3);
        pushButton_0->setMinimumSize(QSize(25, 25));
        pushButton_0->setFont(font6);
        pushButton_0->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(pushButton_0, 5, 1, 1, 1);

        pushButton_pi = new QPushButton(centralwidget);
        pushButton_pi->setObjectName(QString::fromUtf8("pushButton_pi"));
        sizePolicy3.setHeightForWidth(pushButton_pi->sizePolicy().hasHeightForWidth());
        pushButton_pi->setSizePolicy(sizePolicy3);
        pushButton_pi->setMinimumSize(QSize(25, 25));
        pushButton_pi->setFont(font6);
        pushButton_pi->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(pushButton_pi, 5, 0, 1, 1);

        pushButton_mod = new QPushButton(centralwidget);
        pushButton_mod->setObjectName(QString::fromUtf8("pushButton_mod"));
        pushButton_mod->setMinimumSize(QSize(25, 25));
        pushButton_mod->setMaximumSize(QSize(16777215, 16777215));
        pushButton_mod->setFont(font5);
        pushButton_mod->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(pushButton_mod, 0, 4, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalLayout->setStretch(2, 1);
        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 586, 26));
        menuMain = new QMenu(menuBar);
        menuMain->setObjectName(QString::fromUtf8("menuMain"));
        menuMode = new QMenu(menuMain);
        menuMode->setObjectName(QString::fromUtf8("menuMode"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuMain->menuAction());
        menuMain->addAction(menuMode->menuAction());
        menuMode->addAction(actionStandard);
        menuMode->addAction(actionAdvanced);

        retranslateUi(MainWindow);

        pushButton_add->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Calculator", nullptr));
        actionStandard->setText(QCoreApplication::translate("MainWindow", "\346\240\207\345\207\206", nullptr));
#if QT_CONFIG(tooltip)
        actionStandard->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Standard</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAdvanced->setText(QCoreApplication::translate("MainWindow", "\350\264\267\346\254\276\350\256\241\347\256\227\345\231\250", nullptr));
        lineEdit_expression->setText(QString());
        label_Result->setText(QString());
        radioButton_radians->setText(QCoreApplication::translate("MainWindow", "\345\274\247\345\272\246", nullptr));
        radioButton_degrees->setText(QCoreApplication::translate("MainWindow", "\350\247\222\345\272\246", nullptr));
        pushButton_history->setText(QCoreApplication::translate("MainWindow", "\345\216\206\345\217\262\350\256\260\345\275\225", nullptr));
        pushButton_clear_history->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\350\256\260\345\275\225", nullptr));
        pushButton_c->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244", nullptr));
        pushButton_bracket_left->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        pushButton_bracket_right->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        pushButton_backspace->setText(QCoreApplication::translate("MainWindow", "\351\200\200\346\240\274", nullptr));
        pushButton_exp->setText(QCoreApplication::translate("MainWindow", "EXP", nullptr));
        pushButton_ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        pushButton_caret->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        pushButton_sqrt->setText(QCoreApplication::translate("MainWindow", "\342\210\232", nullptr));
        pushButton_sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_ctg->setText(QCoreApplication::translate("MainWindow", "ctg", nullptr));
        pushButton_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_equally->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_pi->setText(QCoreApplication::translate("MainWindow", "\317\200", nullptr));
        pushButton_mod->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        menuMain->setTitle(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251", nullptr));
        menuMode->setTitle(QCoreApplication::translate("MainWindow", "\346\250\241\345\274\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
