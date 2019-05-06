#include "select.h"
#include "ui_select.h"

Select::Select(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Select)
{
    ui->setupUi(this);

    labelKeyMode=new QLabel*[5];
    labelKeyMode[0]=ui->labelKeyEnterTitle;
    labelKeyMode[1]=ui->labelKey1Title;
    labelKeyMode[2]=ui->labelKey2Title;
    labelKeyMode[3]=ui->labelKey3Title;
    labelKeyMode[4]=ui->labelKey4Title;

    keyPrefix=new QString[5];
    keyPrefix[0]="回车：";
    keyPrefix[1]="数字键1：";
    keyPrefix[2]="数字键2：";
    keyPrefix[3]="数字键3：";
    keyPrefix[4]="数字键4：";

    targetPath=new TargetPath(this);
    targetPath->hide();

    helpSelect=new HelpSelect(this);
    helpSelect->hide();

    checkName=new CheckName();

    readRawFile=new ReadRawFile();

    deleteTmp=new DeleteTmp();

    findSameNameFile=new FindSameNameFile(this);
    findSameNameFile->hide();

    connect(readRawFile,SIGNAL(finished()),this,SLOT(RawFileProcessDone()));

    connect(checkName,SIGNAL(CheckDone(bool)),this,SLOT(CheckDone(bool)));

    connect(deleteTmp,SIGNAL(DeleteDone()),this,SLOT(DeleteDone()));

    /*  Test of dcraw...
    qDebug() << QDateTime::currentDateTime();
    int argc=3;
    const char* argv[3];
    argv[0]="dcraw";
    argv[1]="-T";
    argv[2]="D:/IMG_1835.CR2";
    dcmain(argc,argv);
    qDebug() << QDateTime::currentDateTime();
    */
}

Select::~Select()
{
    delete ui;
}

void Select::Init(QStringList& sorcePath,QString* path,bool* isDisabled)
{
    this->sorcePath=sorcePath;
    this->path=path;
    this->isDisabled=isDisabled;

    nowImgIndex=0;
    totalImgAmount=sorcePath.count();
    rawFileProcessIndex=0;

    isShowProgressRate=false;

    ui->labelAmount->setText("照片总数："+QString::number(sorcePath.count()));
    ui->labelNowId->setText("当前照片编号："+QString::number(nowImgIndex+1));
    ui->labelNowName->setText(sorcePath[nowImgIndex].right(sorcePath[nowImgIndex].length()-sorcePath[nowImgIndex].lastIndexOf("/")-1));

    img=QPixmap(":/Resource/ProjectIcon.PNG");
    imgSize=img.size();
    ResizeWithImg();

    RefreshKeyMode();

    ui->plainTextEditLog->setPlainText("程序正在初始化，请稍等...");

    checkName->Init(sorcePath);
    checkName->start();
}

void Select::CheckDone(bool res)
{
    if(res==true)
    {
        QString standardPictureLoc=QStandardPaths::writableLocation(QStandardPaths::PicturesLocation);
        QString pathTmp1=standardPictureLoc+"/PhotoSelectorTemp/Read.JPG";
        QString pathTmp2=standardPictureLoc+"/PhotoSelectorTemp/Input.JPG";
        findSameNameFile->Init(pathTmp1,pathTmp2);
        findSameNameFile->exec();
        if(findSameNameFile->GetAns()==true)
            DeleteDone();
        else
            deleteTmp->start();
    }
    else
    {
        deleteTmp->start();
    }
}

void Select::DeleteDone()
{
    rawFileInitPoint=std::min(25,totalImgAmount)-1;
    QString logText="";
    logText.append("正在缓存图片(1/"+QString::number(rawFileInitPoint+1)+")");
    logText.append("\n\n");
    logText.append("请耐心等待...");
    ui->plainTextEditLog->setPlainText(logText);
    StartRawFileThread();
}

void Select::RefreshKeyMode()
{
    for(int i=0;i<=4;i++)
    {
        if(isDisabled[i]==true)
            labelKeyMode[i]->setText(keyPrefix[i]+"已禁用");
        if(isDisabled[i]==false)
            labelKeyMode[i]->setText(keyPrefix[i]+"已启用");
    }
}

void Select::resizeEvent(QResizeEvent* event)
{
    ui->frameInfo->resize(QSize(ui->frameInfo->width(),height()));
    ui->frameImage->resize(QSize(width()-ui->frameInfo->width(),height()));

    ui->pushButtonExit->move(QPoint(ui->pushButtonExit->x(),ui->frameInfo->height()-82));
    ui->pushButtonHelp->move(QPoint(ui->pushButtonHelp->x(),ui->frameInfo->height()-82));

    ResizeWithImg();

    QFrame::resizeEvent(event);
}

