#ifndef Emprunt_h
#define Emprunt_h

#include "date.h"


class Emprunt {

 public:

    virtual void ProlongerDateRetour();

 public:
    date DateEmprunt;
    date DateRetour;
};

#endif // Emprunt_h
