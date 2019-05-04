#ifndef CHECKNAME_H
#define CHECKNAME_H

#include <QObject>
#include <QThread>
#include <QFile>
#include <QStandardPaths>
#include <QProcess>
#include <QDebug>

#include "findsamenamefile.h"

class CheckName : public QThread
{
    Q_OBJECT

public:
    CheckName();

    void Init(QStringList& sorcePath);

protected:
    virtual void run();

private:
    QStringList sorcePath;

    QString ChangeToRealPath(QString path);
    QString GetNameByPath(QString path);

signals:
    void CheckDone(bool result);
};

#endif // CHECKNAME_H
