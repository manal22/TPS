#ifndef Adhérant_h
#define Adhérant_h

#include <vector>


class Bibliothèque;

class Adhérant {

 public:

    virtual void Emprunter();

    virtual void Rendre();

 public:
    String Prénom;
    String Nom;

 public:

    /**
     * @element-type Bibliothèque
     */
    std::vector< Bibliothèque* > myBibliothèque;
};

#endif // Adhérant_h
