cmake_minimum_required(VERSION 3.15)  
set(CMAKE_CXX_STANDARD 17)  

message(STATUS "Building Package ScreenModule")

set(target_name ScreenModule)

set(CMAKE_AUTOMOC ON)  
set(CMAKE_AUTORCC ON)  
set(CMAKE_AUTOUIC ON)  

find_package(Qt6 COMPONENTS Core Quick REQUIRED)  

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)

include_directories(${CMAKE_INSTALL_PREFIX}/include/DUtility)

set(SOURCE
    src/test.cpp
)  

set(HEADER
)

set(SCREEN_RESOURCES  
    qml/Main.qrc  
)  

set(SCREEN_FILES  
    qml/Main.qml
)  

add_library(ScreenModule SHARED ${SCREEN_FILES} ${SCREEN_RESOURCES} ${SOURCE} ${HEADER})  

message(STATUS ${CMAKE_CURRENT_SOURCE_DIR})

target_include_directories(${target_name}
    PUBLIC
        $<INSTALL_INTERFACE:include>
        $<BUILD_INTERFACE:${CMAKE_INSTALL_PREFIX}/include>  
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include
    PRIVATE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src
)

set(system_libs
)

set(internal_libs
    DUtility
)

set(external_libs
    Qt6::Core
    Qt6::Quick
    Qt6::Qml
)

target_link_libraries(${target_name}
    PUBLIC ${system_libs} ${internal_libs} ${external_libs}
)

install(DIRECTORY ${PROJECT_ROOT_DIR}/screen/qml/  
        DESTINATION ${PROJECT_ROOT_DIR}/install/screen/qml)  

install(TARGETS ScreenModule  
        DESTINATION ${PROJECT_ROOT_DIR}/install/lib)


        message(STATUS "DUtility include directory: ${CMAKE_INSTALL_PREFIX}/include/DUtility")  
message(STATUS "DUtility library: ${CMAKE_INSTALL_PREFIX}/lib/libDUtility.so")