#include "deletetmp.h"

DeleteTmp::DeleteTmp()
{

}

void DeleteTmp::run()
{
    QString standardPictureLoc=StandardDir(QStandardPaths::PicturesLocation);
    QString tmp=standardPictureLoc+"/PhotoSelectorTemp";
    QDir dir(tmp);
    dir.setFilter(QDir::Files);
    for(int i=0;i<dir.count();i++)
        dir.remove(dir[i]);
    emit(DeleteDone());
}
