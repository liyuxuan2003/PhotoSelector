#include "menu.h"
#include "ui_menu.h"

Menu::Menu(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);

    about=new About(this);
    about->hide();

    liEasyLayout=new LiEasyLayout(0,height(),width(),LiEasyLayout::left,0.65f,0.5f,ui->labelTitle);

    liEasyLayout->AddUnit("Title");
    liEasyLayout->AddElementInUnit("Title",ui->labelTitle);

    liEasyLayout->AddUnit("Start");
    liEasyLayout->AddElementInUnit("Start",ui->pushButtonStart);
    liEasyLayout->AddElementInUnit("Start",ui->labelStart);

    liEasyLayout->AddUnit("StartRaw");
    liEasyLayout->AddElementInUnit("StartRaw",ui->pushButtonStartRaw);
    liEasyLayout->AddElementInUnit("StartRaw",ui->labelStartRaw);

    liEasyLayout->AddUnit("About");
    liEasyLayout->AddElementInUnit("About",ui->pushButtonAbout);
    liEasyLayout->AddElementInUnit("About",ui->labelAbout);

    liEasyLayout->AddUnit("Exit");
    liEasyLayout->AddElementInUnit("Exit",ui->pushButtonExit);
    liEasyLayout->AddElementInUnit("Exit",ui->labelExit);

    liEasyLayout->AddUnit("Copyright");
    liEasyLayout->AddElementInUnit("Copyright",ui->labelExtraInfo1);
    liEasyLayout->AddElementInUnit("Copyright",ui->labelExtraInfo2);

    liEasyLayout->LayoutConfigDone();
}

Menu::~Menu()
{
    delete ui;
}

void Menu::resizeEvent(QResizeEvent * event)
{
    if(isEnabled()==true)
        liEasyLayout->ResizeWithEasyLayout(height(),width());
}

void Menu::on_pushButtonStart_clicked()
{
    emit(StartButtonSignal());
}

void Menu::on_pushButtonStartRaw_clicked()
{
    emit(StartButtonRawSignal());
}

void Menu::on_pushButtonAbout_clicked()
{
    about->exec();
}

void Menu::on_pushButtonExit_clicked()
{
    QApplication::exit();
}
