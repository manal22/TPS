#ifndef Personnels_h
#define Personnels_h

#include "Date.h"
#include "Prénom.h"

class Agence;

class Personnels {

 public:

    virtual void créer();

    virtual void Supprimer();

    virtual void Rechercher();

    virtual void Modifier();

    virtual void Rechercher();

    virtual void RattacherALagence();

 public:
    Integer Numero;
    String Qualité;
    String Nom;
    Prénom Prénom;
    Date DateDeNaissance;
    Date DatePrévArrivé;
    Date DateArrivé;
    Date DateDépart;

 public:

    Agence *Appartenir;

    Agence *Appartenir;

    Agence *Appartenir;

    Agence *Appartenir;
};

#endif // Personnels_h
