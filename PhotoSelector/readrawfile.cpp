#include "readrawfile.h"

ReadRawFile::ReadRawFile(int code)
{
    this->code=code;

    connect(this,SIGNAL(finished()),this,SLOT(ProcessDoneSlots()));
}

void ReadRawFile::Init()
{
    flag=true;
}

void ReadRawFile::run()
{
    if(QFile::exists(rawFileExport))
        usleep(100);
    else
    {
        if(flag==true)
        {
            flag=false;
            usleep(1000*code);
        }

        if(isRawFile==false)
        {
            QString command="magick convert \""+rawFile+"\" -resize 2000 \""+rawFileExport+"\"";
            command.replace("/","\\");
            QProcess::execute(command);
        }
        else if(isRawFile==true)
        {
            QString command1="./dcraw.exe -T -h -w \""+rawFile+"\"";
            command1.replace("/","\\");
            QProcess::execute(command1);

            QString tiffInUser=ChangeFormat(rawFile,"tiff");
            QString tiffInTemp=ChangeFormat(rawFileExport,"tiff");

            QFile::copy(tiffInUser,tiffInTemp);
            QFile::remove(tiffInUser);

            QString command2="magick convert \""+tiffInTemp+"\" -resize 2000 \""+rawFileExport+"\"";
            command2.replace("/","\\");
            QProcess::execute(command2);
            QFile::remove(tiffInTemp);
        }
    }
}

void ReadRawFile::SetFileToProcess(QString sor,QString tar,int id,bool isRawFile)
{
    rawFile=sor;
    rawFileExport=tar;
    this->id=id;
    this->isRawFile=isRawFile;
}

void ReadRawFile::ProcessDoneSlots()
{
    emit(ProcessDoneSingals(code));
}

int ReadRawFile::GetId()
{
    return id;
}

