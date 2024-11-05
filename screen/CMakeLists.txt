set(SCREEN_RESOURCES  
    Main.qrc  
)  

set(SCREEN_FILES  
    Main.qml
)  

add_library(ScreenModule STATIC ${SCREEN_FILES} ${SCREEN_RESOURCES})  

target_link_libraries(ScreenModule PRIVATE Qt6::Core Qt6::Quick Qt6::Qml)