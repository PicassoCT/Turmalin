
#include "KubeCombination.h"

KubeCombination::KubeCombination(vec Pivot,  Colour colOfCube, brickType shapeOfBrick) {
	
	BrickFactory brickFactory(shapeOfBrick, colOfCube, this);
	
 	this.o = Pivot;
	
	
 
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
    void KubeCombination::updateCubesRotation( ){
		for (x=0, x < ARR_ORG_SIZE; x++){
		for (y=0, y < ARR_ORG_SIZE; y++){
		for (z=0, z < ARR_ORG_SIZE; z++){
			if (cubeOrgPositions[x][y][z] != NULL) {
				cubeOrgPositions[x][y][z].yaw = yaw;
				cubeOrgPositions[x][y][z].pitch = pitch;
				cubeOrgPositions[x][y][z].roll = roll;
				
			}
		
		
	}
	
	
    void KubeCombination::upateCubesPosition( ){
		vec localIndex;
		for (x=0, x < ARR_ORG_SIZE; x++){
		for (y=0, y < ARR_ORG_SIZE; y++){
		for (z=0, z < ARR_ORG_SIZE; z++){
			if (cubeOrgPositions[x][y][z] != NULL) {
				LOC_INDX(x,y,z)	
				localIndex *= KUBESIZE;
				//Rotate around center
				localIndex = localIndex.rotate_around_x(yaw);
				localIndex = localIndex.rotate_around_y(pitch);
				localIndex = localIndex.rotate_around_z(roll);
				
				//Add KubeCombinations Position
				localIndex += o;
				cubeOrgPositions[x][y][z]->SetPosition(localIndex);
			}
		}
		}
		}
		
		
	};
	
	//retrieves the index of a cub in a zero-centric +- coordinate system, with the pivot at zero
    vec KubeCombination::getKubeIndex(Kube* kube){
		vec localIndex;
		
		for (x=0, x < ARR_ORG_SIZE; x++){
		for (y=0, y < ARR_ORG_SIZE; y++){
		for (z=0, z < ARR_ORG_SIZE; z++){
				if (cubeOrgPositions[x][y][z] != NULL && cubeOrgPositions[x][y][z] == kube){
					LOC_INDX(x,y,z)
					return localIndex;
				}
		}
		}
		}
		return NULL;
	}
    //TransmitCombinationToCompound
    vector<Kube*>   internalCubes;

	//Adds a Cube - taking the first Cube as Pivot
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
		Pivot = index;
		internalCubes.push_back(kubeToAdd);
		cubeOrgPositions[INDX_SHFT(ind_x,ARR_ORG_SIZE)][INDX_SHFT(ind_y,ARR_ORG_SIZE)][INDX_SHFT(ind_z,ARR_ORG_SIZE)] = kubeToAdd;

	}
 		upateCubesPosition();
		updateCubesRotation();
 
 }

game::KubeCombination::~KubeCombination()
{
    //dtor
}

game::KubeCombination::KubeCombination(const KubeCombination& other)
{
    //copy ctor
}
