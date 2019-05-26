#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
#include <QGuiApplication>
#include <Magick++.h>

int main(int argc, char *argv[])
{
    QGuiApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QApplication a(argc, argv);

    MainWindow w;
    w.show();

    return a.exec();
}
