# GameCore is a library which implements various components that are used both in the game and in the editor.

file (GLOB_RECURSE SOURCE_FILES *.h *.cpp)
add_library(GameCore STATIC ${SOURCE_FILES})
target_link_libraries(GameCore Urho3D)
target_include_directories(GameCore PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
