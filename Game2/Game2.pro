QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Actor.cpp \
    Battle.cpp \
    Bullet.cpp \
    Command.cpp \
    CommandWord.cpp \
    Enemy.cpp \
    Game.cpp \
    Health.cpp \
    Item.cpp \
    MyRect.cpp \
    Parser.cpp \
    Player.cpp \
    PowerUp.cpp \
    Room.cpp \
    Score.cpp \
    Station.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    Actor.h \
    Battle.h \
    Bullet.h \
    Command.h \
    CommandWord.h \
    Enemy.h \
    Game.h \
    Health.h \
    Item.h \
    MyRect.h \
    Parser.h \
    Player.h \
    PowerUp.h \
    Room.h \
    Score.h \
    Station.h \
    mainwindow.h

FORMS += \
    Game.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc
