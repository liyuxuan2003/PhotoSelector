#include "findsamenamefile.h"
#include "ui_findsamenamefile.h"

FindSameNameFile::FindSameNameFile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FindSameNameFile)
{
    ui->setupUi(this);
}

FindSameNameFile::~FindSameNameFile()
{
    delete ui;
}

void FindSameNameFile::Init(QString pathRead, QString pathInput)
{
    QPixmap imgRead(pathRead);
    QPixmap imgInput(pathInput);
    imgRead=imgRead.scaled(ui->labelReadImage->size());
    imgInput=imgInput.scaled(ui->labelInputImage->size());
    ui->labelReadImage->setPixmap(imgRead);
    ui->labelInputImage->setPixmap(imgInput);
    ans=false;
}

bool FindSameNameFile::GetAns()
{
    return ans;
}

void FindSameNameFile::on_pushButtonYes_clicked()
{
    ans=true;
    this->close();
}

void FindSameNameFile::on_pushButtonNo_clicked()
{
    ans=false;
    this->close();
}
