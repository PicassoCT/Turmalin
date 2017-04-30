
#include "KubeCombination.h"





//Function calculates the global position of a cube..
vec game::KubeCombination::calcWorldKubePos( int KubeNumber)
{


   vec temp= (this->cubicStoRage[KubeNumber]).GetOffSetToOrigin();
   temp=temp.mul(KUBESIZE);
   //Get Local point

   //apply rotation of fatherly coord-system
   temp.rotate(1.0,1.0,this->cubicStoRage[KubeNumber].GetDirAction());

  //apply translation of father to global zero

   return temp.add(this->currPivotPosition);
}



        //update RoationToKubes
		void game::KubeCombination::upDateRotationToKube(vec fatherDirAction)
		{
		    for (int i=0;i < cubicStoRage.alen;i++)
                    this->cubicStoRage[i].SetDirAction(&fatherDirAction);


		}

		//finds the Highest Point relative to the Kubes Origin
        vec game::KubeCombination::findHighestPoint(KubeCombination self)
        {int highestKubeFound=-1;
         float highestYFound=0;
              for (int i=0;i<cubicStoRage.alen;i++)
                     {
                         vec tempVec= this->calcWorldKubePos( i);
                         if (tempVec.y > highestYFound)
                         {
                             highestKubeFound=i;
                             highestYFound=tempVec.y;

                         }

                     }
        if (highestKubeFound!=-1)
            return (GetKubeWorldPos(highestKubeFound));
                //!Placeholder
        else return *new vec(-1.0f,-1.0f,-1.0f);
        }
		//rotationalMatrice+

        //applyFrame -> This function checks if a rotation/movement is In Progress, and updates it if need, it applies the gravity
            // finally it checks for a collision transfers the Kube to the Compound

        static const game::KubeCombination  *  currPtr=NULL;


        void game::KubeCombination:: upDateRotationToKube(vec newRotation);

		 //rotateCombination -> Locks the combination -till Rotation was applied was once Applied
		void game::KubeCombination::rotateCombination(vec *newRotation)
		{
		    if (rotationInProgress==false)
            {
            rotationInProgress=true;
            rotationPercentage=0.001;
            this->turnTowards=*newRotation;
            this->currDirAction=DirAction.lerp(DirAction,turnTowards,rotationPercentage);
             //!<TODO>UPDATE ROTATION TO CUBE
            }

		}

		 //continueRotationAllreadyBegun
            //returns true if rotation is finnished
		 bool game::KubeCombination::applyAllreadyBegunRotation()
		 {  rotationPercentage+=ROTPERC_PER_FRAME;
           this->currDirAction=DirAction.lerp(DirAction,turnTowards,rotationPercentage);
		 return true;
		 }

		 //CheckIfRotationIsActuallyPlausible
		 bool game::KubeCombination::checkRotationPlausible(vec *rotation2Check)
		 {
		 //ghostKube

		 //align to grid down


		 //check for collission with KubeCompound

		 //
		return true; }
		 // Check if Movement is plausible and doesent lead to collission
		 bool game::KubeCombination::checkMovementPlausible(vec *m)
		 {

		 return true;}

		 //MoveCombination
		 void game::KubeCombination::moveCombination(vec *m)
		 {

		 }


		 //ApplyGravitas
		 void game::KubeCombination::applyGravitation()
		 {

		 }
		 //Moves the Combination towardsTheGround

		 //TransmitCombinationToCompound once we have a Collission

		extern vector<Kube> game::KubeCombination::transMitInternalKubes()
		 {
         return this->cubicStoRage;
		 }



         //<Colission>
       bool game::KubeCombination::doesPlayerCollide(fpsent *d)
       {
           //
      return false; }



         //</Colission>




