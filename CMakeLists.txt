cmake_minimum_required(VERSION 3.21)
project(crygenui)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}")

set(wxWidgets_USE_FILE)
set(wxWidgets_LIBRARIES)

find_package(wxWidgets COMPONENTS core base REQUIRED)
include(${wxWidgets_USE_FILE})

set(SOURCE_FILES src/App.cpp src/App.hpp src/Frame.cpp src/Frame.hpp)

if(WIN32)
    set(SOURCE_FILES ${SOURCE_FILES} wxWidgetsTest.rc)
endif(WIN32)

add_executable(${CMAKE_PROJECT_NAME} ${SOURCE_FILES})
target_link_libraries(${CMAKE_PROJECT_NAME} ${wxWidgets_LIBRARIES})
