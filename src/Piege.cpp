#include "Piege.h"

Piege::Piege()
{
    //ctor
}

Piege::~Piege()
{
    //dtor
}

void  Piege::setDomaine(std::string _domaine)
{
    m_domaine=_domaine;
}

std::string Piege::getDomaine()
{
    return m_domaine;
}

void Piege::setNom(std::string _nom)
{
    nomCarte=_nom;

}

std::string Piege::getNom()
{
    return nomCarte;
}

void Piege::AffichInfo(const char* chemin)
{
    Carte::AffichInfo(chemin);
}

void Piege::AjouterCartePiege(Carte &maCarte, std::string nom, std::string domaine, int nbre_exemplaires,std::string path)
{
    const char* chemin;
    Carte::AjouterCarte(nom,domaine,nbre_exemplaires);
    /CONVERSION STRING TO CHAR*
    chemin=path.c_str();

    /CHARGEMENT DE LA CARTE
    maCarte.setBITMAP(chemin);

}
