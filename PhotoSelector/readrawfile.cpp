#include "readrawfile.h"

ReadRawFile::ReadRawFile()
{

}

void ReadRawFile::run()
{
    if(QFile::exists(rawFileExport))
        usleep(100);
    else
    {
        QString command="magick convert \""+rawFile+"\" -resize 2000 \""+rawFileExport+"\"";
        command.replace("/","\\");
        QProcess::execute(command);
    }
}

void ReadRawFile::SetFileToProcess(QString sor,QString tar)
{
    rawFile=sor;
    rawFileExport=tar;
}

