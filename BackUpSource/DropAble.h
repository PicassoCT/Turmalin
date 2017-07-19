
#ifndef DROPABLE
#define DROPABLE

#include "KubeCombination.h"


namespace game
{

  class DropAble {
  public:
  DropAble();
  DisolveDropAble();
  
  bool testTurn(vec Turn);
  startTurn(vec Turn);
  bool resetTurn();
  
  bool testMove(vec Move);
  startMove(vec Move);
  bool resetMove();
  
  animate(float frames);
  removeLine(vec upperPivotBound, vec lowerPivotBound);
  
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
