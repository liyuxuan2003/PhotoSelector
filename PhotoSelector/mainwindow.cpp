#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    menu=new Menu(this);
    menu->move(QPoint(0,0));
    menu->show();

    config=new Config(this);
    config->move(QPoint(0,0));
    config->hide();

    select=new Select(this);
    select->move(QPoint(0,0));
    select->hide();

    connect(menu,SIGNAL(StartButtonSignal()),this,SLOT(StartSelectPhoto()));
    connect(menu,SIGNAL(StartButtonRawSignal()),this,SLOT(StartSelectRawPhoto()));
    connect(config,SIGNAL(LoadSelectFrame(QStringList&,QString*,bool*)),this,SLOT(LoadSelectFrame(QStringList&,QString*,bool*)));
    connect(config,SIGNAL(BackToMenu()),this,SLOT(BackToMenu()));
    connect(select,SIGNAL(BackToMenu()),this,SLOT(BackToMenu()));

    this->move(QPoint(QApplication::desktop()->availableGeometry().width()/2-this->width()/2,QApplication::desktop()->availableGeometry().height()/2-this->height()/2-20));

    QDir dir(QStandardPaths::writableLocation(QStandardPaths::PicturesLocation));
    dir.mkdir("PhotoSelectorTemp");

    this->setMinimumSize(1200,675);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::resizeEvent(QResizeEvent *event)
{
    menu->resize(width(),height());
    config->resize(width(),height());
    select->resize(width(),height());

    QMainWindow::resizeEvent(event);
}

void MainWindow::StartSelectPhoto()
{
    QStringList files = QFileDialog::getOpenFileNames(this,"选择需要挑选的图片","D:/","Images (*.JPG *.PNG)");
    if(files.size()==0)
        return;
    menu->hide();
    select->hide();
    config->show();
    config->Init(files);
}

void MainWindow::StartSelectRawPhoto()
{
    QStringList files = QFileDialog::getOpenFileNames(this,"选择需要挑选的图片","D:/","Images (*.CR2)");
    if(files.size()==0)
        return;
    menu->hide();
    select->hide();
    config->show();
    config->Init(files);
}

void MainWindow::LoadSelectFrame(QStringList& sorcePath,QString* path,bool* isDisabled)
{
    menu->hide();
    config->hide();
    select->show();
    select->Init(sorcePath,path,isDisabled);
}

void MainWindow::BackToMenu()
{
    config->hide();
    select->hide();
    menu->show();
}
