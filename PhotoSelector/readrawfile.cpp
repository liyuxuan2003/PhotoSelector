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
            /* Excerpt of dcraw help...
             * -T Write TIFF instead of PPM.
             * -h Half-size color image. [Much more faster!]
             * -w Use camera white balance.
             * -W Don't automatically brighten the image. [Or the bright of image will be really strange]
             * -b <num> Adjust brightness (default = 1.0) */
            QString command1="./dcraw-9-27-ms-64-bit.exe -T -h -w -W -b 2.0 \""+rawFile+"\"";
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

