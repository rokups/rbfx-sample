#pragma once


#include <Urho3D/Core/Timer.h>
#include <Urho3D/Scene/LogicComponent.h>
#include <Urho3D/Scene/Node.h>


using namespace Urho3D;


class MyAwesomeComponent : public LogicComponent
{
    URHO3D_OBJECT(MyAwesomeComponent, LogicComponent);
public:
    explicit MyAwesomeComponent(Context* context);

    void Update(float timeStep) override;
};
