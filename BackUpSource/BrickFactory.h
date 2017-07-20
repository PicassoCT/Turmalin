  include "KubeCombination.h"
  
  
   class Brickfactory
{

    Brickfactory(brickType type, KubeCombination* kC);

   
    void buildLBRICK(Colour choosenColour, KubeCombination* kC);
    void buildTBRICK(Colour choosenColour, KubeCombination* kC);
    void buildSBRICK(Colour choosenColour, KubeCombination* kC);
    void buildZBRICK(Colour choosenColour, KubeCombination* kC);
    void buildIBRICK(Colour choosenColour, KubeCombination* kC);
    void buildOBRICK(Colour choosenColour, KubeCombination* kC);
    
 }
    
