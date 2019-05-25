#include "config.h"
#include "ui_config.h"

Config::Config(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Config)
{
    ui->setupUi(this);

    helpSelect=new HelpSelect(this);
    helpSelect->hide();

    l1=new LiEasyLayout(NULL,height(),width(),LiEasyLayout::left);
    l2=new LiEasyLayout(NULL,height(),width(),LiEasyLayout::right);

    l1->AddUnit("Title");
    l1->AddElementInUnit("Title",ui->labelTitle);

    l1->AddUnit("TitleBasic");
    l1->AddElementInUnit("TitleBasic",ui->labelTitleBasic);

    l1->AddUnit("BasicInfo");
    l1->AddElementInUnit("BasicInfo",ui->labelInfo1);
    l1->AddElementInUnit("BasicInfo",ui->labelInfo2);

    l1->AddUnit("Line1");
    l1->AddElementInUnit("Line1",ui->line1);

    l1->AddUnit("TitleConfig");
    l1->AddElementInUnit("TitleConfig",ui->labelTitleConfig);

    l1->AddUnit("Config");
    l1->AddElementInUnit("Config",ui->labelKeyEnter);
    l1->AddElementInUnit("Config",ui->pushButtonKeyEnter);
    l1->AddElementInUnit("Config",ui->checkBoxKeyEnter);
    l1->AddElementInUnit("Config",ui->labelKey1);
    l1->AddElementInUnit("Config",ui->pushButtonKey1);
    l1->AddElementInUnit("Config",ui->checkBoxKey1);
    l1->AddElementInUnit("Config",ui->labelKey2);
    l1->AddElementInUnit("Config",ui->pushButtonKey2);
    l1->AddElementInUnit("Config",ui->checkBoxKey2);
    l1->AddElementInUnit("Config",ui->labelKey3);
    l1->AddElementInUnit("Config",ui->pushButtonKey3);
    l1->AddElementInUnit("Config",ui->checkBoxKey3);
    l1->AddElementInUnit("Config",ui->labelKey4);
    l1->AddElementInUnit("Config",ui->pushButtonKey4);
    l1->AddElementInUnit("Config",ui->checkBoxKey4);

    l2->AddUnit("ButtonHelp");
    l2->AddElementInUnit("ButtonHelp",ui->pushButtonHelp);
    l2->AddElementInUnit("ButtonHelp",ui->labelHelp);

    l2->AddUnit("ButtonExit");
    l2->AddElementInUnit("ButtonExit",ui->pushButtonExit);
    l2->AddElementInUnit("ButtonExit",ui->labelExit);

    l2->AddUnit("ButtonStart");
    l2->AddElementInUnit("ButtonStart",ui->pushButtonStart);
    l2->AddElementInUnit("ButtonStart",ui->labelStart);

    l1->LayoutConfigDone();
    l2->LayoutConfigDone();
}

Config::~Config()
{
    delete ui;
}

void Config::resizeEvent(QResizeEvent * event)
{
    if(isEnabled()==true)
    {
        l1->ResizeWithEasyLayout(height(),width());
        l2->ResizeWithEasyLayout(height(),width());
    }

}

void Config::Init(QStringList target)
{
    QString p=GetDirByPath(target[0]);
    ui->labelInfo1->setText("待挑选的照片位于："+p);
    ui->labelInfo2->setText("待挑选的照片数量："+QString::number(target.size())+"张");
    sorcePath=target;

    defaultPath=StandardDir(QStandardPaths::PicturesLocation);
    for(int i=0;i<=4;i++)
    {
        path[i]=defaultPath;
        if(i==0)
            isDisabled[i]=false;
        else
            isDisabled[i]=true;
    }
    ui->labelKeyEnter->setText("回车："+path[0]);
}

void Config::OnClickSetPath(QString prefix, QLabel* label,int id)
{
    QString dir = QFileDialog::getExistingDirectory(this,"选择目标文件夹",path[id],QFileDialog::ShowDirsOnly);
    if(dir=="")
        return;
    label->setText(prefix+dir);
    path[id]=dir;
}

void Config::OnDisabledStateChange(QString prefix,QLabel* label,QPushButton* pushButton,int state,int id)
{
    bool mode=true;
    if(state==Qt::Unchecked)
        mode=false;
    if(state==Qt::Checked)
        mode=true;
    if(mode==false)
    {
        pushButton->setEnabled(true);
        label->setText(prefix+path[id]);
    }
    if(mode==true)
    {
        pushButton->setDisabled(true);
        label->setText(prefix+"已禁用");
    }
    isDisabled[id]=mode;
}

void Config::on_pushButtonKeyEnter_clicked()
{
    OnClickSetPath("回车：",ui->labelKeyEnter,0);
}

void Config::on_pushButtonKey1_clicked()
{
    OnClickSetPath("数字键1：",ui->labelKey1,1);
}

void Config::on_pushButtonKey2_clicked()
{
    OnClickSetPath("数字键2：",ui->labelKey2,2);
}

void Config::on_pushButtonKey3_clicked()
{
    OnClickSetPath("数字键3：",ui->labelKey3,3);
}

void Config::on_pushButtonKey4_clicked()
{
    OnClickSetPath("数字键4：",ui->labelKey4,4);
}

void Config::on_checkBoxKeyEnter_stateChanged(int arg1)
{
    OnDisabledStateChange("回车：",ui->labelKeyEnter,ui->pushButtonKeyEnter,arg1,0);
}

void Config::on_checkBoxKey1_stateChanged(int arg1)
{
    OnDisabledStateChange("数字键1：",ui->labelKey1,ui->pushButtonKey1,arg1,1);
}

void Config::on_checkBoxKey2_stateChanged(int arg1)
{
    OnDisabledStateChange("数字键2：",ui->labelKey2,ui->pushButtonKey2,arg1,2);
}

void Config::on_checkBoxKey3_stateChanged(int arg1)
{
    OnDisabledStateChange("数字键3：",ui->labelKey3,ui->pushButtonKey3,arg1,3);
}

void Config::on_checkBoxKey4_stateChanged(int arg1)
{
    OnDisabledStateChange("数字键4：",ui->labelKey4,ui->pushButtonKey4,arg1,4);
}

void Config::on_pushButtonStart_clicked()
{
    emit(LoadSelectFrame(sorcePath,path,isDisabled));
}

void Config::on_pushButtonExit_clicked()
{
    emit(BackToMenu());
}

void Config::on_pushButtonHelp_clicked()
{
    helpSelect->show();
}