void Select::ResizeWithImg()
{
    float ratioImg=(float)imgSize.width()/(float)imgSize.height();
    float ratioFrame=(float)ui->frameImage->width()/(float)ui->frameImage->height();

    if(ratioImg>ratioFrame)
        ui->labelImage->resize(QSize(ui->frameImage->width(),ui->frameImage->width()*imgSize.height()/imgSize.width()));
    else
        ui->labelImage->resize(QSize(ui->frameImage->height()*imgSize.width()/imgSize.height(),ui->frameImage->height()));

    ui->labelImage->move(QPoint(ui->frameImage->width()/2-ui->labelImage->width()/2,ui->frameImage->height()/2-ui->labelImage->height()/2));
    if(img.isNull()==false)
    {
        QPixmap imgTmp=img.scaled(QSize(ui->labelImage->width(),ui->labelImage->height()));
        ui->labelImage->setPixmap(imgTmp);
    }
}

void Select::keyPressEvent(QKeyEvent *ev)
{
    if(ev->key()==Qt::Key_Left)
        ChangeImage(-1);

    if(ev->key()==Qt::Key_Right)
        ChangeImage(1);

    if(ev->key()==Qt::Key_PageUp)
        ChangeImage(-10);

    if(ev->key()==Qt::Key_PageDown)
        ChangeImage(10);

    if(ev->key()==Qt::Key_Home)
        ChangeImage(-50);

    if(ev->key()==Qt::Key_End)
        ChangeImage(50);

    int keyId=-1;
    if(ev->key()==Qt::Key_Enter || ev->key()==Qt::Key_Return)
        keyId=0;
    if(ev->key()==Qt::Key_1)
        keyId=1;
    if(ev->key()==Qt::Key_2)
        keyId=2;
    if(ev->key()==Qt::Key_3)
        keyId=3;
    if(ev->key()==Qt::Key_4)
        keyId=4;

    if(keyId!=-1)
        MoveImage(keyId);

    if(ev->key()==Qt::Key_P)
    {
        isShowProgressRate=(!isShowProgressRate);
        ShowProgressRate();
    }

    QFrame::keyPressEvent(ev);
}

void Select::MoveImage(int id)
{
    if(isDisabled[id]==true)
    {
        QString tmp=keyPrefix[id];
        QString logText="";
        logText.append("“"+tmp.remove("：")+"”已被禁用！");
        logText.append("\n\n");
        logText.append("若想启用快捷键，点击上方编辑快捷键可以进行设置！");
        ui->plainTextEditLog->setPlainText(logText);
        return;
    }

    QString fileName=sorcePath[nowImgIndex];
    QString newName=path[id]+"/"+sorcePath[nowImgIndex].right(sorcePath[nowImgIndex].length()-sorcePath[nowImgIndex].lastIndexOf("/")-1);
    if(newName.indexOf("//")!=-1)
        newName.remove(newName.indexOf("//"),1);

    if(QFile::exists(newName)==true)
    {
        QString logText="";
        logText.append(GetNameByPath(sorcePath[nowImgIndex]));
        logText.append("\n\n");
        QString tmp=keyPrefix[id];
        logText.append("复制失败！“"+tmp.remove("：")+"”所设定的路径下有同名文件！");
        ui->plainTextEditLog->setPlainText(logText);
        return;
    }

    bool isSuccess=QFile::copy(fileName,newName);
    if(isSuccess==true)
    {
        QString logText="";
        logText.append(GetNameByPath(sorcePath[nowImgIndex]));
        logText.append("\n\n");
        QString tmp=keyPrefix[id];
        logText.append("已成功复制至“"+tmp.remove("：")+"”所设定的路径！");
        ui->plainTextEditLog->setPlainText(logText);
    }
    else
    {
        QString logText="";
        logText.append(GetNameByPath(sorcePath[nowImgIndex]));
        logText.append("\n\n");
        QString tmp=keyPrefix[id];
        logText.append("复制失败！“照片选择器”没有向“"+tmp.remove("：")+"”所设定的路径复制文件的权限！");
        ui->plainTextEditLog->setPlainText(logText);
    }
}

void Select::ChangeImage(int step)
{
    int backupImageIndex=nowImgIndex;
    nowImgIndex+=step;
    if(nowImgIndex>=totalImgAmount)
    {
        nowImgIndex=totalImgAmount-1;
        if(nowImgIndex==backupImageIndex)
            return;
    }
    else if(nowImgIndex<0)
    {
        nowImgIndex=0;
        if(nowImgIndex==backupImageIndex)
            return;
    }

    if(CheckRawFileExist(nowImgIndex,sorcePath[nowImgIndex])==false)
    {
        QString logText="";
        logText.append("图片正在缓存，暂时无法查看。");
        logText.append("\n\n");
        logText.append("建议稍等几分钟后再继续挑选！");
        logText.append("\n");
        logText.append("按P可以随时查看缓存进度！");
        ui->plainTextEditLog->setPlainText(logText);
        nowImgIndex=backupImageIndex;
        return;
    }

    img=QPixmap(ChangeToRealPath(sorcePath[nowImgIndex]));
    imgSize=img.size();
    ResizeWithImg();

    ui->labelAmount->setText("照片总数："+QString::number(sorcePath.count()));
    ui->labelNowId->setText("当前照片编号："+QString::number(nowImgIndex+1));
    ui->labelNowName->setText(GetNameByPath(sorcePath[nowImgIndex]));
}

