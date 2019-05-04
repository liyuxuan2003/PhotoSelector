/********************************************************************************
** Form generated from reading UI file 'select.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECT_H
#define UI_SELECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Select
{
public:
    QFrame *frameInfo;
    QLabel *labelAmount;
    QLabel *labelNowId;
    QLabel *labelNowNameTitle;
    QLabel *labelNowName;
    QLabel *labelSource;
    QPushButton *pushButtonSource;
    QFrame *line1;
    QLabel *labelKeyEnterTitle;
    QPushButton *pushButtonKeyEnter;
    QLabel *labelKey1Title;
    QPushButton *pushButtonKey1;
    QLabel *labelKey2Title;
    QPushButton *pushButtonKey2;
    QLabel *labelKey4Title;
    QPushButton *pushButtonKey4;
    QLabel *labelKey3Title;
    QPushButton *pushButtonKey3;
    QPushButton *pushButtonHelp;
    QPushButton *pushButtonExit;
    QFrame *line2;
    QPlainTextEdit *plainTextEditLog;
    QLabel *labelKey4Title_2;
    QFrame *frameImage;
    QLabel *labelImage;

    void setupUi(QFrame *Select)
    {
        if (Select->objectName().isEmpty())
            Select->setObjectName(QString::fromUtf8("Select"));
        Select->resize(1200, 675);
        Select->setMinimumSize(QSize(0, 0));
        Select->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        frameInfo = new QFrame(Select);
        frameInfo->setObjectName(QString::fromUtf8("frameInfo"));
        frameInfo->setGeometry(QRect(0, 0, 250, 675));
        frameInfo->setStyleSheet(QString::fromUtf8("background-color: rgb(66, 66, 66);"));
        frameInfo->setFrameShape(QFrame::StyledPanel);
        frameInfo->setFrameShadow(QFrame::Raised);
        labelAmount = new QLabel(frameInfo);
        labelAmount->setObjectName(QString::fromUtf8("labelAmount"));
        labelAmount->setGeometry(QRect(20, 20, 161, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font.setPointSize(12);
        labelAmount->setFont(font);
        labelAmount->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        labelNowId = new QLabel(frameInfo);
        labelNowId->setObjectName(QString::fromUtf8("labelNowId"));
        labelNowId->setGeometry(QRect(20, 50, 161, 31));
        labelNowId->setFont(font);
        labelNowId->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        labelNowNameTitle = new QLabel(frameInfo);
        labelNowNameTitle->setObjectName(QString::fromUtf8("labelNowNameTitle"));
        labelNowNameTitle->setGeometry(QRect(20, 90, 161, 31));
        labelNowNameTitle->setFont(font);
        labelNowNameTitle->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        labelNowName = new QLabel(frameInfo);
        labelNowName->setObjectName(QString::fromUtf8("labelNowName"));
        labelNowName->setGeometry(QRect(20, 120, 221, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font1.setPointSize(11);
        labelNowName->setFont(font1);
        labelNowName->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        labelSource = new QLabel(frameInfo);
        labelSource->setObjectName(QString::fromUtf8("labelSource"));
        labelSource->setGeometry(QRect(20, 160, 161, 31));
        labelSource->setFont(font);
        labelSource->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        pushButtonSource = new QPushButton(frameInfo);
        pushButtonSource->setObjectName(QString::fromUtf8("pushButtonSource"));
        pushButtonSource->setGeometry(QRect(86, 162, 81, 25));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font2.setPointSize(10);
        pushButtonSource->setFont(font2);
        pushButtonSource->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 179, 219);\n"
"color: rgb(0, 0, 0);"));
        line1 = new QFrame(frameInfo);
        line1->setObjectName(QString::fromUtf8("line1"));
        line1->setGeometry(QRect(20, 200, 201, 16));
        line1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        line1->setFrameShadow(QFrame::Plain);
        line1->setLineWidth(2);
        line1->setFrameShape(QFrame::HLine);
        labelKeyEnterTitle = new QLabel(frameInfo);
        labelKeyEnterTitle->setObjectName(QString::fromUtf8("labelKeyEnterTitle"));
        labelKeyEnterTitle->setGeometry(QRect(20, 220, 101, 31));
        labelKeyEnterTitle->setFont(font);
        labelKeyEnterTitle->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        pushButtonKeyEnter = new QPushButton(frameInfo);
        pushButtonKeyEnter->setObjectName(QString::fromUtf8("pushButtonKeyEnter"));
        pushButtonKeyEnter->setGeometry(QRect(155, 220, 81, 30));
        pushButtonKeyEnter->setFont(font2);
        pushButtonKeyEnter->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 179, 219);\n"
"color: rgb(0, 0, 0);"));
        labelKey1Title = new QLabel(frameInfo);
        labelKey1Title->setObjectName(QString::fromUtf8("labelKey1Title"));
        labelKey1Title->setGeometry(QRect(20, 260, 121, 31));
        labelKey1Title->setFont(font);
        labelKey1Title->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        pushButtonKey1 = new QPushButton(frameInfo);
        pushButtonKey1->setObjectName(QString::fromUtf8("pushButtonKey1"));
        pushButtonKey1->setGeometry(QRect(155, 260, 81, 30));
        pushButtonKey1->setFont(font2);
        pushButtonKey1->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 179, 219);\n"
"color: rgb(0, 0, 0);"));
        labelKey2Title = new QLabel(frameInfo);
        labelKey2Title->setObjectName(QString::fromUtf8("labelKey2Title"));
        labelKey2Title->setGeometry(QRect(20, 300, 121, 31));
        labelKey2Title->setFont(font);
        labelKey2Title->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        pushButtonKey2 = new QPushButton(frameInfo);
        pushButtonKey2->setObjectName(QString::fromUtf8("pushButtonKey2"));
        pushButtonKey2->setGeometry(QRect(155, 300, 81, 30));
        pushButtonKey2->setFont(font2);
        pushButtonKey2->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 179, 219);\n"
"color: rgb(0, 0, 0);"));
        labelKey4Title = new QLabel(frameInfo);
        labelKey4Title->setObjectName(QString::fromUtf8("labelKey4Title"));
        labelKey4Title->setGeometry(QRect(20, 380, 121, 31));
        labelKey4Title->setFont(font);
        labelKey4Title->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        pushButtonKey4 = new QPushButton(frameInfo);
        pushButtonKey4->setObjectName(QString::fromUtf8("pushButtonKey4"));
        pushButtonKey4->setGeometry(QRect(155, 380, 81, 30));
        pushButtonKey4->setFont(font2);
        pushButtonKey4->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 179, 219);\n"
"color: rgb(0, 0, 0);"));
        labelKey3Title = new QLabel(frameInfo);
        labelKey3Title->setObjectName(QString::fromUtf8("labelKey3Title"));
        labelKey3Title->setGeometry(QRect(20, 340, 121, 31));
        labelKey3Title->setFont(font);
        labelKey3Title->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        pushButtonKey3 = new QPushButton(frameInfo);
        pushButtonKey3->setObjectName(QString::fromUtf8("pushButtonKey3"));
        pushButtonKey3->setGeometry(QRect(155, 340, 81, 30));
        pushButtonKey3->setFont(font2);
        pushButtonKey3->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 179, 219);\n"
"color: rgb(0, 0, 0);"));
        pushButtonHelp = new QPushButton(frameInfo);
        pushButtonHelp->setObjectName(QString::fromUtf8("pushButtonHelp"));
        pushButtonHelp->setGeometry(QRect(63, 593, 71, 71));
        pushButtonHelp->setStyleSheet(QString::fromUtf8("image: url(:/Resource/Help.PNG);"));
        pushButtonExit = new QPushButton(frameInfo);
        pushButtonExit->setObjectName(QString::fromUtf8("pushButtonExit"));
        pushButtonExit->setGeometry(QRect(163, 593, 71, 71));
        pushButtonExit->setStyleSheet(QString::fromUtf8("image: url(:/Resource/Exit.PNG);"));
        line2 = new QFrame(frameInfo);
        line2->setObjectName(QString::fromUtf8("line2"));
        line2->setGeometry(QRect(20, 420, 201, 16));
        line2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        line2->setFrameShadow(QFrame::Plain);
        line2->setLineWidth(2);
        line2->setFrameShape(QFrame::HLine);
        plainTextEditLog = new QPlainTextEdit(frameInfo);
        plainTextEditLog->setObjectName(QString::fromUtf8("plainTextEditLog"));
        plainTextEditLog->setGeometry(QRect(20, 480, 211, 101));
        plainTextEditLog->setFont(font2);
        plainTextEditLog->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        plainTextEditLog->setReadOnly(true);
        plainTextEditLog->setTextInteractionFlags(Qt::NoTextInteraction);
        labelKey4Title_2 = new QLabel(frameInfo);
        labelKey4Title_2->setObjectName(QString::fromUtf8("labelKey4Title_2"));
        labelKey4Title_2->setGeometry(QRect(20, 440, 121, 31));
        labelKey4Title_2->setFont(font);
        labelKey4Title_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        frameImage = new QFrame(Select);
        frameImage->setObjectName(QString::fromUtf8("frameImage"));
        frameImage->setGeometry(QRect(250, 0, 950, 675));
        frameImage->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        frameImage->setFrameShape(QFrame::StyledPanel);
        frameImage->setFrameShadow(QFrame::Raised);
        labelImage = new QLabel(frameImage);
        labelImage->setObjectName(QString::fromUtf8("labelImage"));
        labelImage->setGeometry(QRect(0, 21, 950, 633));
        labelImage->setStyleSheet(QString::fromUtf8("background-color: rgb(120, 120, 120);"));

        retranslateUi(Select);

        QMetaObject::connectSlotsByName(Select);
    } // setupUi

    void retranslateUi(QFrame *Select)
    {
        Select->setWindowTitle(QApplication::translate("Select", "Frame", nullptr));
        labelAmount->setText(QApplication::translate("Select", "\347\205\247\347\211\207\346\200\273\346\225\260\357\274\23210301040", nullptr));
        labelNowId->setText(QApplication::translate("Select", "\345\275\223\345\211\215\347\205\247\347\211\207\347\274\226\345\217\267\357\274\232502000", nullptr));
        labelNowNameTitle->setText(QApplication::translate("Select", "\345\275\223\345\211\215\347\205\247\347\211\207\346\226\207\344\273\266\345\220\215\357\274\232", nullptr));
        labelNowName->setText(QApplication::translate("Select", "IMG_0817.CR2", nullptr));
        labelSource->setText(QApplication::translate("Select", "\347\205\247\347\211\207\346\272\220\357\274\232", nullptr));
        pushButtonSource->setText(QApplication::translate("Select", "\347\202\271\345\207\273\346\237\245\347\234\213", nullptr));
        labelKeyEnterTitle->setText(QApplication::translate("Select", "\345\233\236\350\275\246\357\274\232\345\267\262\345\220\257\347\224\250", nullptr));
        pushButtonKeyEnter->setText(QApplication::translate("Select", "\347\274\226\350\276\221\345\277\253\346\215\267\351\224\256", nullptr));
        labelKey1Title->setText(QApplication::translate("Select", "\346\225\260\345\255\227\351\224\2561\357\274\232\345\267\262\345\220\257\347\224\250", nullptr));
        pushButtonKey1->setText(QApplication::translate("Select", "\347\274\226\350\276\221\345\277\253\346\215\267\351\224\256", nullptr));
        labelKey2Title->setText(QApplication::translate("Select", "\346\225\260\345\255\227\351\224\2562\357\274\232\345\267\262\345\220\257\347\224\250", nullptr));
        pushButtonKey2->setText(QApplication::translate("Select", "\347\274\226\350\276\221\345\277\253\346\215\267\351\224\256", nullptr));
        labelKey4Title->setText(QApplication::translate("Select", "\346\225\260\345\255\227\351\224\2564\357\274\232\345\267\262\345\220\257\347\224\250", nullptr));
        pushButtonKey4->setText(QApplication::translate("Select", "\347\274\226\350\276\221\345\277\253\346\215\267\351\224\256", nullptr));
        labelKey3Title->setText(QApplication::translate("Select", "\346\225\260\345\255\227\351\224\2563\357\274\232\345\267\262\345\220\257\347\224\250", nullptr));
        pushButtonKey3->setText(QApplication::translate("Select", "\347\274\226\350\276\221\345\277\253\346\215\267\351\224\256", nullptr));
        pushButtonHelp->setText(QString());
        pushButtonExit->setText(QString());
        plainTextEditLog->setPlainText(QApplication::translate("Select", "~~~", nullptr));
        labelKey4Title_2->setText(QApplication::translate("Select", "\346\227\245\345\277\227\357\274\232", nullptr));
        labelImage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Select: public Ui_Select {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECT_H
