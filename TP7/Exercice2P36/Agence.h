#ifndef Agence_h
#define Agence_h

#include <vector>

#include "Date.h"

class Direction générale;
class Personnels;

class Agence {

 public:

    virtual void Créer();

    virtual void Supprimer();

    virtual void Visualiser();

    virtual void RattacherPersonnel();

    virtual void DétacherPersonnel();

 public:
    Integer code;
    String intitulé;
    Date DateDeCreation;
    Date DateDeFermeture;

 public:

    Direction générale *Comprendre;

    /**
     * @element-type Personnels
     */
    std::vector< Personnels* > Appartenir;

    /**
     * @element-type Personnels
     */
    std::vector< Personnels* > Appartenir;

    /**
     * @element-type Personnels
     */
    std::vector< Personnels* > Appartenir;

    /**
     * @element-type Personnels
     */
    std::vector< Personnels* > Appartenir;
};

#endif // Agence_h