void Select::ActiveTargetPath(int id)
{
    targetPath->Init(keyPrefix[id],path[id],isDisabled[id],id);
    targetPath->exec();
    path[id]=targetPath->GetPath();
    isDisabled[id]=targetPath->GetMode();
    RefreshKeyMode();
}

QString Select::GetNameByPath(QString path)
{
    return path.right(path.length()-path.lastIndexOf("/")-1);
}

QString Select::GetFormatByPath(QString path)
{
    return path.right(path.length()-path.lastIndexOf(".")-1);
}

QString Select::ChangeToRealPath(QString path)
{
    QString standardPictureLoc=QStandardPaths::writableLocation(QStandardPaths::PicturesLocation);
    QString tar=standardPictureLoc+"/PhotoSelectorTemp/"+GetNameByPath(path).left(GetNameByPath(path).lastIndexOf("."))+".JPG";
    return tar;
}

bool Select::CheckRawFileExist(int id,QString path)
{
    QString standardPictureLoc=QStandardPaths::writableLocation(QStandardPaths::PicturesLocation);
    QString tar=standardPictureLoc+"/PhotoSelectorTemp/"+GetNameByPath(path).left(GetNameByPath(path).lastIndexOf("."))+".JPG";
    if(QFile::exists(tar)==true && id<rawFileProcessIndex)
        return true;
    return false;
}

void Select::RawFileProcessDone()
{
    qDebug() << "Raw File Process Done !";
    if(rawFileProcessIndex<=rawFileInitPoint)
        UpdateRawFileInit();
    if(rawFileProcessIndex>=totalImgAmount-1)
    {
        rawFileProcessIndex++;
        if(isShowProgressRate==true)
            ShowProgressRate();
        return;
    }
    rawFileProcessIndex++;
    if(isShowProgressRate==true)
        ShowProgressRate();
    StartRawFileThread();
}

void Select::UpdateRawFileInit()
{
    QString logText="";
    if(rawFileProcessIndex<rawFileInitPoint)
    {
        logText.append("正在缓存图片("+QString::number(rawFileProcessIndex+2)+"/"+QString::number(rawFileInitPoint+1)+")");
        logText.append("\n\n");
        logText.append("请耐心等待...");
        ui->plainTextEditLog->setPlainText(logText);
    }
    else if (rawFileProcessIndex==rawFileInitPoint)
    {
        logText.append("现在可以开始挑选照片了！");
        logText.append("\n\n");
        logText.append("程序会继续进行缓存...");
        logText.append("\n");
        logText.append("按P可以查看进度。");
        ui->plainTextEditLog->setPlainText(logText);
        img=QPixmap(ChangeToRealPath(sorcePath[nowImgIndex]));
        imgSize=img.size();
        ResizeWithImg();
        grabKeyboard();
    }
}

void Select::StartRawFileThread()
{
    bool isFileExist=true;
    QString standardPictureLoc=QStandardPaths::writableLocation(QStandardPaths::PicturesLocation);
    QString t=standardPictureLoc+"/PhotoSelectorTemp/"+GetNameByPath(sorcePath[rawFileProcessIndex]).left(GetNameByPath(sorcePath[rawFileProcessIndex]).lastIndexOf("."))+".JPG";
    if(QFile::exists(t)==true)
        isFileExist=true;
    else
        isFileExist=false;

    QString sor=sorcePath[rawFileProcessIndex];
    QString tar=ChangeToRealPath(sorcePath[rawFileProcessIndex]);
    readRawFile->SetFileToProcess(sor,tar);
    readRawFile->start();
}

void Select::ShowProgressRate()
{
    if(isShowProgressRate==false)
        ui->plainTextEditLog->setPlainText("");
    else
    {
        QString logText="";
        if(rawFileProcessIndex==totalImgAmount)
            logText.append("全部图片已经完成缓存！");
        else
            logText.append("缓存进度("+QString::number(rawFileProcessIndex+1)+"/"+QString::number(totalImgAmount)+")");
        logText.append("\n\n");
        logText.append("再次按P关闭！");
        ui->plainTextEditLog->setPlainText(logText);
    }
}

void Select::on_pushButtonSource_clicked()
{
    QString tmp=sorcePath[nowImgIndex];
    QProcess::startDetached("explorer /select,"+tmp.replace("/","\\"));
}

void Select::on_pushButtonKeyEnter_clicked()
{
    ActiveTargetPath(0);
}

void Select::on_pushButtonKey1_clicked()
{
    ActiveTargetPath(1);
}

void Select::on_pushButtonKey2_clicked()
{
    ActiveTargetPath(2);
}

void Select::on_pushButtonKey3_clicked()
{
    ActiveTargetPath(3);
}

void Select::on_pushButtonKey4_clicked()
{
    ActiveTargetPath(4);
}

void Select::on_pushButtonExit_clicked()
{
    emit(BackToMenu());
}

void Select::on_pushButtonHelp_clicked()
{
    helpSelect->show();
}
