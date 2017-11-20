#ifndef MAGIE_H
#define MAGIE_H
#include "Sort.h"
#include <iostream>

class Magie : public Sort
{
public:
    Magie();
    virtual ~Magie();

    void setDomaine(std::string _domaine);
    std::string getDomaine();

    void setNom(std::string _nom);
    std::string getNom();

    virtual void AffichInfo(const char* chemin);
    virtual void AjouterCarteMagie(Carte &maCarte, std::string nom,std::string domaine,int nbre_exemplaires,std::string path);

protected:

private:
};

#endif // MAGIE_H
