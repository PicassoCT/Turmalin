//<MOD>

#ifndef KUBEONCE
#define KUBEONCE
#define KUBESIZE 12.0f

#include "engine.h"


struct vec;
struct md3;

namespace game
{

    class Kube : public physent
    {
    public:

        /** Default constructor */
        Kube(const vec ExpectedColour, vec orgPos, vec orgRotation);

        /** Default destructor */
        virtual ~Kube();
        /** Copy constructor
         *  \param other Object to copy from
         */
        Kube(const Kube& other);
        /** Access DirAction
         * \return The current value of DirAction
         */

        void SetPosition(vec Position);
        void SetDirection(vec Orientation) ;

        //Sets the Cubes Walls lower
        void lowerCubeDoors(vec Direction);

    private:
        md3* cubeModel;
        vec CubularColour;

    };
};
//</MOD>

#endif

