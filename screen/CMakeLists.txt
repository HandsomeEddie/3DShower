set(SCREEN_RESOURCES  
    qml/Main.qrc  
)  

set(SCREEN_FILES  
    qml/Main.qml
)  

add_library(ScreenModule STATIC ${SCREEN_FILES} ${SCREEN_RESOURCES})  

target_link_libraries(ScreenModule PRIVATE Qt6::Core Qt6::Quick Qt6::Qml)