
#include "KubeCombination.h"
#include "BrickFactory.h"

KubeCombination::KubeCombination(vec Pivot,  Colour colOfCube, brickType shapeOfCube) {
 	
 
 };
    
    void KubeCombination::SetRotation( vec Rotation);
    void KubeCombination::SetPosition( vec Position);
    void KubeCombination::SetColour( vec rgbCol);
    vec KubeCombination::GetHighestPoint();
    void KubeCombination::disolveCube(Kube * toDisolve);
    vector<Kube*> KubeCombination::getCubesWithinCube(vec upperLim, vec lower Lim);    
    
    bool KubeCombination::testMoveColission( KubeCombination other, vec Move);
    bool KubeCombination::testRotateColission( KubeCombination other, vec Rotate);
   
    //<CollisionRelated>
    bool KubeCombination::doesPlayerCollide(fpsent *d) { return false};

  //  vec Pivot;
  // Kube* arrayOrgPositions[8][8][8];
    void KubeCombination::updateCubeRotation();
    void KubeCombination::upateCubePosition();

    //TransmitCombinationToCompound
    vector<Kube*>   internalCubes;



game::KubeCombination::~KubeCombination()
{
    //dtor
}

game::KubeCombination::KubeCombination(const KubeCombination& other)
{
    //copy ctor
}
