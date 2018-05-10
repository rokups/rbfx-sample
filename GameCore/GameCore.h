#pragma once

#include <Urho3D/Core/Context.h>
#include "MyAwesomeComponent.h"

#define FACTORY_LIST MyAwesomeComponent

inline void RegisterCoreLibrary(Urho3D::Context* context)
{
    // Register components with the engine. This function will be called from game application on start or from editor
    // on loading editor plugin.
    context->RegisterFactory<FACTORY_LIST>("User Components");
}

inline void UnregisterCoreLibrary(Urho3D::Context* context)
{
    // Unregister components with the engine. This function will be called from game application on start or from editor
    // on plugin reload.
    context->RemoveFactory<FACTORY_LIST>("User Components");
}

#undef FACTORY_LIST
