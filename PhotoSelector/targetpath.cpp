#include "targetpath.h"
#include "ui_targetpath.h"

TargetPath::TargetPath(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TargetPath)
{
    ui->setupUi(this);
}

TargetPath::~TargetPath()
{
    delete ui;
}

void TargetPath::Init(QString title, QString path, bool mode,int id)
{
    ui->labelTitle->setText(title);
    this->title=title;
    this->path=path;
    this->mode=mode;
    this->id=id;
    if(mode==false)
    {
        ui->plainTextEdit->setPlainText(path);
        ui->checkBoxKeyEnter->setChecked(false);
        ui->pushButtonSet->setEnabled(true);
        ui->pushButtonShow->setEnabled(true);
    }
    if(mode==true)
    {
        ui->plainTextEdit->setPlainText("已禁用");
        ui->checkBoxKeyEnter->setChecked(true);
        ui->pushButtonSet->setDisabled(true);
        ui->pushButtonShow->setDisabled(true);
    }
}

void TargetPath::on_pushButtonShow_clicked()
{
    QDesktopServices::openUrl("file:"+path);
}

void TargetPath::on_pushButtonSet_clicked()
{
    QString dir = QFileDialog::getExistingDirectory(this,"选择目标文件夹",path,QFileDialog::ShowDirsOnly);
    if(dir=="")
        return;
    path=dir;
    ui->plainTextEdit->setPlainText(path);
}

void TargetPath::on_checkBoxKeyEnter_stateChanged(int arg1)
{
    if(arg1==Qt::Unchecked)
    {
        mode=false;
        ui->plainTextEdit->setPlainText(path);
        ui->pushButtonSet->setEnabled(true);
        ui->pushButtonShow->setEnabled(true);
    }
    if(arg1==Qt::Checked)
    {
        mode=true;
        ui->plainTextEdit->setPlainText("已禁用");
        ui->pushButtonSet->setDisabled(true);
        ui->pushButtonShow->setDisabled(true);
    }
}

QString TargetPath::GetPath()
{
    return path;
}

bool TargetPath::GetMode()
{
    return mode;
}
