#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QKeyEvent>
#include "calculator.h"
#include"loan.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = nullptr);
	~MainWindow();

private slots:
	void keyPressEvent(QKeyEvent *key);

	void addTextInLineEdit(QString text);

    void simpleAction(QString begin, QString end);

	void on_pushButton_history_clicked();

	void on_pushButton_c_clicked();

	void on_pushButton_1_clicked();

	void on_pushButton_2_clicked();

	void on_pushButton_3_clicked();

	void on_pushButton_0_clicked();

	void on_pushButton_4_clicked();

	void on_pushButton_5_clicked();

	void on_pushButton_6_clicked();

	void on_pushButton_7_clicked();

	void on_pushButton_8_clicked();

	void on_pushButton_9_clicked();

	void on_pushButton_dot_clicked();

	void on_pushButton_add_clicked();

	void on_pushButton_mul_clicked();

	void on_pushButton_div_clicked();

	void on_pushButton_sub_clicked();

	void on_pushButton_exp_clicked();

	void on_pushButton_ln_clicked();

	void on_pushButton_backspace_clicked();

	void on_pushButton_equally_clicked();

	void on_pushButton_bracket_left_clicked();

	void on_pushButton_bracket_right_clicked();

	void on_pushButton_pi_clicked();

	void on_pushButton_ctg_clicked();

	void on_pushButton_sin_clicked();

	void on_pushButton_tan_clicked();

	void on_pushButton_cos_clicked();

	void on_pushButton_sqrt_clicked();

    void on_pushButton_mod_clicked();

	void on_pushButton_caret_clicked();

    void on_pushButton_clear_history_clicked();

    void on_actionStandard_changed();

    void on_actionAdvanced_changed();

private:
	Ui::MainWindow *ui;

    calculator calc;

    QString expression;
    loan *new_loan;

};
#endif // MAINWINDOW_H
