#ifndef Direction g�n�rale_h
#define Direction g�n�rale_h

#include <vector>


class Agence;

class Direction g�n�rale {

 public:

    virtual void Consulter();

    virtual void Cr�erAgence();

    virtual void SupprimerAgence();

 public:
    Integer code;
    String Libell�;

 public:

    /**
     * @element-type Agence
     */
    std::vector< Agence* > Comprendre;
};

#endif // Direction g�n�rale_h
