
#ifndef COMPOUND
#define COMPOUND
//<MOD>
#define GRID_SIZE 6
#define GRID_HEIGHT 12


#include "KubeCombination.h"
//#include "flagpole.h"
#include "flagpolesita.h"


//Compound is a static Singleton in Turmalin.. there is always just one compound
//Do you hear that sound? As if a million objectorientated people screamed out in unison and then fell silent

class KubeCombination;

class Compound
{
public:
    struct Kube* Grid[GRID_SIZE][GRID_SIZE][GRID_HEIGHT];

    bool  update(int currtime, int elapsed);

    /** Default constructor */
    Compound();
    Compound(vec & position);

    /** Default destructor */
     ~Compound();

    /** Copy constructor
     *  \param other Object to copy from
     */

    Compound(const Compound & other);

    //Insert Kube into Grid
    void insertKube( Kube & other, int x, int y, int z)
    {
        this->Grid[x][y][z]= &other;
    }

    bool checkCompletedLayers();

    void setGameOver();

    //assigns points to the flagpole team
    void removeLayers(const int nr);
    //the Compound holds the References to the CurrKubeKombination

    KubeCombination * CurrKubeKombination;

    vec compoundPosition;
//    FlagPole flagPole;
    FlagPoleSita * FlagPoleSitaPtr;
protected:
private:

};
//</MOD>


#endif COMPOUND
