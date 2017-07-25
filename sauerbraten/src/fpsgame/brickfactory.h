

enum brickType{LBRICK, TBRICK, SBRICK, ZBRICK, IBRICK,OBRICK};
 class KubeCombination;
 struct vec;

class Brickfactory
{

    Brickfactory(brickType type, KubeCombination* kC);


    void buildLBRICK(vec choosenColour, KubeCombination* kC);
    void buildTBRICK(vec choosenColour, KubeCombination* kC);
    void buildSBRICK(vec choosenColour, KubeCombination* kC);
    void buildZBRICK(vec choosenColour, KubeCombination* kC);
    void buildIBRICK(vec choosenColour, KubeCombination* kC);
    void buildOBRICK(vec choosenColour, KubeCombination* kC);

};

