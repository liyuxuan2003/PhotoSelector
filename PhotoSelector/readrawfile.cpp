#include "readrawfile.h"

ReadRawFile::ReadRawFile()
{

}

void ReadRawFile::run()
{
    qDebug() << "QThread Test !";
}

void ReadRawFile::SetFileToProgcess(QString file)
{
    rawFile=file;
}
