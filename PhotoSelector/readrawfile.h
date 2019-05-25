#ifndef READRAWFILE_H
#define READRAWFILE_H

#include <QObject>
#include <QThread>
#include <QDebug>
#include <QStandardPaths>
#include <QFile>
#include <QProcess>
#include <QFile>

#include <LiLibrary/LiFileName.h>

class ReadRawFile : public QThread
{
    Q_OBJECT

public:
    ReadRawFile(int code);

    void Init();

    void SetFileToProcess(QString sor,QString tar,int id,bool isRawFile);

    int GetId();

protected:
    virtual void run();

private:
    QString rawFile;
    QString rawFileExport;
    int id;
    bool isRawFile;

    int code;
    bool flag;

public slots:
    void ProcessDoneSlots();

signals:
    void ProcessDoneSingals(int code);
};

#endif // READRAWFILE_H
