using Urho3DNet;
using ImGuiNet;

// Name of class inheriting PluginApplication and enclosing namespace must match file name of the library.
namespace EpmSampleManagedPlugin
{
    // Every plugin must contain a class which inherits form PluginApplication.
    public class EpmSampleManagedPlugin : PluginApplication
    {
        public EpmSampleManagedPlugin(Context context) : base(context) { }

        // Plugin is being loaded. Called immediately after PluginMain(). Do plugin setup here.
        public override void Load()
        {
            SubscribeToEvent("EditorApplicationMenu", args =>
            {
                if (ImGui.BeginMenu("Managed Plugin Example"))
                {
                    if (ImGui.MenuItem("Greetings!"))
                    {
                        // Log.Write(Log.LogInfo, "Managed editor plugin says hello!");
                    }
                    ImGui.EndMenu();
                }
            });
        }

        // Plugin is being unloaded. Unregister factories, unsubscribe from events, and undo all modifications to editor
        // state. When this call returns this assembly will be unloaded from memory. Failure to comply with this
        // requirement will lead to crashes!
        public override void Unload()
        {
            UnsubscribeFromAllEvents();
        }

        // Main entry point of plugin. Called on plugin load. Most of the time this method should only return a new
        // instance of PluginApplication subclass.
        public static EpmSampleManagedPlugin PluginMain(Context context)
        {
            return new EpmSampleManagedPlugin(context);
        }
    }
}
