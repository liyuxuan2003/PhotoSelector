#ifndef MENU_H
#define MENU_H

#include <about.h>

#include <QFrame>

#include <LiLibrary/LiEasyLayout.h>

namespace Ui {
class Menu;
}

class Menu : public QFrame
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr);
    ~Menu();

protected:
    virtual void resizeEvent(QResizeEvent * event);

private slots:
    void on_pushButtonStart_clicked();

    void on_pushButtonAbout_clicked();

    void on_pushButtonExit_clicked();

    void on_pushButtonStartRaw_clicked();

signals:
    void StartButtonSignal();

    void StartButtonRawSignal();

private:
    Ui::Menu* ui;

    About* about;

    LiEasyLayout* liEasyLayout;
};

#endif // MENU_H
