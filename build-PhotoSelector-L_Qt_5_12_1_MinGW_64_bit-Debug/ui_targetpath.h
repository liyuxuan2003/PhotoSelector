/********************************************************************************
** Form generated from reading UI file 'targetpath.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TARGETPATH_H
#define UI_TARGETPATH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TargetPath
{
public:
    QLabel *labelTitle;
    QLabel *labelPathTitle;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButtonSet;
    QPushButton *pushButtonShow;
    QCheckBox *checkBoxKeyEnter;

    void setupUi(QDialog *TargetPath)
    {
        if (TargetPath->objectName().isEmpty())
            TargetPath->setObjectName(QString::fromUtf8("TargetPath"));
        TargetPath->resize(600, 250);
        TargetPath->setMinimumSize(QSize(600, 250));
        TargetPath->setMaximumSize(QSize(600, 250));
        QFont font;
        font.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font.setPointSize(14);
        TargetPath->setFont(font);
        TargetPath->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 66, 68);"));
        labelTitle = new QLabel(TargetPath);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setGeometry(QRect(20, 15, 141, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        labelTitle->setFont(font1);
        labelTitle->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        labelPathTitle = new QLabel(TargetPath);
        labelPathTitle->setObjectName(QString::fromUtf8("labelPathTitle"));
        labelPathTitle->setGeometry(QRect(20, 50, 141, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        labelPathTitle->setFont(font2);
        labelPathTitle->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        plainTextEdit = new QPlainTextEdit(TargetPath);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(20, 83, 561, 91));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font3.setPointSize(12);
        plainTextEdit->setFont(font3);
        plainTextEdit->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        plainTextEdit->setReadOnly(true);
        pushButtonSet = new QPushButton(TargetPath);
        pushButtonSet->setObjectName(QString::fromUtf8("pushButtonSet"));
        pushButtonSet->setGeometry(QRect(20, 190, 101, 41));
        pushButtonSet->setFont(font3);
        pushButtonSet->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 179, 219);"));
        pushButtonSet->setAutoDefault(true);
        pushButtonSet->setFlat(false);
        pushButtonShow = new QPushButton(TargetPath);
        pushButtonShow->setObjectName(QString::fromUtf8("pushButtonShow"));
        pushButtonShow->setGeometry(QRect(140, 190, 211, 41));
        pushButtonShow->setFont(font3);
        pushButtonShow->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 179, 219);"));
        pushButtonShow->setAutoDefault(true);
        pushButtonShow->setFlat(false);
        checkBoxKeyEnter = new QCheckBox(TargetPath);
        checkBoxKeyEnter->setObjectName(QString::fromUtf8("checkBoxKeyEnter"));
        checkBoxKeyEnter->setGeometry(QRect(468, 60, 121, 16));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font4.setPointSize(12);
        font4.setKerning(true);
        checkBoxKeyEnter->setFont(font4);
        checkBoxKeyEnter->setTabletTracking(false);
        checkBoxKeyEnter->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        checkBoxKeyEnter->setCheckable(true);
        checkBoxKeyEnter->setChecked(false);
        checkBoxKeyEnter->setTristate(false);

        retranslateUi(TargetPath);

        QMetaObject::connectSlotsByName(TargetPath);
    } // setupUi

    void retranslateUi(QDialog *TargetPath)
    {
        TargetPath->setWindowTitle(QApplication::translate("TargetPath", "\347\233\256\346\240\207\350\267\257\345\276\204\351\205\215\347\275\256", nullptr));
        labelTitle->setText(QApplication::translate("TargetPath", "\345\233\236\350\275\246\351\224\256\357\274\232", nullptr));
        labelPathTitle->setText(QApplication::translate("TargetPath", "\347\233\256\346\240\207\350\267\257\345\276\204\357\274\232", nullptr));
        plainTextEdit->setPlainText(QString());
        pushButtonSet->setText(QApplication::translate("TargetPath", "\350\256\276\347\275\256\350\267\257\345\276\204", nullptr));
        pushButtonShow->setText(QApplication::translate("TargetPath", "\345\234\250\346\226\207\344\273\266\350\265\204\346\272\220\347\256\241\347\220\206\345\231\250\344\270\255\346\211\223\345\274\200", nullptr));
        checkBoxKeyEnter->setText(QApplication::translate("TargetPath", "\347\246\201\347\224\250\350\257\245\345\277\253\346\215\267\351\224\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TargetPath: public Ui_TargetPath {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TARGETPATH_H
