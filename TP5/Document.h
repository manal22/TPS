#ifndef Document_h
#define Document_h

class Bibliothèque;

class Document {

 public:
    String titre;

 public:

    /**
     * @element-type Bibliothèque
     */
    Bibliothèque *myBibliothèque;
};

#endif // Document_h