//enum brickType{LBRICK, TBRICK, SBRICK, ZBRICK, IBRICK,OBRICK};
 void game::KubeCombination::buildLBRICK( Colour choosenColour){
 //L

 Kube *OriginKube= new Kube(choosenColour,*new vec(0.0f,0.0f,0.0f),*new vec(0.0f,0.0f,0.0f));
 this->cubicStoRage.add(*OriginKube);
 Kube *nxtKube= new Kube(choosenColour,*new vec(0.0f,0.0f,0.0f),*new vec(0.0f,1.0f,0.0f));
 this->cubicStoRage.add(*nxtKube);
	for (int i=1;i<4;i++)
	{
	 Kube *nxtKube= new Kube(choosenColour,*new vec(0.0f,0.0f,0.0f),*new vec(0.0f,0.0f,i*1.0f));
	 this->cubicStoRage.add(*nxtKube);
	}

 }

 void game::KubeCombination::buildTBRICK(Colour choosenColour)
 {
Kube *OriginKube= new Kube(choosenColour,*new vec(0.0f,0.0f,0.0f),*new vec(0.0f,0.0f,0.0f));
 this->cubicStoRage.add(*OriginKube);
Kube *anxtKube= new Kube(choosenColour,*new vec(0.0f,0.0f,0.0f),*new vec(0.0f,1.0f,0.0f));
 this->cubicStoRage.add(*anxtKube);
Kube *bnxtKube= new Kube(choosenColour,*new vec(0.0f,0.0f,0.0f),*new vec(1.0f,1.0f,0.0f));
 this->cubicStoRage.add(*bnxtKube);
Kube *cnxtKube= new Kube(choosenColour,*new vec(0.0f,0.0f,0.0f),*new vec(-1.0f,1.0f,0.0f));
 this->cubicStoRage.add(*cnxtKube);
 Kube *dnxtKube= new Kube(choosenColour,*new vec(0.0f,0.0f,0.0f),*new vec(0.0f,-1.0f,0.0f));
 this->cubicStoRage.add(*dnxtKube);
 Kube *enxtKube= new Kube(choosenColour,*new vec(0.0f,0.0f,0.0f),*new vec(0.0f,-2.0f,0.0f));
 this->cubicStoRage.add(*enxtKube);
 }

 void game::KubeCombination::buildSBRICK(Colour choosenColour)
 {
//  OO
// OO
Kube* OriginKube= new Kube(choosenColour,*new vec(0.0f,0.0f,0.0f),*new vec(0.0f,0.0f,0.0f));
 this->cubicStoRage.add(*OriginKube);
Kube *A= new Kube(choosenColour,*new vec(0.0f,0.0f,0.0f),*new vec(0.0f,1.0f,0.0f));
 this->cubicStoRage.add(*A);
Kube *B= new Kube(choosenColour,*new vec(0.0f,0.0f,0.0f),*new vec(0.0f,1.0f,1.0f));
 this->cubicStoRage.add(*B);
Kube *C= new Kube(choosenColour,*new vec(0.0f,0.0f,0.0f),*new vec(0.0f,-1.0f,0.0f));
 this->cubicStoRage.add(*C);
Kube *E= new Kube(choosenColour,*new vec(0.0f,0.0f,0.0f),*new vec(0.0f,-1.0f,0.0f));
 this->cubicStoRage.add(*E);




 }
 void game::KubeCombination::buildZBRICK(Colour choosenColour)
 { //  OO
   //   OO

Kube *OriginKube= new Kube(choosenColour,*new vec(0.0f,0.0f,0.0f),*new vec(0.0f,0.0f,0.0f));
 this->cubicStoRage.add(*OriginKube);
Kube *anxtKube= new Kube(choosenColour,*new vec(0.0f,0.0f,0.0f),*new vec(0.0f,1.0f,0.0f));
 this->cubicStoRage.add(*anxtKube);
Kube *bnxtKube= new Kube(choosenColour,*new vec(0.0f,0.0f,0.0f),*new vec(-1.0f,1.0f,0.0f));
 this->cubicStoRage.add(*bnxtKube);
 Kube *enxtKube= new Kube(choosenColour,*new vec(0.0f,0.0f,0.0f),*new vec(-1.0f,0.0f,0.0f));
 this->cubicStoRage.add(*enxtKube);


 }
 void game::KubeCombination::buildIBRICK(Colour choosenColour)
 {
     //  OOOO

Kube *OriginKube= new Kube(choosenColour,*new vec(0.0f,0.0f,0.0f),*new vec(0.0f,0.0f,0.0f));
 this->cubicStoRage.add(*OriginKube);
Kube *anxtKube= new Kube(choosenColour,*new vec(0.0f,0.0f,0.0f),*new vec(1.0f,0.0f,0.0f));
 this->cubicStoRage.add(*anxtKube);
Kube *bnxtKube= new Kube(choosenColour,*new vec(0.0f,0.0f,0.0f),*new vec(2.0f,0.0f,0.0f));
 this->cubicStoRage.add(*bnxtKube);
Kube *cnxtKube= new Kube(choosenColour,*new vec(0.0f,0.0f,0.0f),*new vec(-1.0f,0.0f,0.0f));
 this->cubicStoRage.add(*cnxtKube);
 Kube *dnxtKube= new Kube(choosenColour,*new vec(0.0f,0.0f,0.0f),*new vec(-2.0f,0.0f,0.0f));
 this->cubicStoRage.add(*dnxtKube);
 }

 void game::KubeCombination::buildOBRICK(Colour choosenColour)
 {

Kube *OriginKube= new Kube(choosenColour,*new vec(0.0f,0.0f,0.0f),*new vec(0.0f,0.0f,0.0f));
 this->cubicStoRage.add(*OriginKube);
Kube *anxtKube= new Kube(choosenColour,*new vec(0.0f,0.0f,0.0f),*new vec(1.0f,0.0f,0.0f));
 this->cubicStoRage.add(*anxtKube);
Kube *bnxtKube= new Kube(choosenColour,*new vec(0.0f,0.0f,0.0f),*new vec(1.0f,0.0f,1.0f));
 this->cubicStoRage.add(*bnxtKube);
Kube *cnxtKube= new Kube(choosenColour,*new vec(0.0f,0.0f,0.0f),*new vec(0.0f,0.0f,1.0f));
 this->cubicStoRage.add(*cnxtKube);

 Kube *dnxtKube= new Kube(choosenColour,*new vec(0.0f,0.0f,0.0f),*new vec(0.0f,1.0f,0.0f));
 this->cubicStoRage.add(*dnxtKube);
Kube *fnxtKube= new Kube(choosenColour,*new vec(0.0f,0.0f,0.0f),*new vec(1.0f,1.0f,0.0f));
 this->cubicStoRage.add(*fnxtKube);
Kube *gnxtKube= new Kube(choosenColour,*new vec(0.0f,0.0f,0.0f),*new vec(1.0f,1.0f,1.0f));
 this->cubicStoRage.add(*gnxtKube);
Kube *hnxtKube= new Kube(choosenColour,*new vec(0.0f,0.0f,0.0f),*new vec(0.0f,1.0f,1.0f));
 this->cubicStoRage.add(*hnxtKube);





 }

