#include "stumanager.h"
#include "ui_stumanager.h"
#include <QDomDocument>
#include <QFileDialog>
#include <QMessageBox>

StuManager::StuManager(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::StuManager)
{
    ui->setupUi(this);
}

StuManager::~StuManager()
{
    delete ui;
}


void StuManager::on_AddStu_clicked()
{
    AddStu *addstu = new AddStu();
    this->close();
    addstu->show();

}

void StuManager::on_EditStu_clicked()
{
    EditStu *editstu = new EditStu();
    this->close();
    editstu->show();
}

void StuManager::on_actionhuifu_triggered()
{
    QString xmlPath = QFileDialog::getOpenFileName(this,
                                                   QString::fromLocal8Bit("Save"),
                                                   "",
                                                   tr("Files (*.xml)"));
     QFile file(xmlPath);
     if (!file.open(QFile::ReadOnly | QFile::Text))
      return ;

     file.close();
}

void StuManager::on_actionbeifen_triggered()
{
    QString path=QFileDialog::getSaveFileName(this,tr("文件对话框"),"Data", tr("data(*.xml)"));
    if (QFileInfo(path).suffix().isEmpty()) path.append(".xml");  //若后缀为空自动添加后缀
    if(!path.isEmpty()) {
            QFile file(path);
            if (!file.open(QIODevice::WriteOnly)) {
                QMessageBox::warning(this, tr("写入文件"),
                                           tr("无法打开文件:\n%1").arg(path));
                return;
            }            }
}
