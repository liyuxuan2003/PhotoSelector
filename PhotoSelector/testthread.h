#ifndef TESTTHREAD_H
#define TESTTHREAD_H

#include <QObject>
#include <QThread>
#include <QDebug>
#include <QDateTime>
#include <QProcess>

#include "dcraw.h"

class TestThread : public QThread
{
    Q_OBJECT

public:
    TestThread(int code);

protected:
    virtual void run();

    int code;
};

#endif // TESTTHREAD_H
