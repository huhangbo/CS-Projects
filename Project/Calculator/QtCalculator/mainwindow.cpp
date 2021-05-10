#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
	, ui(new Ui::MainWindow)
{
	ui->setupUi(this);
    ui->textEdit_history->setVisible(false);
    ui->pushButton_clear_history->setVisible(false);
}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *key)
{
    int keyCode;
	keyCode=key->key();
	switch (keyCode)
	{
	case Qt::Key_0:
		on_pushButton_0_clicked();
		break;
	case Qt::Key_1:
		on_pushButton_1_clicked();
		break;
	case Qt::Key_2:
		on_pushButton_2_clicked();
		break;
	case Qt::Key_3:
		on_pushButton_3_clicked();
		break;
	case Qt::Key_4:
		on_pushButton_4_clicked();
		break;
	case Qt::Key_5:
		on_pushButton_5_clicked();
		break;
	case Qt::Key_6:
		on_pushButton_6_clicked();
		break;
	case Qt::Key_7:
		on_pushButton_7_clicked();
		break;
	case Qt::Key_8:
		on_pushButton_8_clicked();
		break;
	case Qt::Key_9:
		on_pushButton_9_clicked();
		break;
	case Qt::Key_Backspace:
		on_pushButton_backspace_clicked();
		break;
	case Qt::Key_Period:
		on_pushButton_dot_clicked();
		break;
	case Qt::Key_Plus:
		on_pushButton_add_clicked();
		break;
	case Qt::Key_Minus:
		on_pushButton_sub_clicked();
		break;
	case Qt::Key_Enter:
		on_pushButton_equally_clicked();
		break;
    case Qt::Key_Equal:
        on_pushButton_equally_clicked();
        break;
    case Qt::Key_ParenLeft:
		on_pushButton_bracket_left_clicked();
		break;
    case Qt::Key_ParenRight:
		on_pushButton_bracket_right_clicked();
		break;
    case Qt::Key_AsciiCircum:
		on_pushButton_caret_clicked();
		break;
    case Qt::Key_Slash:
        on_pushButton_div_clicked();
        break;
    case Qt::Key_multiply:
        on_pushButton_mul_clicked();
        break;
	}
}

void MainWindow::addTextInLineEdit(QString text)
{
	if(ui->lineEdit_expression->text() == "" || ui->lineEdit_expression->text() == "0")
		ui->lineEdit_expression->setText(text);
	else
        ui->lineEdit_expression->insert(text);
}

void MainWindow::simpleAction(QString begin, QString end)
{
    expression=begin+ui->lineEdit_expression->text()+end;
    on_pushButton_equally_clicked();
}

void MainWindow::on_pushButton_history_clicked()
{
    ui->textEdit_history->setVisible(!ui->textEdit_history->isVisible());
    ui->pushButton_clear_history->setVisible(!ui->pushButton_clear_history->isVisible());
}

void MainWindow::on_pushButton_c_clicked()
{
	ui->lineEdit_expression->setText("0");
}

void MainWindow::on_pushButton_0_clicked()
{
	addTextInLineEdit("0");
}

void MainWindow::on_pushButton_1_clicked()
{
	addTextInLineEdit("1");
}

void MainWindow::on_pushButton_2_clicked()
{
	addTextInLineEdit("2");
}

void MainWindow::on_pushButton_3_clicked()
{
	addTextInLineEdit("3");
}

void MainWindow::on_pushButton_4_clicked()
{
	addTextInLineEdit("4");
}

void MainWindow::on_pushButton_5_clicked()
{
	addTextInLineEdit("5");
}

void MainWindow::on_pushButton_6_clicked()
{
	addTextInLineEdit("6");
}

void MainWindow::on_pushButton_7_clicked()
{
	addTextInLineEdit("7");
}

void MainWindow::on_pushButton_8_clicked()
{
	addTextInLineEdit("8");
}

void MainWindow::on_pushButton_9_clicked()
{
	addTextInLineEdit("9");
}

void MainWindow::on_pushButton_dot_clicked()
{
	ui->lineEdit_expression->insert(".");
}

void MainWindow::on_pushButton_add_clicked()
{
	ui->lineEdit_expression->insert("+");
}

void MainWindow::on_pushButton_sub_clicked()
{
	ui->lineEdit_expression->insert("-");
}

void MainWindow::on_pushButton_mul_clicked()
{
	ui->lineEdit_expression->insert("*");
}

void MainWindow::on_pushButton_div_clicked()
{
	ui->lineEdit_expression->insert("/");
}

void MainWindow::on_pushButton_mod_clicked()
{
    ui->lineEdit_expression->insert("%");
}

