#ifndef KUBEONCE
#define KUBEONCE

#define KUBESIZE 12.0f
#include "game.h"

//<MOD>


class Kube :dynent
{
    public:

		vec GetOffSetToOrigin() { return OffSetToOrigin;}
        void SetOffSetToOrigin(vec *val) { OffSetToOrigin = *val; }

        /** Default constructor */
        Kube(Colour ExpectedColour, vec DirAction, vec OffSetToOrigin);
        /** Default destructor */
        virtual ~Kube();
        /** Copy constructor
         *  \param other Object to copy from
         */
        Kube(const Kube& other);
        /** Access DirAction
         * \return The current value of DirAction
         */
        vec GetDirAction() { return DirAction; }
        /** Set DirAction
         * \param val New value to set
         */
        void SetDirAction( vec *val) {DirAction = *val; }

        Colour CubularColour;
//        md3* Kubemodel;
    protected:

    private:

        vec DirAction; //!< Member variable "DirAction"
		vec OffSetToOrigin;
};
//</MOD>

#endif KUBEONCE
