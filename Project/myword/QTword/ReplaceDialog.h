#ifndef _REPLACEDIALOG_H_
#define _REPLACEDIALOG_H_

#include "FindDialog.h"

class ReplaceDialog : public FindDialog
{
    Q_OBJECT

protected:
    QLabel m_replaceLbl;
    QLineEdit m_replaceEdit;
    QPushButton m_replaceBtn;
    QPushButton m_replaceAllBtn;

    void initControl();
    void connectSlot();
protected slots:
    void onReplaceClicked();
    void onReplaceAllClicked();
public:
    explicit ReplaceDialog(QWidget *parent = 0, QPlainTextEdit* pText = 0);
};

#endif // _REPLACEDIALOG_H_

