#ifndef KUBULARBELLS
#define KUBULARBELLS
//<MOD>

#include "Kube.h"



#define ROTPERC_PER_FRAME 0.0001f

// A Kube combination consists of at least one Kube, the first to be initialised, and to be stored in the vector<Kube>
//Modell
enum brickType {LBRICK, TBRICK, SBRICK, ZBRICK, IBRICK,OBRICK};



namespace game
{



class KubeCombination: public dynent
{
public:

    /** Default constructor */
    KubeCombination(int xStartPoint, int zStartPoint,  Colour iBeginn);
    /** Default destructor */
    virtual ~KubeCombination();
    /** Copy constructor*/
    KubeCombination(const KubeCombination& other);

    //update RoationToKubes
    void upDateRotationToKube(vec newRotation);

    //finds the Highest Point relative to the Kubes Origin
    vec findHighestPoint(KubeCombination self);
    //rotationalMatrice+

    void incrementRotMov(float Rot,float Mov)
    {
        this->movementInProgress+=Mov;
        this->rotationInProgress+=Rot;
    }

    vec calcWorldKubePos(int KubeNumber);

    //rotateCombination -> Locks the combination
    void rotateCombination(vec *newRotation);

    //continueRotationAllreadyBegun
    //returns true if rotation is finnished
    bool applyAllreadyBegunRotation();

    //CheckIfRotationIsActuallyPlausible
    bool checkRotationPlausible(vec *rotation2Check);
    // Check if Movement is plausible
    bool checkMovementPlausible(vec *moveMent);
    //MoveCombination
    void moveCombination(vec *moveMent);
    //called once bool LockMovement = true
    void applyAllreadyBegunMovement();

    //ApplyGravitas - grvaitas is always a float operation, which is only determinated
    void applyGravitation();


    //Moves the KubeCombination towardsTheGround
    void MoveTowardsGround();
    //TransmitCombinationToCompound
    vector<Kube>   transMitInternalKubes();


    //
    void buildLBRICK(Colour choosenColour);
    void buildTBRICK(Colour choosenColour);
    void buildSBRICK(Colour choosenColour);
    void buildZBRICK(Colour choosenColour);
    void buildIBRICK(Colour choosenColour);
    void buildOBRICK(Colour choosenColour);


    //<Getter and Setter>
    vec GetDirAction()
    {
        return DirAction;
    }
    void SetDirAction(vec *val)
    {
        DirAction = *val;
    }


    vec GetPivot()
    {
        return pivotPosition;
    }
    void setPivot(vec *datValue)
    {
        pivotPosition=*datValue;
    }

    int GetNrOfKubes()
    {
        return NrOfKubes;
    }
    void  SetNrOfKubes(int *datValue)
    {
        NrOfKubes=*datValue;
    }
    //</Getter and Setter>
    Kube GetKube(int position)
    {
        return cubicStoRage[position];
    }
    vec GetKubeWorldPos(int kube);

    void  SetKube(Kube *initialisedKube,int stowayPosition)
    {
        if(stowayPosition!= NULL)
        {
            cubicStoRage[stowayPosition]=*initialisedKube;
        }
        else
        {
            cubicStoRage.add(*initialisedKube);
        }
    }


    //Turn Data
    bool rotationInProgress;
    float rotationPercentage;
    vec turnTowards;            //!The TargetDirection

    //Movement Data
    bool movementInProgress;
    float movementPercentage;
    vec moveMent;               //!The MovementTarget

    //<CollisionRelated>
    bool doesPlayerCollide(fpsent *d);


    //</CollisionRelated>
    vec currPivotPosition;  //! current Position after linear interpolation
    vec currDirAction;      //! the resulting direction after linear interpolation
    vector<Kube> cubicStoRage;

protected:

private:

    float gravitasPercentage;
    bool instDrop;

    int NrOfKubes;

    //WorldPosition of the Pivot
    vec pivotPosition;      //! the old pivot Position
    vec DirAction; //!< the old direction we started from

};
}
//</MOD>

#endif KUBULARBELLS
