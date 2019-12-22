#ifndef Direction générale_h
#define Direction générale_h

#include <vector>


class Agence;

class Direction générale {

 public:

    virtual void Consulter();

    virtual void CréerAgence();

    virtual void SupprimerAgence();

 public:
    Integer code;
    String Libellé;

 public:

    /**
     * @element-type Agence
     */
    std::vector< Agence* > Comprendre;
};

#endif // Direction générale_h
