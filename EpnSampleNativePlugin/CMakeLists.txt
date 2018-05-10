# This is editor plugin target. Editor will load it automatically based on name of shared library (it must start with
# "Epn", case insensitive) and load content provided by the plugin. If rebuild this target while editor is running then
# editor will unload old version and load new version automatically. This may incur delays as scene which is being
# edited will be serialized and unserialized.

file (GLOB_RECURSE SOURCE_FILES *.h *.cpp)
add_library(EpnSampleNativePlugin SHARED ${SOURCE_FILES})
target_link_libraries(EpnSampleNativePlugin GameCore)
