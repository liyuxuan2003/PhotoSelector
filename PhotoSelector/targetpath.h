#ifndef TARGETPATH_H
#define TARGETPATH_H

#include <QDialog>
#include <QDesktopServices>
#include <QFileDialog>

namespace Ui
{
    class TargetPath;
}

class TargetPath : public QDialog
{
    Q_OBJECT

public:
    explicit TargetPath(QWidget *parent = nullptr);
    ~TargetPath();

    void Init(QString title,QString path,bool mode,int id);

    QString GetPath();
    bool GetMode();

private slots:
    void on_pushButtonShow_clicked();

    void on_pushButtonSet_clicked();

    void on_checkBoxKeyEnter_stateChanged(int arg1);

private:
    Ui::TargetPath *ui;

    QString title;
    QString path;
    bool mode;
    int id;

};

#endif // TARGETPATH_H
