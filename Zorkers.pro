QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

SOURCES += \
    Inventory.cpp \
    Room.cpp \
    ZorkUL.cpp \
    entity.cpp \
    exitwindow.cpp \
    item.cpp \
    main.cpp \
    mainwindow.cpp \
    servant.cpp

HEADERS += \
    Inventory.h \
    Room.h \
    ZorkUL.h \
    character.h \
    entity.h \
    exitwindow.h \
    item.h \
    mainwindow.h \
    servant.h

FORMS += \
    exitwindow.ui \
    mainwindow.ui

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
