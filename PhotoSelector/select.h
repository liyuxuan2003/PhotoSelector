#ifndef SELECT_H
#define SELECT_H

#include <QFrame>
#include <QDebug>
#include <QKeyEvent>
#include <QLabel>
#include <QProcess>
#include <QDateTime>

#include <LiLibrary/LiFileName.h>
#include <LiLibrary/LiEasyLayout.h>

#include <algorithm>

#include "dcraw.h"

#include "targetpath.h"
#include "helpselect.h"
#include "readrawfile.h"
#include "findsamenamefile.h"
#include "checkname.h"
#include "deletetmp.h"

#include "testthread.h"

namespace Ui
{
    class Select;
}

class Select : public QFrame
{
    Q_OBJECT

public:
    explicit Select(QWidget *parent = nullptr);
    ~Select();

    void Init(QStringList& sorcePath,QString* path,bool* isDisabled);

protected:
    virtual void resizeEvent(QResizeEvent * event);
    virtual void keyPressEvent(QKeyEvent *ev);

public slots:
    void RawFileProcessDone(int code);

    void CheckDone(bool res);

    void DeleteDone();

private slots:
    void on_pushButtonKeyEnter_clicked();

    void on_pushButtonKey1_clicked();

    void on_pushButtonKey2_clicked();

    void on_pushButtonKey3_clicked();

    void on_pushButtonKey4_clicked();

    void on_pushButtonExit_clicked();

    void on_pushButtonHelp_clicked();

    void on_pushButtonSource_clicked();

private:
    Ui::Select *ui;

    TargetPath* targetPath;

    HelpSelect* helpSelect;

    ReadRawFile** readRawFile;

    FindSameNameFile* findSameNameFile;

    CheckName* checkName;

    DeleteTmp* deleteTmp;

    LiEasyLayout* l1;

    QPixmap img;
    QSize imgSize;

    int nowImgIndex;
    int totalImgAmount;

    int rawFileProcessFrontIndex;
    int rawFileProcessBackIndex;
    int rawFileInitPoint;

    bool* isProcessed;

    bool isShowProgressRate;
    bool isInitDone;

    QStringList sorcePath;

    QString* path;
    bool* isDisabled;

    QLabel** labelKeyMode;
    QString* keyPrefix;

    void ResizeWithImg();

    void RefreshKeyMode();

    void ActiveTargetPath(int id);

    void ChangeImage(int step);

    void MoveImage(int id);

    QString ChangeToRealPath(QString path);

    void ShowProgressRate();

    bool CheckRawFileExist(int id,QString path);

    void StartRawFileThread(int code);

    void UpdateRawFileInit();

    const int threadAmount=4;
    const int initNum=50;

signals:
    void BackToMenu();
};

#endif // SELECT_H
