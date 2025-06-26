# QT       += core gui multimedia

# greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

# CONFIG += c++17

# # You can make your code fail to compile if it uses deprecated APIs.
# # In order to do so, uncomment the following line.
# #DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# SOURCES += main.cpp\
#         gamepanel.cpp \
#     card.cpp \
#     cardpanle.cpp \
#     player.cpp \
#     cards.cpp \
#     robot.cpp \
#     userplayer.cpp \
#     gamecontrol.cpp \
#     scorepannel.cpp \
#     mybutton.cpp \
#     buttongroup.cpp \
#     playhand.cpp \
#     strategy.cpp \
#     robotgrablord.cpp \
#     animationwindow.cpp \
#     robotplayhand.cpp \
#     endingpanel.cpp \
#     countdown.cpp \
#     bgmcontrol.cpp \
#     loading.cpp

# HEADERS  += gamepanel.h \
#     card.h \
#     cardpanle.h \
#     player.h \
#     cards.h \
#     robot.h \
#     userplayer.h \
#     gamecontrol.h \
#     scorepannel.h \
#     mybutton.h \
#     buttongroup.h \
#     playhand.h \
#     strategy.h \
#     robotgrablord.h \
#     animationwindow.h \
#     robotplayhand.h \
#     endingpanel.h \
#     countdown.h \
#     bgmcontrol.h \
#     loading.h

# FORMS    += gamepanel.ui \
#     scorepannel.ui \
#     buttongroup.ui
# RESOURCES +=
#     RC_ICONS = images/logo.ico
# # Default rules for deployment.
# qnx: target.path = /tmp/$${TARGET}/bin
# else: unix:!android: target.path = /opt/$${TARGET}/bin
# !isEmpty(target.path): INSTALLS += target



#-------------------------------------------------
#
# Project created by QtCreator 2024-11-28T10:19:56
#
#-------------------------------------------------

QT       += core gui multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AntiMaster
TEMPLATE = app


SOURCES += main.cpp\
        gamepanel.cpp \
    card.cpp \
    cardpanle.cpp \
    player.cpp \
    cards.cpp \
    robot.cpp \
    userplayer.cpp \
    gamecontrol.cpp \
    scorepannel.cpp \
    mybutton.cpp \
    buttongroup.cpp \
    playhand.cpp \
    strategy.cpp \
    robotgrablord.cpp \
    animationwindow.cpp \
    robotplayhand.cpp \
    endingpanel.cpp \
    countdown.cpp \
    bgmcontrol.cpp \
    loading.cpp

HEADERS  += gamepanel.h \
    card.h \
    cardpanle.h \
    player.h \
    cards.h \
    robot.h \
    userplayer.h \
    gamecontrol.h \
    scorepannel.h \
    mybutton.h \
    buttongroup.h \
    playhand.h \
    strategy.h \
    robotgrablord.h \
    animationwindow.h \
    robotplayhand.h \
    endingpanel.h \
    countdown.h \
    bgmcontrol.h \
    loading.h

FORMS    += gamepanel.ui \
    scorepannel.ui \
    buttongroup.ui

RESOURCES +=
RC_ICONS = images/logo.ico
