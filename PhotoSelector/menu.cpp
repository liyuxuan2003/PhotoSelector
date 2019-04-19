#include "menu.h"
#include "ui_menu.h"

Menu::Menu(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);

    about=new About(this);
    about->hide();
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_pushButtonStart_clicked()
{
    emit(StartButtonSignal());
}

void Menu::on_pushButtonAbout_clicked()
{
    about->exec();
}
