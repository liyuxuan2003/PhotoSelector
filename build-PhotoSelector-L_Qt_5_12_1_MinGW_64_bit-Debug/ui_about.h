/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QLabel *label;
    QPlainTextEdit *plainTextEdit;
    QLabel *labelExtraInfo2;
    QLabel *labelExtraInfo1;
    QLabel *labelVersion;
    QLabel *labelProjectIcon;

    void setupUi(QDialog *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QString::fromUtf8("About"));
        About->resize(600, 337);
        About->setMinimumSize(QSize(600, 337));
        About->setMaximumSize(QSize(600, 337));
        QFont font;
        font.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        About->setFont(font);
        About->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 66, 68);"));
        label = new QLabel(About);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 331, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font1.setPointSize(16);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        plainTextEdit = new QPlainTextEdit(About);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(20, 70, 461, 191));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font2.setPointSize(12);
        plainTextEdit->setFont(font2);
        plainTextEdit->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-color: rgb(64, 66, 68);"));
        plainTextEdit->setReadOnly(true);
        plainTextEdit->setTextInteractionFlags(Qt::NoTextInteraction);
        labelExtraInfo2 = new QLabel(About);
        labelExtraInfo2->setObjectName(QString::fromUtf8("labelExtraInfo2"));
        labelExtraInfo2->setGeometry(QRect(20, 300, 401, 20));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font3.setPointSize(10);
        labelExtraInfo2->setFont(font3);
        labelExtraInfo2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        labelExtraInfo1 = new QLabel(About);
        labelExtraInfo1->setObjectName(QString::fromUtf8("labelExtraInfo1"));
        labelExtraInfo1->setGeometry(QRect(20, 280, 401, 20));
        labelExtraInfo1->setFont(font3);
        labelExtraInfo1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        labelVersion = new QLabel(About);
        labelVersion->setObjectName(QString::fromUtf8("labelVersion"));
        labelVersion->setGeometry(QRect(540, 20, 41, 31));
        labelVersion->setFont(font2);
        labelVersion->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        labelProjectIcon = new QLabel(About);
        labelProjectIcon->setObjectName(QString::fromUtf8("labelProjectIcon"));
        labelProjectIcon->setGeometry(QRect(500, 240, 81, 81));
        labelProjectIcon->setFont(font3);
        labelProjectIcon->setStyleSheet(QString::fromUtf8("image: url(:/Resource/ProjectIcon.PNG);"));

        retranslateUi(About);

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QDialog *About)
    {
        About->setWindowTitle(QApplication::translate("About", "\345\205\263\344\272\216", nullptr));
        label->setText(QApplication::translate("About", "\345\205\263\344\272\216 \347\205\247\347\211\207\351\200\211\346\213\251\345\231\250 / PhotoSelector", nullptr));
        plainTextEdit->setPlainText(QApplication::translate("About", "\347\205\247\347\211\207\351\200\211\346\213\251\345\231\250\346\230\257\344\270\200\344\270\252\344\276\233\346\221\204\345\275\261\347\210\261\345\245\275\350\200\205\347\224\250\344\272\216\345\277\253\351\200\237\346\214\221\351\200\211\347\205\247\347\211\207\347\232\204\350\275\257\344\273\266\343\200\202\n"
"\n"
"\351\200\232\350\277\207\347\205\247\347\211\207\351\200\211\346\213\251\345\231\250\345\257\271\347\205\247\347\211\207\350\277\233\350\241\214\351\200\211\346\213\251\346\227\266\357\274\214\344\270\215\345\206\215\351\234\200\350\246\201\351\200\232\350\277\207\345\210\207\346\215\242\347\252\227\345\217\243\345\271\266\344\270\215\345\201\234\347\232\204\346\214\211Crtl+C\345\222\214Crtl+V\345\256\236\347\216\260\347\205\247\347\211\207\347\232\204\345\244\215\345\210\266\343\200\202\n"
"\n"
"\350\275\257\344\273\266\346\217\220\344\276\233\344\272\206\344\272\224\344\270\252\345\277\253\346\215\267\351\224\256\357\274\214\345\217\257\344\273\245\345\210\206\345\210\253\346\214\207\345\220\221"
                        "\344\272\224\344\270\252\344\270\215\345\220\214\347\232\204\346\226\207\344\273\266\350\267\257\345\276\204\357\274\214\345\275\223\345\217\221\347\216\260\345\226\234\346\254\242\347\232\204\347\205\247\347\211\207\346\227\266\357\274\214\345\217\252\351\234\200\350\246\201\346\214\211\344\270\213\345\277\253\346\215\267\351\224\256\345\260\261\345\217\257\344\273\245\347\233\264\346\216\245\345\260\206\345\275\223\345\211\215\347\205\247\347\211\207\345\217\221\351\200\201\345\210\260\350\256\276\345\256\232\347\232\204\350\267\257\345\276\204\357\274\214\345\205\215\345\216\273\344\272\206\344\270\215\345\277\205\350\246\201\347\232\204\346\223\215\344\275\234\343\200\202\n"
"\n"
"\350\257\245\350\275\257\344\273\266\345\217\257\344\273\245\346\224\257\346\214\201\346\224\257\346\214\201\344\275\263\350\203\275\347\233\270\346\234\272\347\232\204RAW\346\240\274\345\274\217\357\274\210*.CR2\357\274\211!", nullptr));
        labelExtraInfo2->setText(QApplication::translate("About", "Copyright \302\251 2019 Li Yuxuan   All Rights Reserved.", nullptr));
        labelExtraInfo1->setText(QApplication::translate("About", "Designed and Developed by Li Yuxuan.", nullptr));
        labelVersion->setText(QApplication::translate("About", "v1.0", nullptr));
        labelProjectIcon->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
