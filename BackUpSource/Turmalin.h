#ifndef TURMALIN
#define TURMALIN

#include "flagPoleSitta.h"
#include "KubeCombination.h"


class Turmalin{
public:
  
Turmalin (DropAble* scenario[10][10][32]);
DropAble* playField[10][10][32];

updateFlagPosition();
  
checkPlayerOnFlag();
  
exchangeFlagPoleSitta();

dropNewStone();

checkForFullSquares();

checkEndGameCondition();
  
 private:
  DropAble* [10][10][32] exportPlayingField()
  
  

};

#endif //TURMALIN
