cmake_minimum_required(VERSION 3.16)

project(Dyxi1 VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Core Quick QuickControls2)

qt_standard_project_setup(REQUIRES 6.5)

qt_add_executable(appDyxi1
    main.cpp
)

qt_add_qml_module(appDyxi1
    URI Dyxi1
    QML_FILES
        Main.qml
        RESOURCES images.qrc
        RESOURCES lib.qrc
        RESOURCES javascript.qrc
        QML_FILES
        QML_FILES Lib/Board.qml
        QML_FILES Lib/Pages/ScrachPad.qml
        QML_FILES Lib/Pages/Dashboard.qml
        QML_FILES Lib/Pages/Welcome.qml
        QML_FILES Lib/Pages/HomeForm.qml
        QML_FILES Lib/Snippets/Drawer.qml
        QML_FILES Lib/Pages/Login.qml
        QML_FILES Test.qml
        QML_FILES Ano.qml
        QML_FILES Lib/Buttons/PulseButton.qml
        RESOURCES Welcome.png
        SOURCES Lib/src/LoadConfig.h Lib/src/LoadConfig.cpp
        SOURCES
        SOURCES
        SOURCES Lib/src/Auth.h Lib/src/Auth.cpp
        SOURCES Lib/src/core/settings.h Lib/src/core/settings.cpp
        SOURCES Lib/src/core/errorreporter.h Lib/src/core/errorreporter.cpp
        SOURCES Lib/src/core/AllString.h

)

qt_add_resources(appDyxi1
    "assets"
     PREFIX "/"
     FILES "Artboard 1.png"
     FILES "Welcome.png"
 )

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appDyxi1 PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appDyxi1
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appDyxi1
    PRIVATE Qt6::Quick
)

include(GNUInstallDirs)
install(TARGETS appDyxi1
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
