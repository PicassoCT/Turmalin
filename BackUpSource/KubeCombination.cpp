
#include "KubeCombination.h"

KubeCombination::KubeCombination(vec Pivot,  Colour colOfCube, brickType shapeOfBrick) {
 	
 
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
    void KubeCombination::updateCubeRotation( Kube* kube);
    void KubeCombination::upateCubePosition( Kube* kube);

    //TransmitCombinationToCompound
    vector<Kube*>   internalCubes;

 void KubeCombination::addCubeAt(vec index, Kube* kubeToAdd) {
	int ind_x,ind_y,ind_z;
	
	ind_x = (int) index.x;
	ind_y = (int) index.y;
	ind_z = (int) index.z;
	
	if (firstCubeAdded == false){
		internalCubes.push_back(kubeToAdd);
		cubeOrgPositions[INDX_SHFT(ind_x,ARR_ORG_SIZE)][INDX_SHFT(ind_y,ARR_ORG_SIZE)][INDX_SHFT(ind_z,ARR_ORG_SIZE)] = kubeToAdd;

	}
	else {
		firstCubeAdded= false;
		internalCubes.push_back(kubeToAdd);
		cubeOrgPositions[INDX_SHFT(ind_x,ARR_ORG_SIZE)][INDX_SHFT(ind_y,ARR_ORG_SIZE)][INDX_SHFT(ind_z,ARR_ORG_SIZE)] = kubeToAdd;

	}
 		updateCubePosition(kubeToAdd);
		updateCubeRotation(kubeToAdd);
 
 }

game::KubeCombination::~KubeCombination()
{
    //dtor
}

game::KubeCombination::KubeCombination(const KubeCombination& other)
{
    //copy ctor
}
