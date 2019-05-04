#ifndef FINDSAMENAMEFILE_H
#define FINDSAMENAMEFILE_H

#include <QDialog>

namespace Ui
{
    class FindSameNameFile;
}

class FindSameNameFile : public QDialog
{
    Q_OBJECT

public:
    explicit FindSameNameFile(QWidget *parent = nullptr);
    ~FindSameNameFile();

    void Init(QString pathRead,QString pathInput);

    bool GetAns();

private slots:
    void on_pushButtonYes_clicked();

    void on_pushButtonNo_clicked();

private:
    Ui::FindSameNameFile *ui;

    bool ans;
};

#endif // FINDSAMENAMEFILE_H
