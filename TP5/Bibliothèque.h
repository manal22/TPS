#ifndef Bibliothèque_h
#define Bibliothèque_h

class Adhérant;
class Document;

class Bibliothèque {

 public:

    virtual void AjouterDoc();

    virtual void AjouterAdh();

    virtual void SupprimerAdh();

 public:

    Adhérant *myAdhérant;

    /**
     * @element-type Document
     */
    Document *myDocument;
};

#endif // Bibliothèque_h
