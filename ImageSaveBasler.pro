TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp


INCLUDEPATH += /opt/pylon/include
LIBS += \
  -L/opt/pylon/lib \
  -lpylonbase-6.2.0 \
  -lpylonutility-6.2.0 \
  -lGenApi_gcc_v3_1_Basler_pylon \
  -lGCBase_gcc_v3_1_Basler_pylon \
  -lLog_gcc_v3_1_Basler_pylon \
  -lMathParser_gcc_v3_1_Basler_pylon \
  -lXmlParser_gcc_v3_1_Basler_pylon \
  -lNodeMapData_gcc_v3_1_Basler_pylon
