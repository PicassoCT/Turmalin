#ifndef TURMALIN
#define TURMALIN

#include "flagPoleSitta.h"
#include "KubeCombination.h"


class Turmalin{

Turmalin (DropAble* scenario[10][10][32]);
DropAble* playField[10][10][32];

updateFlagPosition();
  
checkPlayerOnFlag();

dropNewStone();

checkForFullSquares();

checkEndGameCondition();
  
DropAble* [10][10][32] exportPlayingField();

};

#endif //TURMALIN