vec rotateMatrice(vec *pointMatrice, const vec *Vector)
{
    return  pointMatrice->mul(*Vector);
}

game::KubeCombination::KubeCombination(int xStartPoint,int zStartPoint, Colour iBeginn)
{    //ctor

	Colour choosenColour=WHITE;
	switch(rand()%5)
		  {
		  	 case(0):{choosenColour=WHITE; break;}
		  	 case(1):{choosenColour=RED; break;}
		  	 case(2):{choosenColour=BLUE; break;}
		  	 case(3):{choosenColour=YELLOW; break;}
		  	 case(4):{choosenColour=GREEN; break;}


		  }




		switch(rand()%6)
			{
			 case(0):{buildLBRICK(choosenColour); break;}
			 case(1):{buildTBRICK(choosenColour); break;}
			 case(2):{buildSBRICK(choosenColour); break;}
			 case(3):{buildZBRICK(choosenColour); break;}
			 case(4):{buildIBRICK(choosenColour); break;}
			 case(5):{buildOBRICK(choosenColour); break;}
			 default:{printf("Unspecified Brick detected!");}
			}



    this->instDrop=false;
    currPtr=this; //TODO check if this really works
}

 vec game::KubeCombination::GetKubeWorldPos(int kube)
 {
  //Get this origin Position position

  //substract offset off cube

  //calc rotation matrice

  //apply rotation matrice


  //readd offset

  //build worldvector


//<TEST>
return *new vec(0.0f,0.0f,0.0f);
//</TEST>
 }
game::KubeCombination::~KubeCombination()
{
    //dtor
}

game::KubeCombination::KubeCombination(const KubeCombination& other)
{
    //copy ctor
}
