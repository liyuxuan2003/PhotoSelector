#ifndef MENU_H
#define MENU_H

#include <about.h>

#include <QFrame>

namespace Ui {
class Menu;
}

class Menu : public QFrame
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr);
    ~Menu();

private slots:
    void on_pushButtonStart_clicked();

    void on_pushButtonAbout_clicked();

signals:
    void StartButtonSignal();

private:
    Ui::Menu *ui;

    About *about;
};

#endif // MENU_H
