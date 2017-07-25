
#ifndef DROPABLE
#define DROPABLE

#include "kubecombination.h"


namespace game
{

  class DropAble {
  public:

  //gets a Array of occupied KubeQuads by the
  bool[ARR_ORG_SIZE][ARR_ORG_SIZE][ARR_ORG_SIZE] getDropAbleProfile();

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
