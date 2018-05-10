#include "MyAwesomeComponent.h"


MyAwesomeComponent::MyAwesomeComponent(Context* context)
    : LogicComponent(context)
{
    SetUpdateEventMask(USE_UPDATE);
}

void MyAwesomeComponent::Update(float timeStep)
{
    float elapsed = GetTime()->GetElapsedTime() * 0.01f;
    node_->Translate({Sin(elapsed), 0, Cos(elapsed)});
}
