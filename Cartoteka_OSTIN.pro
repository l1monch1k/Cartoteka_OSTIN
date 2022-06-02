QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
     \
    main.cpp \
    mainwindow.cpp \
    profilebox.cpp \
    ssbox.cpp \
    reletionshipbox.cpp \
    imgbutton.cpp \
    dialog_photo.cpp \
    parameditbox.cpp


HEADERS += \
    imgbutton.h \
    mainwindow.h \
    parameditbox.h \
    reletionshipbox.h \
    dialog_photo.h \
    profilebox.h \
    ssbox.h

FORMS += \
    mainwindow.ui \
    parameditbox.ui \
    dialog_photo.ui \
    imgbutton.ui \
    ssbox.ui \
    profilebox.ui \
    reletionshipbox.ui \
    dialog_photo.ui

TRANSLATIONS += \
    Cartoteka_OSTIN_ru_RU.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    photo.qrc
