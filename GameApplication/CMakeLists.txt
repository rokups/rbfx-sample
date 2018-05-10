# This is actual game application. Logic implemented in this target will not be accessible in the editor.

file (GLOB_RECURSE SOURCE_FILES *.h *.cpp)
add_executable(GameApplication WIN32 ${SOURCE_FILES})
target_link_libraries(GameApplication GameCore)
