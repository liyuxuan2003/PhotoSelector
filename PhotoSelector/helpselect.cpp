#include "helpselect.h"
#include "ui_helpselect.h"

HelpSelect::HelpSelect(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HelpSelect)
{
    ui->setupUi(this);
}

HelpSelect::~HelpSelect()
{
    delete ui;
}
