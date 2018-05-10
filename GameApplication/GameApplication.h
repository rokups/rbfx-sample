#include <Urho3D/Urho3DAll.h>
#include <Urho3D/Engine/PluginApplication.h>


using namespace Urho3D;


class URHO3D_EXPORT_API AwesomeGameApplication : public Application
{
    URHO3D_OBJECT(AwesomeGameApplication, Application);
public:
    explicit AwesomeGameApplication(Context* context);
    void Setup() override;
    void Start() override;
    void Stop() override;
};
