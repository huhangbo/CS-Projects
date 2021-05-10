#ifndef MYWORD_H
#define MYWORD_H

#include <QMainWindow>
#include <QInputDialog>
#include <QPrintDialog>
#include <QPrinter>
#include <QPrintPreviewDialog>
#include <FindDialog.h>
#include <ReplaceDialog.h>

class MyChild;
class QAction;
class QMenu;
class QComboBox;
class QFontComboBox;
class QMdiArea;
class QMdiSubWindow;
class QSignalMapper;
class FindDialog;

class MyWord : public QMainWindow
{
    Q_OBJECT

public:
    MyWord(QWidget *parent = 0);
    ~MyWord();
protected:
    void closeEvent(QCloseEvent *event);
private slots:
    void fileNew();
    void fileOpen();
    void fileSave();
    void fileSaveAs();
    void filePrint();
    void filePrintPreview();
    void printPreview(QPrinter *);
    void undo();
    void redo();
    void cut();
    void copy();
    void paste();
    void about();
    void textBold();
    void textItalic();
    void textUnderline();
    void textAlign(QAction *a);
    void textStyle(int styleIndex);
    void textFamily(const QString &f);
    void textSize(const QString &p);
    void textColor();
    void updateMenus();
    void updateWindowMenu();
    void count(); //字数统计
    void countt();//统计字符串
    void find();
    void replace();//替换  
    int Num0fstr(const char *Mstr, const char *substr);


    MyChild *createMyChild();
    void setActiveSubWindow(QWidget *window);
private:
    void createActions();
    void createMenus();
    void createToolBars();
    void createStatusBar();
    void enabledText();         //使得【格式】下的各个子菜单项可用
    void fontChanged(const QFont &f);
    void colorChanged(const QColor &c);
    void alignmentChanged(Qt::Alignment a);


    FindDialog *new_FindDialog;
    ReplaceDialog *new_ReplaceDialog;
    MyChild *activeMyChild();
    QMdiSubWindow *findMyChild(const QString &fileName);    

    QMdiArea *mdiArea;
    QSignalMapper *windowMapper;
    //菜单
    QMenu *fileMenu;
    QMenu *editMenu;
    QMenu *formatMenu;
    QMenu *fontMenu;            //子菜单
    QMenu *alignMenu;           //子菜单
    QMenu *windowMenu;
    QMenu *helpMenu;
    //工具栏
    QToolBar *fileToolBar;
    QToolBar *editToolBar;
    QToolBar *formatToolBar;
    QToolBar *comboToolBar;
    QComboBox *comboStyle;      //子控件
    QFontComboBox *comboFont;   //子控件
    QComboBox *comboSize;       //子控件
    //动作(Action)
    QAction *newAct;            //【文件】主菜单
    QAction *openAct;
    QAction *saveAct;
    QAction *saveAsAct;
    QAction *printAct;
    QAction *printPreviewAct;
    QAction *exitAct;

    QAction *undoAct;           //【编辑】主菜单
    QAction *redoAct;
    QAction *cutAct;
    QAction *copyAct;
    QAction *pasteAct;
    //______________
    QAction *CountAct;        //字数统计
    QAction *CountT;         //统计特定字符串
    QAction *FindAct;
    QAction *ReplaceAct;

    QAction *boldAct;           //【格式】主菜单
    QAction *italicAct;
    QAction *underlineAct;
    QAction *leftAlignAct;
    QAction *centerAct;
    QAction *rightAlignAct;
    QAction *justifyAct;
    QAction *colorAct;

    QAction *closeAct;          //【窗口】主菜单
    QAction *closeAllAct;
    QAction *tileAct;
    QAction *cascadeAct;
    QAction *nextAct;
    QAction *previousAct;
    QAction *separatorAct;

    QAction *aboutAct;          //【帮助】主菜单
    QAction *aboutQtAct;

};

#endif // MYWORD_H
