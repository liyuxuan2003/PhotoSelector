/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QLabel *labelTitle;
    QLabel *labelStart;
    QPushButton *pushButtonStart;
    QLabel *labelExit;
    QPushButton *pushButtonExit;
    QPushButton *pushButtonAbout;
    QLabel *labelAbout;
    QLabel *labelExtraInfo1;
    QLabel *labelExtraInfo2;

    void setupUi(QFrame *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QString::fromUtf8("Menu"));
        Menu->resize(1000, 562);
        Menu->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 66, 68);"));
        labelTitle = new QLabel(Menu);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setGeometry(QRect(40, 20, 401, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font.setPointSize(22);
        labelTitle->setFont(font);
        labelTitle->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        labelStart = new QLabel(Menu);
        labelStart->setObjectName(QString::fromUtf8("labelStart"));
        labelStart->setGeometry(QRect(158, 150, 401, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font1.setPointSize(17);
        labelStart->setFont(font1);
        labelStart->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        pushButtonStart = new QPushButton(Menu);
        pushButtonStart->setObjectName(QString::fromUtf8("pushButtonStart"));
        pushButtonStart->setGeometry(QRect(40, 100, 101, 101));
        pushButtonStart->setStyleSheet(QString::fromUtf8("image: url(:/Resource/Start.PNG);"));
        labelExit = new QLabel(Menu);
        labelExit->setObjectName(QString::fromUtf8("labelExit"));
        labelExit->setGeometry(QRect(158, 430, 401, 61));
        labelExit->setFont(font1);
        labelExit->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        pushButtonExit = new QPushButton(Menu);
        pushButtonExit->setObjectName(QString::fromUtf8("pushButtonExit"));
        pushButtonExit->setGeometry(QRect(40, 380, 101, 101));
        pushButtonExit->setStyleSheet(QString::fromUtf8("image: url(:/Resource/Exit.PNG);"));
        pushButtonAbout = new QPushButton(Menu);
        pushButtonAbout->setObjectName(QString::fromUtf8("pushButtonAbout"));
        pushButtonAbout->setGeometry(QRect(42, 240, 101, 101));
        pushButtonAbout->setStyleSheet(QString::fromUtf8("image: url(:/Resource/ProjectIcon.PNG);"));
        labelAbout = new QLabel(Menu);
        labelAbout->setObjectName(QString::fromUtf8("labelAbout"));
        labelAbout->setGeometry(QRect(160, 290, 401, 61));
        labelAbout->setFont(font1);
        labelAbout->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        labelExtraInfo1 = new QLabel(Menu);
        labelExtraInfo1->setObjectName(QString::fromUtf8("labelExtraInfo1"));
        labelExtraInfo1->setGeometry(QRect(20, 510, 401, 20));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font2.setPointSize(10);
        labelExtraInfo1->setFont(font2);
        labelExtraInfo1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        labelExtraInfo2 = new QLabel(Menu);
        labelExtraInfo2->setObjectName(QString::fromUtf8("labelExtraInfo2"));
        labelExtraInfo2->setGeometry(QRect(20, 530, 401, 20));
        labelExtraInfo2->setFont(font2);
        labelExtraInfo2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QFrame *Menu)
    {
        Menu->setWindowTitle(QApplication::translate("Menu", "Frame", nullptr));
        labelTitle->setText(QApplication::translate("Menu", "\347\205\247\347\211\207\351\200\211\346\213\251\345\231\250 / Photo Selector", nullptr));
        labelStart->setText(QApplication::translate("Menu", "\346\211\223\345\274\200\347\205\247\347\211\207", nullptr));
        pushButtonStart->setText(QString());
        labelExit->setText(QApplication::translate("Menu", "\351\200\200\345\207\272\347\250\213\345\272\217", nullptr));
        pushButtonExit->setText(QString());
        pushButtonAbout->setText(QString());
        labelAbout->setText(QApplication::translate("Menu", "\345\205\263\344\272\216\351\241\271\347\233\256", nullptr));
        labelExtraInfo1->setText(QApplication::translate("Menu", "Designed and Developed by Li Yuxuan.", nullptr));
        labelExtraInfo2->setText(QApplication::translate("Menu", "Copyright \302\251 2019 Li Yuxuan   All Rights Reserved.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
