#include "Magie.h"

Magie::Magie()
{
    //ctor
}

Magie::~Magie()
{
    //dtor
}

void Magie::setDomaine(std::string _domaine)
{
    m_domaine=_domaine;
}

std::string Magie::getDomaine()
{
    return m_domaine;
}

void Magie::setNom(std::string _nom)
{
    nomCarte=_nom;

}

std::string Magie::getNom()
{
    return nomCarte;
}

void Magie::AffichInfo(const char* chemin)
{
    Carte::AffichInfo(chemin);
}

void Magie::AjouterCarteMagie(Carte &maCarte, std::string nom, std::string domaine,int nbre_exemplaires,std::string path)
{
    const char* chemin;
    Carte::AjouterCarte(nom,domaine,nbre_exemplaires);
    ///CONVERSION STRING TO CHAR*
    chemin=path.c_str();

    ///CHARGEMENT DE LA CARTE
    maCarte.setBITMAP(chemin);

}
