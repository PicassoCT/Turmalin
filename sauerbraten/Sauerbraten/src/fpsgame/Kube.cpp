//#include "game.h"
#include "Kube.h"

//<MOD>
#define ROTATIONSPEED 0.42f
#define DROPSPEED 9.81f



Kube::Kube(Colour ExpectedColour, vec DirAction, vec OffSetToOrigin)
{
    //ctor

    //DefineKubeColour
   CubularColour=ExpectedColour;
    //DefineKubeStartOrientation

    vec *f3ptr= new  vec(0.0f,0.0f,0.0f);
  // Kubemodel =  new md3("cube");
   //TODO MD3 config
  //  KubeModel->load("packages/models/hypercube/cube.md3");

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
