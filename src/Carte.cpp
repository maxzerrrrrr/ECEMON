#include "Carte.h"

Carte::Carte()
{
    //ctor
}

Carte::~Carte()
{
    //dtor
}

void Carte::setNom(std::string _nom)
{
    nomCarte=_nom;

}

std::string Carte::getNom()
{
    return nomCarte;
}

void Carte::AffichInfo(const char * chemin) const
{

    std::cout << "Nom de la carte : " << nomCarte << std::endl;
    if(m_domaine!="_")
        std::cout << "Domaine de le carte : " << m_domaine << std::endl;
    std::cout << "Chemin d'acces BITMAP : " << chemin << std::endl;
    std::cout << "Nombre d'exemplaire(s) de cette carte : " << nbre_exemplaire << std::endl;

}


void Carte::setNbreExemplaire(int _ex)
{
    nbre_exemplaire=_ex;
}

int Carte::getNbreExemplaire()
{
    return nbre_exemplaire;
}

BITMAP* Carte::getBITMAP()
{
    return image;
}

void Carte::setDomaine(int _domaine)
{
    m_domaine=_domaine;
}

std::string Carte::getDomaine()
{
    return m_domaine;
}

void Carte::setBITMAP(const char* chemin)
{
    std::cout << "CHARGEMENT OK" << std::endl;
    image = load_bitmap(chemin, NULL);
    if(!image)
        allegro_message("Erreur de chargement de l'image");


}
void Carte::AjouterCarte(std::string nom, std::string domaine, int nbre_exemplaires)
{
    ///INITIALISER PARAMETRES
    nomCarte=nom;
    m_domaine=domaine;
    nbre_exemplaire=nbre_exemplaires;
}


