
# Configure engine build. Persistent options here.
set (URHO3D_ENABLE_ALL ON CACHE BOOLEAN "" FORCE)
set (URHO3D_SAMPLES OFF CACHE BOOLEAN "" FORCE)

# Include engine in the build
add_subdirectory(Urho3D)
