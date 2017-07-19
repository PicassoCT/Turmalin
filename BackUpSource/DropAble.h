
#ifndef DROPABLE
#define DROPABLE

#include "KubeCombination.h"


namespace game
{

  class DropAble {
  public:
  DropAble();
  DisolveDropAble();
  
  testTurn();
  startTurn();
  resetTurn();
  
  testMove();
  startMove();
  resetMove();
  
  animate(float frames);
  removeLine();
  
  private:
    KubeCombination* kC;
    vec orgTurnAngleRad;
    vec targTurnAngleRad;
    float turnProgress = 0.0;

    vec orgPivotPosition;
    vec targPivotPosition;
    float moveProgress = 0.0;
    bool playerControlled = true;





  };

}
#endif //DROPABLE
