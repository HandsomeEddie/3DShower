cmake_minimum_required(VERSION 3.16)
project(3DShower)

set(CMAKE_CXX_STANDARD 17)

# Find the Qt6 package
find_package(Qt6 REQUIRED COMPONENTS Core Quick)

# Add the executable
add_executable(3DShower main.cpp)

# Add the Qt modules for linking
target_link_libraries(3DShower PRIVATE Qt6::Core Qt6::Quick)

# Include QML resources
qt_add_resources(QML_RESOURCES qml.qrc)
target_sources(3DShower PRIVATE ${QML_RESOURCES})
