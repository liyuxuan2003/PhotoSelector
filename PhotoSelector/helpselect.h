#ifndef HELPSELECT_H
#define HELPSELECT_H

#include <QDialog>

namespace Ui {
class HelpSelect;
}

class HelpSelect : public QDialog
{
    Q_OBJECT

public:
    explicit HelpSelect(QWidget *parent = nullptr);
    ~HelpSelect();

private:
    Ui::HelpSelect *ui;
};

#endif // HELPSELECT_H
