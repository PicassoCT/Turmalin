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
    Kube(const Colour ExpectedColour, vec orgPos, vec orgRotation);
    
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

Colour CubularColour;


private:
    ///TODO md3  geometry;


};
};
//</MOD>

#endif

