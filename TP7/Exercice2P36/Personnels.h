#ifndef Personnels_h
#define Personnels_h

#include "Date.h"
#include "Pr�nom.h"

class Agence;

class Personnels {

 public:

    virtual void cr�er();

    virtual void Supprimer();

    virtual void Rechercher();

    virtual void Modifier();

    virtual void Rechercher();

    virtual void RattacherALagence();

 public:
    Integer Numero;
    String Qualit�;
    String Nom;
    Pr�nom Pr�nom;
    Date DateDeNaissance;
    Date DatePr�vArriv�;
    Date DateArriv�;
    Date DateD�part;

 public:

    Agence *Appartenir;

    Agence *Appartenir;

    Agence *Appartenir;

    Agence *Appartenir;
};

#endif // Personnels_h
