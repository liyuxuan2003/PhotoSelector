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
            QString standardPictureLoc=QStandardPaths::writableLocation(QStandardPaths::PicturesLocation);
            QString pathTmp1=standardPictureLoc+"/PhotoSelectorTemp/Read.JPG";
            QString pathTmp2=standardPictureLoc+"/PhotoSelectorTemp/Input.JPG";
            QFile::remove(pathTmp1);
            QFile::remove(pathTmp2);
            QFile::copy(ChangeToRealPath(sorcePath[i]),pathTmp1);
            QString command="magick convert \""+sorcePath[i]+"\" -resize 2000 \""+pathTmp2+"\"";
            command.replace("/","\\");
            QProcess::execute(command);
            res=true;
            break;
        }
    }
    emit(CheckDone(res));
}

QString CheckName::ChangeToRealPath(QString path)
{
    QString standardPictureLoc=QStandardPaths::writableLocation(QStandardPaths::PicturesLocation);
    QString tar=standardPictureLoc+"/PhotoSelectorTemp/"+GetNameByPath(path).left(GetNameByPath(path).lastIndexOf("."))+".JPG";
    return tar;
}

QString CheckName::GetNameByPath(QString path)
{
    return path.right(path.length()-path.lastIndexOf("/")-1);
}
