#ifndef PIEGE_H
#define PIEGE_H
#include "Sort.h"
#include <iostream>

class Piege : public Sort
{
public:
    Piege();
    virtual ~Piege();

    void setDomaine(std::string _domaine);
    std::string getDomaine();

    void setNom(std::string _nom);
    std::string getNom();

    virtual void AffichInfo(const char* chemin);
    virtual void AjouterCartePiege(Carte &maCarte, std::string nom, std::string domaine,int nbre_exemplaires, std::string path);

protected:

private:
};

#endif // PIEGE_H
