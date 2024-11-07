cmake_minimum_required(VERSION 3.15)  
set(CMAKE_CXX_STANDARD 17)  

message(STATUS "Building Package DUtility")

set(target_name DUtility)

set(CMAKE_AUTOMOC ON)  
set(CMAKE_AUTORCC ON)  
set(CMAKE_AUTOUIC ON)  

find_package(Qt6 COMPONENTS Core Quick REQUIRED)  

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)

set(SOURCE  
    src/SystemEnv.cpp  
)  

set(HEADER
    include/export_api.h
    include/SystemEnv.h
)

add_library(${target_name} SHARED ${SOURCE} ${HEADER})  

target_include_directories(${target_name}
    PUBLIC
        $<INSTALL_INTERFACE:include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include
    PRIVATE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src
)

set(system_libs
)

set(internal_libs
)

set(external_libs
)

target_link_libraries(${target_name}
    PUBLIC ${system_libs} ${internal_libs} ${external_libs}
)

install(TARGETS ${target_name}  
        LIBRARY DESTINATION lib  
        ARCHIVE DESTINATION lib)  

install(DIRECTORY include/  
        DESTINATION ${CMAKE_INSTALL_PREFIX}/include/${target_name})