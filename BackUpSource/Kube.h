//<MOD>

#ifndef KUBEONCE
#define KUBEONCE
#define KUBESIZE 12.0f


namespace game
{

class Kube : public physent
 {
public:



    /** Default constructor */
    Kube(const Colour ExpectedColour, const vec DirAction, const vec OffSetToOrigin);
    /** Default destructor */
    virtual ~Kube();
    /** Copy constructor
     *  \param other Object to copy from
     */
    Kube(const Kube& other);
    /** Access DirAction
     * \return The current value of DirAction
     */
    vec GetDirAction()
    {
        vec returnVal;
        returnVal= {yaw,roll,pitch};
        return returnVal;
    };
    /** Set DirAction
             * \param val New value to set
             */
    void SetDirAction( vec *val)
    {
        yaw=val->x;
        roll=val->y;
        pitch=val->z;
    }

    Colour CubularColour;


private:
    ///TODO md3  geometry;


};
};
//</MOD>

#endif

