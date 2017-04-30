#ifndef FLAGPOLESITA_H
#define FLAGPOLESITA_H
#include "game.h"
#include "Kube.h"

class FlagPoleSita;
//<MOD>


class FlagPoleSita
{
    public:
        /** Default constructor */
        FlagPoleSita();//Entity Player, Entity Team needed
        /** Default destructor */
        void  dropCubeCombination();

        void moveCubeCombination();

       // KubeCombination nextCubeCombination();
        //change Player One /Player Two
        void ExchangePlayers(fpsent *d);
        //Drop the Old FlagPoleSita at the lowest Cube
        void DropOldPlayer(fpsent *oldOne);
        ~FlagPoleSita();
        /** Access &GodMod
         * \return The current value of &GodMod
         */
       fpsent * GetGodMod() { return GodMod; }
        /** Set &GodMod
         * \param val New value to set
         */
       // void SetGodMod(fpsent  *val) { GodMod = val; currFlagPolePtr=this;}
        /** Access &Team
         * \return The current value of &Team
         */
        void SetDropInProgress(bool theValue){dropInProgress=theValue;}
        bool GetDropInProgress(){return dropInProgress;}


        /** Set &Team
         * \param val New value to set
         */


         vec GetclampedPosition() { return clampedPosition; }
        /** Set clampedPosition
         * \param val New value to set
         */
        void SetclampedPosition(vec val) { clampedPosition = val; }
        /** Access turmalinGameSpeed
         * \return The current value of turmalinGameSpeed
         */
        float GetturmalinGameSpeed() { return turmalinGameSpeed; }
        /** Set turmalinGameSpeed
         * \param val New value to set
         */
        void SetturmalinGameSpeed(float val) { turmalinGameSpeed = val; }
    protected:
    private:
        bool dropInProgress;
        fpsent *GodMod; //!< Member variable "&GodMod"

        vec clampedPosition; //!< Member variable "clampedPosition"
        float turmalinGameSpeed; //!< Member variable "turmalinGameSpeed"
};


   FlagPoleSita* currFlagPolePtr=NULL;

//static FlagPoleSita*  currFlagPolePtr;
//</MOD>
#endif // FLAGPOLESITA_H
