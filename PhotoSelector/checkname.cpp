#include "checkname.h"

CheckName::CheckName()
{

}

void CheckName::Init(QStringList& sorcePath)
{
    this->sorcePath=sorcePath;
}

void CheckName::run()
{
    bool res=false;
    for(int i=0;i<sorcePath.size();i++)
    {
        if(QFile::exists(ChangeToRealPath(sorcePath[i]))==true)
        {
            QString standardPictureLoc=StandardDir(QStandardPaths::PicturesLocation);
            QString pathTmp1=standardPictureLoc+"/PhotoSelectorTemp/Read.JPG";
            QString pathTmp2=standardPictureLoc+"/PhotoSelectorTemp/Input.JPG";
            QFile::remove(pathTmp1);
            QFile::remove(pathTmp2);
            QFile::copy(ChangeToRealPath(sorcePath[i]),pathTmp1);

            if(GetFormatByPath(sorcePath[i])!="CR2")
            {
                QString command="magick convert \""+sorcePath[i]+"\" -resize 2000 \""+pathTmp2+"\"";
                command.replace("/","\\");
                QProcess::execute(command);
            }
            else if(GetFormatByPath(sorcePath[i])=="CR2")
            {
                QString command1="./dcraw-9-27-ms-64-bit.exe -T -h -w -W -b 2.0 \""+sorcePath[i]+"\"";
                command1.replace("/","\\");
                QProcess::execute(command1);

                QString tiffInUser=ChangeFormat(sorcePath[i],"tiff");
                QString tiffInTemp=ChangeFormat(pathTmp2,"tiff");

                QFile::copy(tiffInUser,tiffInTemp);
                QFile::remove(tiffInUser);

                QString command2="magick convert \""+tiffInTemp+"\" -resize 2000 \""+pathTmp2+"\"";
                command2.replace("/","\\");
                QProcess::execute(command2);
                QFile::remove(tiffInTemp);
            }

            res=true;
            break;
        }
    }
    emit(CheckDone(res));
}

QString CheckName::ChangeToRealPath(QString path)
{
    QString standardPictureLoc=StandardDir(QStandardPaths::PicturesLocation);
    QString tar=ChangeDir(ChangeFormat(path,"JPG"),standardPictureLoc+"/PhotoSelectorTemp/");
    return tar;
}
