#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>

#include "menu.h"
#include "config.h"
#include <QApplication>
#include <QDesktopWidget>

#include "select.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    virtual void resizeEvent(QResizeEvent * event);

private:
    Ui::MainWindow *ui;
    Menu* menu;
    Config* config;
    Select* select;

public slots:
    void StartSelectPhoto();

    void LoadSelectFrame(QStringList& sorcePath,QString* path,bool* isDisabled);

    void BackToMenu();
};

#endif // MAINWINDOW_H
