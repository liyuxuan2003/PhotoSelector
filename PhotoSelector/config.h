#ifndef CONFIG_H
#define CONFIG_H

#include <QFrame>
#include <QLabel>
#include <QPushButton>
#include <QFileDialog>
#include <QDesktopServices>

#include <LiLibrary/LiFileName.h>
#include <LiLibrary/LiEasyLayout.h>

#include "helpselect.h"

namespace Ui
{
    class Config;
}

class Config : public QFrame
{
    Q_OBJECT

public:
    explicit Config(QWidget *parent = nullptr);
    ~Config();

    void Init(QStringList target);

protected:
    virtual void resizeEvent(QResizeEvent * event);

private slots:
    void on_pushButtonKeyEnter_clicked();

    void on_pushButtonKey1_clicked();

    void on_pushButtonKey2_clicked();

    void on_pushButtonKey3_clicked();

    void on_pushButtonKey4_clicked();

    void on_checkBoxKeyEnter_stateChanged(int arg1);

    void on_checkBoxKey1_stateChanged(int arg1);

    void on_checkBoxKey2_stateChanged(int arg1);

    void on_checkBoxKey3_stateChanged(int arg1);

    void on_checkBoxKey4_stateChanged(int arg1);

    void on_pushButtonStart_clicked();

    void on_pushButtonExit_clicked();

    void on_pushButtonHelp_clicked();

private:
    Ui::Config *ui;

    HelpSelect* helpSelect;

    LiEasyLayout* l1;
    LiEasyLayout* l2;

    void OnClickSetPath(QString prefix,QLabel* label,int id);
    void OnDisabledStateChange(QString prefix,QLabel* label,QPushButton* pushButton,int state,int id);

    QStringList sorcePath;
    QString path[5];
    bool isDisabled[5];

    QString defaultPath;

signals:
    void LoadSelectFrame(QStringList& sorcePath,QString* path,bool* isDisabled);

    void BackToMenu();
};

#endif // CONFIG_H
