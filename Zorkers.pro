QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

INCLUDEPATH += include

SOURCES += \
    src/Inventory.cpp \
    src/Room.cpp \
    src/ZorkUL.cpp \
    src/entity.cpp \
    src/exitwindow.cpp \
    src/item.cpp \
    src/main.cpp \
    src/mainwindow.cpp \
    src/servant.cpp

HEADERS += \
    include/Inventory.h \
    include/Room.h \
    include/ZorkUL.h \
    include/character.h \
    include/entity.h \
    include/exitwindow.h \
    include/item.h \
    include/mainwindow.h \
    include/servant.h

FORMS += \
    ui/exitwindow.ui \
    ui/mainwindow.ui

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
