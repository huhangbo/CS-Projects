#ifndef LOAN_H
#define LOAN_H
#include <QDialog>
using namespace std;
namespace Ui {
class loan;
}

class loan : public QDialog
{
    Q_OBJECT

public:
    explicit loan(QWidget *parent = nullptr);
    ~loan();

private slots:

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_1_clicked();

private:
    Ui::loan *ui;
    QString nian,jin,lv;
    bool fangshi=true;
};

#endif // LOAN_H
