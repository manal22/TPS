#ifndef Agence_h
#define Agence_h

#include <vector>

#include "Date.h"

class Direction g�n�rale;
class Personnels;

class Agence {

 public:

    virtual void Cr�er();

    virtual void Supprimer();

    virtual void Visualiser();

    virtual void RattacherPersonnel();

    virtual void D�tacherPersonnel();

 public:
    Integer code;
    String intitul�;
    Date DateDeCreation;
    Date DateDeFermeture;

 public:

    Direction g�n�rale *Comprendre;

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
