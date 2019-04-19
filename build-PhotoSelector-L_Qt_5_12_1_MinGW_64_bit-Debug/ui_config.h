/********************************************************************************
** Form generated from reading UI file 'config.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIG_H
#define UI_CONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Config
{
public:
    QLabel *labelTitle;
    QLabel *labelInfo1;
    QLabel *labelInfo2;
    QFrame *line1;
    QLabel *labelTitleConfig;
    QLabel *labelTitleBasic;
    QLabel *labelKeyEnter;
    QPushButton *pushButtonKeyEnter;
    QCheckBox *checkBoxKeyEnter;
    QLabel *labelKey1;
    QPushButton *pushButtonKey1;
    QCheckBox *checkBoxKey1;
    QCheckBox *checkBoxKey2;
    QPushButton *pushButtonKey2;
    QLabel *labelKey2;
    QLabel *labelKey4;
    QCheckBox *checkBoxKey3;
    QPushButton *pushButtonKey3;
    QCheckBox *checkBoxKey4;
    QPushButton *pushButtonKey4;
    QLabel *labelKey3;
    QLabel *labelStart;
    QPushButton *pushButtonExit;
    QPushButton *pushButtonStart;
    QLabel *labelExit;
    QLabel *labelHelp;
    QPushButton *pushButtonHelp;

    void setupUi(QFrame *Config)
    {
        if (Config->objectName().isEmpty())
            Config->setObjectName(QString::fromUtf8("Config"));
        Config->resize(1000, 562);
        Config->setAutoFillBackground(false);
        Config->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 66, 68);"));
        labelTitle = new QLabel(Config);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setGeometry(QRect(30, 15, 401, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font.setPointSize(20);
        labelTitle->setFont(font);
        labelTitle->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        labelInfo1 = new QLabel(Config);
        labelInfo1->setObjectName(QString::fromUtf8("labelInfo1"));
        labelInfo1->setGeometry(QRect(30, 103, 941, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font1.setPointSize(13);
        labelInfo1->setFont(font1);
        labelInfo1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        labelInfo2 = new QLabel(Config);
        labelInfo2->setObjectName(QString::fromUtf8("labelInfo2"));
        labelInfo2->setGeometry(QRect(30, 133, 401, 31));
        labelInfo2->setFont(font1);
        labelInfo2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        line1 = new QFrame(Config);
        line1->setObjectName(QString::fromUtf8("line1"));
        line1->setGeometry(QRect(30, 167, 461, 16));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font2.setPointSize(10);
        line1->setFont(font2);
        line1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        line1->setFrameShadow(QFrame::Plain);
        line1->setLineWidth(2);
        line1->setFrameShape(QFrame::HLine);
        labelTitleConfig = new QLabel(Config);
        labelTitleConfig->setObjectName(QString::fromUtf8("labelTitleConfig"));
        labelTitleConfig->setGeometry(QRect(30, 190, 391, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(75);
        labelTitleConfig->setFont(font3);
        labelTitleConfig->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        labelTitleBasic = new QLabel(Config);
        labelTitleBasic->setObjectName(QString::fromUtf8("labelTitleBasic"));
        labelTitleBasic->setGeometry(QRect(30, 73, 401, 21));
        labelTitleBasic->setFont(font3);
        labelTitleBasic->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        labelKeyEnter = new QLabel(Config);
        labelKeyEnter->setObjectName(QString::fromUtf8("labelKeyEnter"));
        labelKeyEnter->setGeometry(QRect(130, 230, 641, 31));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font4.setPointSize(11);
        labelKeyEnter->setFont(font4);
        labelKeyEnter->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        pushButtonKeyEnter = new QPushButton(Config);
        pushButtonKeyEnter->setObjectName(QString::fromUtf8("pushButtonKeyEnter"));
        pushButtonKeyEnter->setGeometry(QRect(30, 230, 91, 31));
        pushButtonKeyEnter->setFont(font4);
        pushButtonKeyEnter->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 179, 219);"));
        checkBoxKeyEnter = new QCheckBox(Config);
        checkBoxKeyEnter->setObjectName(QString::fromUtf8("checkBoxKeyEnter"));
        checkBoxKeyEnter->setGeometry(QRect(30, 263, 111, 16));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font5.setPointSize(9);
        font5.setKerning(true);
        checkBoxKeyEnter->setFont(font5);
        checkBoxKeyEnter->setTabletTracking(false);
        checkBoxKeyEnter->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        checkBoxKeyEnter->setCheckable(true);
        checkBoxKeyEnter->setChecked(false);
        checkBoxKeyEnter->setTristate(false);
        labelKey1 = new QLabel(Config);
        labelKey1->setObjectName(QString::fromUtf8("labelKey1"));
        labelKey1->setGeometry(QRect(130, 307, 641, 31));
        labelKey1->setFont(font4);
        labelKey1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        pushButtonKey1 = new QPushButton(Config);
        pushButtonKey1->setObjectName(QString::fromUtf8("pushButtonKey1"));
        pushButtonKey1->setEnabled(false);
        pushButtonKey1->setGeometry(QRect(30, 307, 91, 31));
        pushButtonKey1->setFont(font4);
        pushButtonKey1->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 179, 219);"));
        checkBoxKey1 = new QCheckBox(Config);
        checkBoxKey1->setObjectName(QString::fromUtf8("checkBoxKey1"));
        checkBoxKey1->setGeometry(QRect(30, 340, 111, 16));
        checkBoxKey1->setFont(font5);
        checkBoxKey1->setTabletTracking(false);
        checkBoxKey1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        checkBoxKey1->setCheckable(true);
        checkBoxKey1->setChecked(true);
        checkBoxKey1->setTristate(false);
        checkBoxKey2 = new QCheckBox(Config);
        checkBoxKey2->setObjectName(QString::fromUtf8("checkBoxKey2"));
        checkBoxKey2->setGeometry(QRect(30, 400, 111, 16));
        checkBoxKey2->setFont(font5);
        checkBoxKey2->setTabletTracking(false);
        checkBoxKey2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        checkBoxKey2->setCheckable(true);
        checkBoxKey2->setChecked(true);
        checkBoxKey2->setTristate(false);
        pushButtonKey2 = new QPushButton(Config);
        pushButtonKey2->setObjectName(QString::fromUtf8("pushButtonKey2"));
        pushButtonKey2->setEnabled(false);
        pushButtonKey2->setGeometry(QRect(30, 367, 91, 31));
        pushButtonKey2->setFont(font4);
        pushButtonKey2->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 179, 219);"));
        pushButtonKey2->setCheckable(false);
        pushButtonKey2->setAutoDefault(false);
        pushButtonKey2->setFlat(false);
        labelKey2 = new QLabel(Config);
        labelKey2->setObjectName(QString::fromUtf8("labelKey2"));
        labelKey2->setGeometry(QRect(130, 367, 641, 31));
        labelKey2->setFont(font4);
        labelKey2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        labelKey4 = new QLabel(Config);
        labelKey4->setObjectName(QString::fromUtf8("labelKey4"));
        labelKey4->setGeometry(QRect(130, 487, 641, 31));
        labelKey4->setFont(font4);
        labelKey4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        checkBoxKey3 = new QCheckBox(Config);
        checkBoxKey3->setObjectName(QString::fromUtf8("checkBoxKey3"));
        checkBoxKey3->setGeometry(QRect(30, 457, 111, 16));
        checkBoxKey3->setFont(font5);
        checkBoxKey3->setTabletTracking(false);
        checkBoxKey3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        checkBoxKey3->setCheckable(true);
        checkBoxKey3->setChecked(true);
        checkBoxKey3->setTristate(false);
        pushButtonKey3 = new QPushButton(Config);
        pushButtonKey3->setObjectName(QString::fromUtf8("pushButtonKey3"));
        pushButtonKey3->setEnabled(false);
        pushButtonKey3->setGeometry(QRect(30, 427, 91, 31));
        pushButtonKey3->setFont(font4);
        pushButtonKey3->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 179, 219);"));
        checkBoxKey4 = new QCheckBox(Config);
        checkBoxKey4->setObjectName(QString::fromUtf8("checkBoxKey4"));
        checkBoxKey4->setGeometry(QRect(30, 520, 111, 16));
        checkBoxKey4->setFont(font5);
        checkBoxKey4->setTabletTracking(false);
        checkBoxKey4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        checkBoxKey4->setCheckable(true);
        checkBoxKey4->setChecked(true);
        checkBoxKey4->setTristate(false);
        pushButtonKey4 = new QPushButton(Config);
        pushButtonKey4->setObjectName(QString::fromUtf8("pushButtonKey4"));
        pushButtonKey4->setEnabled(false);
        pushButtonKey4->setGeometry(QRect(30, 487, 91, 31));
        pushButtonKey4->setFont(font4);
        pushButtonKey4->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 179, 219);"));
        labelKey3 = new QLabel(Config);
        labelKey3->setObjectName(QString::fromUtf8("labelKey3"));
        labelKey3->setGeometry(QRect(130, 427, 641, 31));
        labelKey3->setFont(font4);
        labelKey3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        labelStart = new QLabel(Config);
        labelStart->setObjectName(QString::fromUtf8("labelStart"));
        labelStart->setGeometry(QRect(875, 510, 111, 31));
        labelStart->setFont(font1);
        labelStart->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        pushButtonExit = new QPushButton(Config);
        pushButtonExit->setObjectName(QString::fromUtf8("pushButtonExit"));
        pushButtonExit->setGeometry(QRect(800, 400, 61, 61));
        pushButtonExit->setStyleSheet(QString::fromUtf8("image: url(:/Resource/Exit.PNG);"));
        pushButtonStart = new QPushButton(Config);
        pushButtonStart->setObjectName(QString::fromUtf8("pushButtonStart"));
        pushButtonStart->setGeometry(QRect(800, 480, 61, 61));
        pushButtonStart->setStyleSheet(QString::fromUtf8("image: url(:/Resource/Start.PNG);"));
        labelExit = new QLabel(Config);
        labelExit->setObjectName(QString::fromUtf8("labelExit"));
        labelExit->setGeometry(QRect(875, 430, 101, 31));
        labelExit->setFont(font1);
        labelExit->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        labelHelp = new QLabel(Config);
        labelHelp->setObjectName(QString::fromUtf8("labelHelp"));
        labelHelp->setGeometry(QRect(875, 350, 101, 31));
        labelHelp->setFont(font1);
        labelHelp->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        pushButtonHelp = new QPushButton(Config);
        pushButtonHelp->setObjectName(QString::fromUtf8("pushButtonHelp"));
        pushButtonHelp->setGeometry(QRect(800, 320, 61, 61));
        pushButtonHelp->setStyleSheet(QString::fromUtf8("image: url(:/Resource/Help.PNG);"));

        retranslateUi(Config);

        QMetaObject::connectSlotsByName(Config);
    } // setupUi

    void retranslateUi(QFrame *Config)
    {
        Config->setWindowTitle(QApplication::translate("Config", "Frame", nullptr));
        labelTitle->setText(QApplication::translate("Config", "\351\205\215\347\275\256\346\234\254\346\254\241\347\205\247\347\211\207\351\200\211\346\213\251", nullptr));
        labelInfo1->setText(QApplication::translate("Config", "\345\276\205\346\214\221\351\200\211\347\232\204\347\205\247\347\211\207\344\275\215\344\272\216\357\274\232D:/", nullptr));
        labelInfo2->setText(QApplication::translate("Config", "\345\276\205\346\214\221\351\200\211\347\232\204\347\205\247\347\211\207\346\225\260\351\207\217\357\274\2322\345\274\240", nullptr));
        labelTitleConfig->setText(QApplication::translate("Config", "\350\256\276\347\275\256\345\277\253\346\215\267\351\224\256\347\232\204\347\233\256\346\240\207\350\267\257\345\276\204\357\274\232", nullptr));
        labelTitleBasic->setText(QApplication::translate("Config", "\345\237\272\346\234\254\344\277\241\346\201\257\357\274\232", nullptr));
        labelKeyEnter->setText(QApplication::translate("Config", "\345\233\236\350\275\246\357\274\232C:/", nullptr));
        pushButtonKeyEnter->setText(QApplication::translate("Config", "\344\277\256\346\224\271\350\267\257\345\276\204", nullptr));
        checkBoxKeyEnter->setText(QApplication::translate("Config", "\347\246\201\347\224\250\350\257\245\345\277\253\346\215\267\351\224\256", nullptr));
        labelKey1->setText(QApplication::translate("Config", "\346\225\260\345\255\227\351\224\2561\357\274\232\345\267\262\347\246\201\347\224\250", nullptr));
        pushButtonKey1->setText(QApplication::translate("Config", "\344\277\256\346\224\271\350\267\257\345\276\204", nullptr));
        checkBoxKey1->setText(QApplication::translate("Config", "\347\246\201\347\224\250\350\257\245\345\277\253\346\215\267\351\224\256", nullptr));
        checkBoxKey2->setText(QApplication::translate("Config", "\347\246\201\347\224\250\350\257\245\345\277\253\346\215\267\351\224\256", nullptr));
        pushButtonKey2->setText(QApplication::translate("Config", "\344\277\256\346\224\271\350\267\257\345\276\204", nullptr));
        labelKey2->setText(QApplication::translate("Config", "\346\225\260\345\255\227\351\224\2562\357\274\232\345\267\262\347\246\201\347\224\250", nullptr));
        labelKey4->setText(QApplication::translate("Config", "\346\225\260\345\255\227\351\224\2564\357\274\232\345\267\262\347\246\201\347\224\250", nullptr));
        checkBoxKey3->setText(QApplication::translate("Config", "\347\246\201\347\224\250\350\257\245\345\277\253\346\215\267\351\224\256", nullptr));
        pushButtonKey3->setText(QApplication::translate("Config", "\344\277\256\346\224\271\350\267\257\345\276\204", nullptr));
        checkBoxKey4->setText(QApplication::translate("Config", "\347\246\201\347\224\250\350\257\245\345\277\253\346\215\267\351\224\256", nullptr));
        pushButtonKey4->setText(QApplication::translate("Config", "\344\277\256\346\224\271\350\267\257\345\276\204", nullptr));
        labelKey3->setText(QApplication::translate("Config", "\346\225\260\345\255\227\351\224\2563\357\274\232\345\267\262\347\246\201\347\224\250", nullptr));
        labelStart->setText(QApplication::translate("Config", "\345\274\200\345\247\213\346\214\221\351\200\211\357\274\201", nullptr));
        pushButtonExit->setText(QString());
        pushButtonStart->setText(QString());
        labelExit->setText(QApplication::translate("Config", "\350\277\224\345\233\236\344\270\273\347\225\214\351\235\242", nullptr));
        labelHelp->setText(QApplication::translate("Config", "\345\270\256\345\212\251", nullptr));
        pushButtonHelp->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Config: public Ui_Config {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIG_H
