#ifndef _FINDDIALOG_H_
#define _FINDDIALOG_H_

#include <QDialog>
#include <QGridLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QRadioButton>
#include <QCheckBox>
#include <QGroupBox>
#include <QPlainTextEdit>
#include <QPointer>
#include <mychild.h>

class MyWord;

class FindDialog : public QDialog
{
    Q_OBJECT

protected:
    QGroupBox m_radioGrpBx;

    QGridLayout m_layout;
    QHBoxLayout m_hbLayout;

    QLabel m_findLbl;
    QLineEdit m_findEdit;
    QPushButton m_findBtn;
    QPushButton m_closeBtn;
    QCheckBox m_matchChkBx;
    QRadioButton m_forwardBtn;
    QRadioButton m_backwardBtn;

    QPointer<QPlainTextEdit> m_pText; // FindDialog 聚合使用 QPlainTextEdit

    void initControl();
    void connectSlot();
protected slots:
    void onFindClicked();
    void onCloseClicked();
public:
    explicit FindDialog(QWidget* parent = 0, QPlainTextEdit* pText = 0);
    void setPlainTextEdit(QPlainTextEdit* pText);
    QPlainTextEdit* getPlainTextEdit();
    bool event(QEvent* evt);
private:
    MyChild *activeMyChild();
};

#endif // _FINDDIALOG_H_
