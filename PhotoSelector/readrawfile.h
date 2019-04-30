#ifndef READRAWFILE_H
#define READRAWFILE_H

#include <QObject>
#include <QThread>
#include <QDebug>
#include <QStandardPaths>
#include <QFile>
#include <QProcess>

class ReadRawFile : public QThread
{
    Q_OBJECT

public:
    ReadRawFile();

    void SetFileToProcess(QString sor,QString tar);

protected:
    virtual void run();

private:
    QString rawFile;
    QString rawFileExport;
};

#endif // READRAWFILE_H
