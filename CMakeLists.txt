cmake_minimum_required(VERSION 3.5)

project(Robotapp VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC OFF)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Core Widgets REQUIRED)



file(GLOB HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/include/*.h)
file(GLOB SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)

source_group("Header Files" FILES ${HEADER})
source_group("Source Files" FILES ${SOURCES})

set(UI ${CMAKE_CURRENT_SOURCE_DIR}/mainwindow.ui
    ${CMAKE_CURRENT_SOURCE_DIR}/helloscreen.ui
    ${CMAKE_CURRENT_SOURCE_DIR}/loginscreen.ui
    ${CMAKE_CURRENT_SOURCE_DIR}/maincontrolapp.ui)

qt5_wrap_ui(UI_HEADERS
    ${UI})

#qt5_add_resources(RCC_SOURCES ${RESOURCES})

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(Robotapp
    ${HEADERS}
    ${SOURCES}
    ${UI_HEADERS}
    )

target_link_libraries(Robotapp PRIVATE
    Qt${QT_VERSION_MAJOR}::Widgets
    Qt${QT_VERSION_MAJOR}::Core)

#target_link_libraries(Robotapp PRIVATE
#    Qt5::Widgets
#    Qt5::Core
#    )

set_target_properties(Robotapp PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

install(TARGETS Robotapp
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

