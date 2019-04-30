#include "readrawfile.h"

ReadRawFile::ReadRawFile()
{

}

void ReadRawFile::run()
{
    QString command="magick convert "+rawFile+" "+rawFileExport;
    command.replace("/","\\");
    QProcess::execute(command);
}

void ReadRawFile::SetFileToProcess(QString sor,QString tar)
{
    rawFile=sor;
    rawFileExport=tar;
}

