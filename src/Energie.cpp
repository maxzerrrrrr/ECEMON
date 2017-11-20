#include "Energie.h"

Energie::Energie()
{
    //ctor
}

Energie::~Energie()
{
    //dtor
}

void Energie::setPE(int _energie)
{
    m_point_energie=_energie;
}

int Energie::getPE()
{
    return m_point_energie;
}

void Energie::setDomaine(std::string _domaine)
{
    m_domaine=_domaine;
}

std::string  Energie::getDomaine()
{
    return m_domaine;
}

void Energie::AffichInfo(const char* chemin)
{
    Carte::AffichInfo(chemin);
    std::cout << "Nombre de points energie  de la carte:  " << m_point_energie << std::endl;
}
void Energie::AjouterCarteEnergie(Carte &maCarte, std::string nom, std::string domaine,int energie,int nbre_exemplaires,std::string path)
{
    const char* chemin;
    Carte::AjouterCarte(nom,domaine,nbre_exemplaires);
    ///CONVERSION STRING TO CHAR*
    chemin=path.c_str();
    m_point_energie=energie;

    ///CHARGEMENT DE LA CARTE
    maCarte.setBITMAP(chemin);

}

