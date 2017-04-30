
#include "Compound.h"



#define GRID_SIZE 6
#define GRID_HEIGHT 12

//default Constructor of COMPOUND
Compound::Compound(vec & position)
{
    CurrKubeKombination=NULL;
    Compound::compoundPosition= position;

    logoutf("Compound created");
}
Compound::Compound()
{
    CurrKubeKombination=NULL;
    Compound::compoundPosition = {0.0f,0.0f,0.0f};

    logoutf("Compound created");
}

bool Compound::update(int currtime, int elapsed)
{
    //success
return true;
}
