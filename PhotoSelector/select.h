#ifndef SELECT_H
#define SELECT_H

#include <QFrame>
#include <QDebug>
#include <QKeyEvent>
#include <QLabel>

#include <Magick++.h>

#include "targetpath.h"

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

    QPixmap img;
    QSize imgSize;

    int nowImgIndex;
    int totalImgAmount;

    QStringList sorcePath;

    QString* path;
    bool* isDisabled;

    QLabel** labelKeyMode;
    QString* keyPrefix;

    void ResizeWithImg();

    void RefreshKeyMode();

    void ActiveTargetPath(int id);

    void ChangeImage();

    void MoveImage(int id);

    QString GetNameByPath(QString path);

signals:
    void BackToMenu();
};

#endif // SELECT_H
