#ifndef SELECT_H
#define SELECT_H

#include <QFrame>
#include <QDebug>
#include <QKeyEvent>
#include <QLabel>
#include <QProcess>
#include <QDateTime>

#include <algorithm>

#include "dcraw.h"

#include "targetpath.h"
#include "readrawfile.h"

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
    void RawFileProcessDone();

private slots:
    void on_pushButtonKeyEnter_clicked();

    void on_pushButtonKey1_clicked();

    void on_pushButtonKey2_clicked();

    void on_pushButtonKey3_clicked();

    void on_pushButtonKey4_clicked();

    void on_pushButtonExit_clicked();

private:
    Ui::Select *ui;

    TargetPath* targetPath;

    ReadRawFile* readRawFile;

    QPixmap img;
    QSize imgSize;

    int nowImgIndex;
    int totalImgAmount;

    int rawFileProcessIndex;
    int rawFileInitPoint;

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

    QString GetNameByPath(QString path);

    QString GetFormatByPath(QString path);

    QString ChangeToRealPath(QString path);

    bool CheckRawFileExist(QString path);

    void StartRawFileThread();

    void UpdateRawFileInit();

signals:
    void BackToMenu();
};

#endif // SELECT_H
