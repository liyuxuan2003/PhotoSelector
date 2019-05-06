#-------------------------------------------------
#
# Project created by QtCreator 2019-04-06T12:20:37
#
#-------------------------------------------------

QT       += core gui
RC_ICONS = Image/ProjectIcon128.ico

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PhotoSelector
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    menu.cpp \
    config.cpp \
    select.cpp \
    targetpath.cpp \
    about.cpp \
    readrawfile.cpp \
    dcraw.c \
    helpselect.cpp \
    findsamenamefile.cpp \
    checkname.cpp \
    deletetmp.cpp

RC_FILE += version.rc

HEADERS += \
        mainwindow.h \
    menu.h \
    config.h \
    select.h \
    targetpath.h \
    about.h \
    readrawfile.h \
    dcraw.h \
    helpselect.h \
    findsamenamefile.h \
    checkname.h \
    deletetmp.h

FORMS += \
        mainwindow.ui \
    menu.ui \
    config.ui \
    select.ui \
    targetpath.ui \
    about.ui \
    helpselect.ui \
    findsamenamefile.ui \
    targetpath.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Image/Start.PNG \
    Image/Exit.PNG \
    Image/ProjectIcon.PNG \
    Image/Help.PNG \
    Image/ProjectIcon16.ico \
    Image/ProjectIcon32.ico \
    Image/ProjectIcon64.ico \
    Image/ProjectIcon128.ico \
    version.rc

RESOURCES += \
    Image/icon.qrc

unix|win32: LIBS += -lwsock32

unix|win32: LIBS += -LC:/msys64/mingw64/lib/ -llibMagick++-7.Q16HDRI.dll

INCLUDEPATH += C:/msys64/mingw64/include/ImageMagick-7
DEPENDPATH += C:/msys64/mingw64/include/ImageMagick-7
