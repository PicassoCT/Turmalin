
#include "BrickFactory.h"

//enum brickType{LBRICK, TBRICK, SBRICK, ZBRICK, IBRICK,OBRICK};
#define ADD_CUBE(x,y,z)  CurrCube = new Kube(choosenColour,*new vec(KUBESIZE *x, KUBESIZE*y, KUBESIZE * z),*new vec(0.0f, 0.0f, 0.0f));\
                          kC->addCubeAt(*new vec(x,y,z), *CurrCube);

BrickFactory:: buildBrick(brickType type, Colour choosenColour, KubeCombination* kC){
  switch(type){
  case LBRICK: buildLBrick(choosenColour, KubeCombination* kC);break;
  case LBRICK: buildLBrick(choosenColour, KubeCombination* kC);break;
  
  default:
  
  }


}


 void BrickFactory::buildLBRICK(Colour choosenColour, KubeCombination* kC)
 {
    Kube *CurrCube = NULL;
 //L
 ADD_CUBE(0,0,0)
 ADD_CUBE(0,1,0)
  
 this->cubicStoRage.add(*nxtKube);
    for (int i=1; i<4; i++)
    {
     ADD_CUBE(0,0,i)
    }

 }

 void BrickFactory::buildTBRICK(Colour choosenColour, KubeCombination* kC)
 {
 //T
    Kube *CurrCube = NULL;
    ADD_CUBE(0 ,0 ,0)
    ADD_CUBE(0 ,1 ,0)
    ADD_CUBE(1 ,1 ,0)
    ADD_CUBE(-1,1 ,0)
    ADD_CUBE(0 ,-1,0)
    ADD_CUBE(0 ,-2,0)

 }

 void game::BrickFactory::buildSBRICK(Colour choosenColour)
 {
//  OO
// OO
   Kube *CurrCube = NULL;
    ADD_CUBE(0 ,0 ,0)
    ADD_CUBE(-1 ,1 ,0)
    ADD_CUBE(0 ,1 ,0)

    ADD_CUBE(1 ,0 ,0)
 }
 
 void game::BrickFactory::buildZBRICK(Colour choosenColour)
 { //  OO
   //   OO
 Kube *CurrCube = NULL;
    ADD_CUBE(0 ,0 ,0)
    ADD_CUBE(1 ,1 ,0)
    ADD_CUBE(0 ,1 ,0)
    ADD_CUBE(-1 ,0 ,0)
 }
 
 void game::BrickFactory::buildIBRICK(Colour choosenColour, )
 {
 //  OOOO
      Kube *CurrCube = NULL;
    
      for (int i= 0; i< 4; i++) {
        ADD_CUBE(0 ,2-i ,0)
      }
 }

 void game::BrickFactory::buildOBRICK(Colour choosenColour)
 {
  Kube *CurrCube = NULL;
    ADD_CUBE(0 ,0 ,0)
    ADD_CUBE(1 ,0 ,0)
    ADD_CUBE(0 ,0 ,-1)
    ADD_CUBE(1 ,0 ,-1)
    ADD_CUBE(0 ,1 ,0)
    ADD_CUBE(1 ,1 ,0)
    ADD_CUBE(0 ,1 ,-1)
    ADD_CUBE(1 ,1 ,-1)
 }
