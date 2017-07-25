#ifndef KUBECOMBINATION
#define KUBECOMBINATION
//<MOD>

#include "Kube.h"
#include "Brickfactory.h"

#define INDX_SHFT(indx,Max) (indx + (Max/2))
#define LOC_INDX(x,y,z) localIndex.x=x-Max/2;localIndex.y=y-Max/2,localIndex.z=z-Max/2;

#define ARR_ORG_SIZE 6


// A Kube combination consists of at least one Kube, the first to be initialised, and to be stored in the vector<Kube>
//Modell
enum brickType {LBRICK, TBRICK, SBRICK, ZBRICK, IBRICK,OBRICK};

namespace game
{

class KubeCombination: public dynent
{
public:

    /** Default constructor */
    KubeCombination(vec Pivot,  Colour colOfCube, brickType shapeOfCube);
    /** Default destructor */
    virtual ~KubeCombination();
    /** Copy constructor*/
    KubeCombination(const KubeCombination& other);

    void SetRotation( vec Rotation);
    void SetPosition( vec Position);
    void SetColour( vec rgbCol);
    vec GetHighestPoint();
    void addCubeAt(vec index, Kube* toAdd);
    void disolveCube(Kube * toDisolve);
    vector<Kube*> getCubesWithinCube(vec upperLim, vec lower Lim);

    bool testMoveColission( KubeCombination other, vec Move);
    bool testRotateColission( KubeCombination other, vec Rotate);

    //<CollisionRelated>
    bool doesPlayerCollide(fpsent *d) { return false};
    bool firstCubeAdded = false;

private:
    vec Pivot;
    Kube* cubeOrgPositions[ARR_ORG_SIZE][ARR_ORG_SIZE][ARR_ORG_SIZE];
    void updateCubeRotation(Kube* kube);
    void upateCubePosition(Kube* kube);
    vec getKubeIndex(Kube* kube);

    //TransmitCombinationToCompound
    vector<Kube*>   internalCubes();
    //</CollisionRelated>
};
}
//</MOD>

#endif KUBECOMBINATION
