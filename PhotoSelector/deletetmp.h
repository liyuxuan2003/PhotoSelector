#ifndef DELETETMP_H
#define DELETETMP_H

#include <QObject>
#include <QThread>
#include <QFile>
#include <QDir>
#include <QStandardPaths>
#include <QDebug>

class DeleteTmp : public QThread
{
    Q_OBJECT

public:
    DeleteTmp();

protected:
    virtual void run();

signals:
    void DeleteDone();
};

#endif // DELETETMP_H
