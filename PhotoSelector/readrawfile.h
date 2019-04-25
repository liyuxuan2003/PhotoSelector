#ifndef READRAWFILE_H
#define READRAWFILE_H

#include <QObject>
#include <QThread>
#include <QDebug>

class ReadRawFile : public QThread
{
    Q_OBJECT

public:
    ReadRawFile();

    void SetFileToProgcess(QString file);

protected:
    virtual void run();

private:
    QString rawFile;
};

#endif // READRAWFILE_H
