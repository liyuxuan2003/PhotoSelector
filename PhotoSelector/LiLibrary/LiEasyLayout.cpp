#include <LiLibrary/LiEasyLayout.h>

LiEasyLayout::LiEasyLayout(int start,int height,int width,LayoutDirection direction,float li)
{
    isConfigDone=false;

    startPos=0;
    endPos=height;

    lastUseUnit="";

    startPos=start;

    baseTotalHeight=height;
    baseTotalWidth=width;
    baseLayoutHeight=endPos-startPos;

    this->direction=direction;

    this->li=li;
}

int LiEasyLayout::AddUnit(QString unitName)
{
    if(CheckIsCongfigDone()==true)
        return -1;
    lastUseUnit=unitName;
    easyLayout.push_back(LiEasyLayoutUnit());
    easyLayout[easyLayout.size()-1].key=unitName;
    easyLayoutKey[unitName]=easyLayout.size()-1;
    return easyLayout.size()-1;
}

int LiEasyLayout::AddUnitWithOneElement(QString unitName, QWidget* widget)
{
    AddUnit(unitName);
    AddElementInUnit(unitName,widget);
}

void LiEasyLayout::AddElementInUnit(int unitId, QWidget* widget)
{
    if(CheckIsCongfigDone()==true)
        return;
    if(easyLayout[unitId].base==NULL)
        easyLayout[unitId].base=widget;
    easyLayout[unitId].elements.push_back(widget);
    easyLayout[unitId].offset.push_back(widget->y()-easyLayout[unitId].base->y());
    easyLayout[unitId].leftSpace.push_back(widget->x());
    easyLayout[unitId].rightSpace.push_back(baseTotalWidth-widget->x());

    if(widget->y()<easyLayout[unitId].unitStart)
        easyLayout[unitId].unitStart=widget->y();
    if(widget->y()+widget->height()>easyLayout[unitId].unitEnd)
        easyLayout[unitId].unitEnd=widget->y()+widget->height();
    easyLayout[unitId].unitSize=easyLayout[unitId].unitEnd-easyLayout[unitId].unitStart;
}

void LiEasyLayout::AddElementInUnit(QString unitName, QWidget *widget)
{
    AddElementInUnit(easyLayoutKey[unitName],widget);
}

void LiEasyLayout::AddElementInUnit(QWidget *widget)
{
    AddElementInUnit(lastUseUnit,widget);
}

void LiEasyLayout::LayoutConfigDone()
{
    isConfigDone=true;

    std::sort(easyLayout.begin(),easyLayout.end(),LiEasyLayoutUnit::cmp);
    for(int i=0;i<easyLayout.size();i++)
        easyLayoutKey[easyLayout[i].key]=i;

    int* tmpPosArr=new int[easyLayout.size()+2];
    tmpPosArr[0]=startPos;
    tmpPosArr[easyLayout.size()+1]=endPos;
    for(int i=0;i<easyLayout.size();i++)
        tmpPosArr[i+1]=easyLayout[i].unitStart;

    int* tmpLenArr=new int[easyLayout.size()+2];
    tmpLenArr[0]=0;
    tmpPosArr[easyLayout.size()+1]=0;
    for(int i=0;i<easyLayout.size();i++)
        tmpLenArr[i+1]=easyLayout[i].unitSize;

    widgetTotalHeight=0;

    float avg=0;
    gap=new int[easyLayout.size()];
    for(int i=0;i<easyLayout.size();i++)
    {
        gap[i]=tmpPosArr[i+1]-(tmpPosArr[i]+tmpLenArr[i]);
        widgetTotalHeight+=easyLayout[i].unitSize;
        avg+=(float)gap[i];
    }
    avg/=(float)easyLayout.size();

    ratio=new float[easyLayout.size()];
    for(int i=0;i<easyLayout.size();i++)
    {
        ratio[i]=(float)gap[i]-((float)gap[i]-avg)*li;
        ratioSum+=ratio[i];
    }
}

void LiEasyLayout::ResizeWithEasyLayout(int height,int width)
{
    if(isConfigDone==false)
    {
        qDebug() << "LiEasyLayout[Error0002]: ";
        qDebug() << "You should call the LayoutCongfigDone() before using ResizeWithEasyLayout()";
        return;
    }

    int nowPos=startPos;
    for(int i=0;i<easyLayout.size();i++)
    {
        //nowPos+=gap[i]*(height*baseLayoutHeight/baseTotalHeight-widgetTotalHeight)/(baseLayoutHeight-widgetTotalHeight);
        nowPos+=(gap[i]+(ratio[i]/ratioSum)*(float)(height-baseTotalHeight));
        easyLayout[i].base->move(easyLayout[i].base->x(),nowPos);
        for(int j=0;j<easyLayout[i].elements.size();j++)
        {
            easyLayout[i].elements[j]->move(
                        easyLayout[i].elements[j]->x(),
                        easyLayout[i].base->y()+easyLayout[i].offset[j]);

            if(direction==right)
            {
                easyLayout[i].elements[j]->move(
                            width-easyLayout[i].rightSpace[j],
                            easyLayout[i].elements[j]->y());
            }
        }
        nowPos+=easyLayout[i].unitSize;
    }
}

bool LiEasyLayout::CheckIsCongfigDone()
{
    if(isConfigDone==true)
    {
        qDebug() << "LiEasyLayout[Error0001]: ";
        qDebug() << "You can not modify anything after called of the function LayoutConfigDone()!";
        return true;
    }
    return false;
}


LiEasyLayoutUnit::LiEasyLayoutUnit()
{
    unitStart=1000000;
    unitEnd=-1000000;
    unitSize=-1;
    base=NULL;
}

bool LiEasyLayoutUnit::cmp(LiEasyLayoutUnit p1, LiEasyLayoutUnit p2)
{
    return p1.unitStart<p2.unitStart;
}
