#ifndef LIEASYLAYOUT_H
#define LIEASYLAYOUT_H

#include <QWidget>
#include <QString>

#include <QDebug>

#include <algorithm>
#include <vector>
#include <map>

class LiEasyLayoutUnit
{
public:
    LiEasyLayoutUnit();

    QString key;

    QWidget* base;

    int unitStart;
    int unitEnd;
    int unitSize;

    std::vector<QWidget*> elements;
    std::vector<int> offset;
    std::vector<int> leftSpace;
    std::vector<int> rightSpace;

    static bool cmp(LiEasyLayoutUnit p1,LiEasyLayoutUnit p2);
};

class LiEasyLayout
{
public:
    enum LayoutDirection{left,right};

    LiEasyLayout(QWidget* startWidget,int height,int width,LayoutDirection direction);

    int AddUnit(QString unitName);

    int AddUnitWithOneElement(QString unitName,QWidget* widget);

    void AddElementInUnit(QString unitName,QWidget* widget);
    void AddElementInUnit(int unitId,QWidget* widget);

    void AddElementInUnit(QWidget* widget);

    void LayoutConfigDone();

    void ResizeWithEasyLayout(int height,int width);

private:
    std::vector<LiEasyLayoutUnit> easyLayout;

    std::map<QString,int> easyLayoutKey;

    LayoutDirection direction;

    QString lastUseUnit;

    bool isConfigDone;
    bool CheckIsCongfigDone();

    int startPos;
    int endPos;
    int baseTotalHeight;
    int baseTotalWidth;
    int baseLayoutHeight;
    int widgetTotalHeight;

    int* gap;
};

#endif // LIEASYLAYOUT_H
