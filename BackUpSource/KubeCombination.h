#ifndef KUBULARBELLS
#define KUBULARBELLS
//<MOD>

#include "Kube.h"




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
    void disolveCube(Kube * toDisolve);
    vector<Kube*> getCubesWithinCube(vec upperLim, vec lower Lim);    
    
    bool testMoveColission( KubeCombination other, vec Move);
    bool testRotateColission( KubeCombination other, vec Rotate);
   
    //<CollisionRelated>
    bool doesPlayerCollide(fpsent *d) { return false};

private:
    vec Pivot;
    Kube* arrayOrgPositions[8][8][8];
    void updateCubeRotation();
    void upateCubePosition();

    //TransmitCombinationToCompound
    vector<Kube*>   internalCubes();



    //</CollisionRelated>


};
}
//</MOD>

#endif KUBULARBELLS
