#include "testthread.h"

TestThread::TestThread(int code)
{
    this->code=code;
}

void TestThread::run()
{
    /*
    int argc=4;
    const char* argv[4];
    argv[0]="dcraw";
    argv[1]="-T";
    argv[2]="-h";
    if(code==1)
        argv[3]="D:/1.CR2";
    if(code==2)
        argv[3]="D:/2.CR2";
    dcmain(argc,argv);
    */
    qDebug() << code << " " << QDateTime::currentDateTime();

    QString command1="./dcraw.exe -T -h D:/"+QString::number(code)+".CR2";
    command1.replace("/","\\");
    QProcess::execute(command1);

    QString command2="magick convert -resize 2000 D:/"+QString::number(code)+".tiff D:/"+QString::number(code)+".JPG";
    command2.replace("/","\\");
    QProcess::execute(command2);

    qDebug() << code << " " << QDateTime::currentDateTime();
}