void MainWindow::on_pushButton_backspace_clicked()
{
	if(ui->lineEdit_expression->text()!="0")
	{
        int position = ui->lineEdit_expression->cursorPosition();
		QString temp;
		temp=ui->lineEdit_expression->text();
        temp.remove(ui->lineEdit_expression->cursorPosition()-1,1);
		if(temp!="")
        {
			ui->lineEdit_expression->setText(temp);
            ui->lineEdit_expression->setCursorPosition(position-1);
        }
        else
            ui->lineEdit_expression->setText("0");
	}
}

void MainWindow::on_pushButton_equally_clicked()
{
    try {
        TParser::trigonometryMode mode;
        if(ui->radioButton_radians->isChecked()) mode = TParser::Radians;
        else mode = TParser::Degrees;
        calc.setMode(mode);
        if(ui->actionAdvanced->isChecked())
            calc.setExpression(ui->lineEdit_expression->text());
        else
        {
            if(expression.isEmpty()) expression = ui->lineEdit_expression->text();
            calc.setExpression(expression);
        }
        calc.calculate();
        ui->label_Result->setText(calc.getResult());
        if(ui->actionAdvanced->isChecked())
            ui->textEdit_history->append(ui->lineEdit_expression->text() + "=" + calc.getResult());
        else
        {
            ui->textEdit_history->append(expression + "=" + calc.getResult());
            expression.clear();
        }
    } catch (calculator::err er) {
        switch (er) {
            case 1:
                ui->label_Result->setText("Empty expression");
                break;
            case 2:
                ui->label_Result->setText("Div by zero");
                break;
            case 3:
                ui->label_Result->setText("Expression contains equal sign");
                break;
            case 4:
                ui->label_Result->setText("Something went wrong");
                break;
        }
    }
}

void MainWindow::on_pushButton_bracket_left_clicked()
{
	addTextInLineEdit("(");
}

void MainWindow::on_pushButton_bracket_right_clicked()
{
	addTextInLineEdit(")");
}

void MainWindow::on_pushButton_exp_clicked()
{
    if(ui->actionAdvanced->isChecked())
    {
        addTextInLineEdit("exp()");
        ui->lineEdit_expression->setCursorPosition(ui->lineEdit_expression->cursorPosition()-1);
    } else simpleAction("exp(",")");
}

void MainWindow::on_pushButton_ln_clicked()
{
    if(ui->actionAdvanced->isChecked())
    {
        addTextInLineEdit("ln()");
        ui->lineEdit_expression->setCursorPosition(ui->lineEdit_expression->cursorPosition()-1);
    } else simpleAction("ln(",")");
}

void MainWindow::on_pushButton_pi_clicked()
{
	addTextInLineEdit("pi");
}

void MainWindow::on_pushButton_tan_clicked()
{
    if(ui->actionAdvanced->isChecked())
    {
        addTextInLineEdit("tg()");
        ui->lineEdit_expression->setCursorPosition(ui->lineEdit_expression->cursorPosition()-1);
    } else simpleAction("tg(",")");
}

void MainWindow::on_pushButton_ctg_clicked()
{
    if(ui->actionAdvanced->isChecked())
    {
        addTextInLineEdit("ctg()");
        ui->lineEdit_expression->setCursorPosition(ui->lineEdit_expression->cursorPosition()-1);
    }else simpleAction("ctg(",")");
}

void MainWindow::on_pushButton_sin_clicked()
{
    if(ui->actionAdvanced->isChecked())
    {
        addTextInLineEdit("sin()");
        ui->lineEdit_expression->setCursorPosition(ui->lineEdit_expression->cursorPosition()-1);
    } else simpleAction("sin(",")");
}

void MainWindow::on_pushButton_cos_clicked()
{
    if(ui->actionAdvanced->isChecked())
    {
        addTextInLineEdit("cos()");
        ui->lineEdit_expression->setCursorPosition(ui->lineEdit_expression->cursorPosition()-1);
    } else simpleAction("cos(",")");
}

void MainWindow::on_pushButton_sqrt_clicked()
{
    if(ui->actionAdvanced->isChecked())
    {
        addTextInLineEdit("sqrt()");
        ui->lineEdit_expression->setCursorPosition(ui->lineEdit_expression->cursorPosition()-1);
    } else simpleAction("sqrt(",")");
}

void MainWindow::on_pushButton_caret_clicked()
{
	ui->lineEdit_expression->insert("^");
}

void MainWindow::on_pushButton_clear_history_clicked()
{
    ui->textEdit_history->clear();
}

void MainWindow::on_actionStandard_changed()
{
    ui->actionAdvanced->setChecked(!ui->actionStandard->isChecked());
}

void MainWindow::on_actionAdvanced_changed()
{
    ui->actionStandard->setChecked(!ui->actionAdvanced->isChecked());
    new_loan = new loan;
    new_loan->setWindowTitle("贷款计算器 by hhb");
    new_loan->show();
}
