TEMPLATE = lib
VERSION = 1.0
TARGET = ddwarf-appmonitor

QT += qml

CONFIG += c++11
INCLUDEPATH +=

macx: QMAKE_SONAME_PREFIX = @executable_path/../Frameworks

isEmpty(PREFIX) {
    PREFIX = /usr/local/
}

unix:!android {
    target.path = $$(PREFIX)

    INSTALLS += target
}

HEADERS += \
    Field.h \
    FieldList.h
    

SOURCES += \
    Field.cpp \
    FieldList.cpp
    

OTHER_FILES += \
    LICENSE \
    README.md

include(../QtPvsStudio/pvs-studio.pri)
