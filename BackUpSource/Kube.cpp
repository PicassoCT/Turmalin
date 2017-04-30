
#include "Kube.h"
//#include "game.h"




//<MOD>
#define ROTATIONSPEED 0.42f
#define DROPSPEED 9.81f


Kube::Kube(Colour ExpectedColour, vec DirAction, vec OffSetToOrigin)
{
    //ctor

    //DefineKubeColour
   CubularColour=ExpectedColour;
    //DefineKubeStartOrientation

    vec *f3ptr= new vec(0.0f,0.0f,0.0f);


    Kube::SetDirAction(f3ptr);

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
