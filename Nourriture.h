#ifndef NOURRITURE_H_INCLUDED
#define NOURRITURE_H_INCLUDED

class Nourriture
{
    public:

    int quantiteEau;
    int quantiteNourriture;

    Nourriture();
    ~Nourriture();
    void gestionGeau(int);
    void gestionGnourriture(int);
    bool retirerEau(int);
    bool retirerNourriture(int);
};



#endif // NOURRITURE_H_INCLUDED
