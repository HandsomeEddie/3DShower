cmake_minimum_required(VERSION 3.15)  

project(3DShower LANGUAGES CXX)  

set(CMAKE_CXX_STANDARD 17)  
set(CMAKE_CXX_STANDARD_REQUIRED ON)  
set(CMAKE_CXX_EXTENSIONS OFF)  

set(CMAKE_AUTOMOC ON)  
set(CMAKE_AUTORCC ON)  
set(CMAKE_AUTOUIC ON)  

find_package(Qt6 COMPONENTS Core Quick REQUIRED)  

set(PROJECT_ROOT_DIR ${CMAKE_SOURCE_DIR})
set(CMAKE_INSTALL_PREFIX ${PROJECT_ROOT_DIR}/install)

set(SOURCE
    main.cpp  
)  

add_subdirectory(lib)  
add_subdirectory(screen)  

add_executable(3DShower ${SOURCE} screen/qml/Main.qrc)

target_link_libraries(3DShower PRIVATE Qt6::Core Qt6::Quick ScreenModule)