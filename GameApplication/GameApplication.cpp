#include "GameApplication.h"
#include "GameCore.h"

AwesomeGameApplication::AwesomeGameApplication(Context* context)
    : Application(context)
{
}

void AwesomeGameApplication::Setup()
{
    engineParameters_[EP_FULL_SCREEN] = false;
    engineParameters_[EP_WINDOW_HEIGHT] = 600;
    engineParameters_[EP_WINDOW_WIDTH] = 800;
    engineParameters_[EP_RESOURCE_PREFIX_PATHS] = ";..";
}

void AwesomeGameApplication::Start()
{
    // Import components defined in the GameCore library.
    RegisterCoreLibrary(context_);
    GetInput()->SetMouseVisible(true);
}

void AwesomeGameApplication::Stop()
{
    // There is no point in unregistering GameCore components as application is exiting.
}

URHO3D_DEFINE_APPLICATION_MAIN(AwesomeGameApplication);
