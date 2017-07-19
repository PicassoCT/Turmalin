
#include "Kube.h"
//#include "game.h"

//<MOD>
#define ROTATIONSPEED 0.42f
#define DROPSPEED 9.81f


Kube::Kube(Colour ExpectedColour, vec orgPos, vec orgRotation)
{
    //ctor

    //DefineKubeColour
   CubularColour=ExpectedColour;
    //DefineKubeStartOrientation

    SetPosition(orgPos);
    SetRotation(orgRotation);
}

Kube::SetPosition(vec Position) {
    this.Position = Position;
}

Kube::SetDirection(vec Orientation) {
    yaw = Orientation.x;
    roll = Orientation.y;
    pitch = Orientation.z;
}

Kube::~Kube()
{
    //dtor
}

Kube::Kube(const Kube& other)
{
    //copy ctor
}
//</MOD>
