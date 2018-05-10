#include <Urho3D/Engine/PluginApplication.h>
#include "../GameCore/GameCore.h"


using namespace Urho3D;


class EditorPlugin : public PluginApplication
{
    URHO3D_OBJECT(EditorPlugin, PluginApplication);
public:
    explicit EditorPlugin(Context* context) : PluginApplication(context) { }

    void OnLoad() override
    {
        // Called when editor is loading plugin. Do all plugin setup here.
        RegisterCoreLibrary(context_);
    }

    void OnUnload() override
    {
        // Editor is exiting or plugin is being reloaded. Undo all the changes performed in OnLoad(). After this method
        // exits this library will be unloaded from memory. Failure to clean editor state from any objects provided by
        // this library will result in a crash.
        UnregisterCoreLibrary(context_);
    }
};

// Define entry point of the plugin.
URHO3D_DEFINE_PLUGIN_MAIN(EditorPlugin);
