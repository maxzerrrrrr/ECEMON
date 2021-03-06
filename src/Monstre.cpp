#include "Monstre.h"

Monstre::Monstre()
{
    //ctor
}

Monstre::~Monstre()
{
    //dtor
}

void Monstre::setEnergie(int _energie)
{
    m_nbre_energie=_energie;

}

void Monstre::setSpec(bool _spec)
{
    m_special=_spec;
}

int Monstre::getEnergie()
{
    return m_nbre_energie;
}

bool Monstre::getSpec()
{
    return m_special;
}

void Monstre::setATK(int _atk)
{
    m_atk=_atk;
}

int Monstre::getATK()
{
    return m_atk;
}

void Monstre::setDEF(int _def)
{
    m_def=_def;
}

int Monstre::getDEF()
{
    return m_def;
}

void Monstre::setDomaine(std::string _domaine)
{
    m_domaine=_domaine;
}

std::string Monstre::getDomaine()
{
    return m_domaine;
}

void Monstre::AffichInfo(const char* chemin) const
{
    Carte::AffichInfo(chemin);
    std::cout << "Nbre energie de la carte : " << m_nbre_energie << std::endl;
    std::cout << "Effet special : ";
    if(m_special==0)
        std::cout << "NON" << std::endl;
    if(m_special==1)
        std::cout << "OUI" << std::endl;
    std::cout << "Attaque de la carte : " << m_atk << std::endl;
    std::cout << "Defense de la carte : " << m_def << std::endl;
}

void Monstre::AjouterCarteMonstre(Carte &maCarte, std::string nom, std::string domaine, int energie, bool special, int atk, int def, int nbre_exemplaires,std::string path)
{

    Carte::AjouterCarte(nom,domaine,nbre_exemplaires);
    ///INITIALISER PARAMETRES

    m_nbre_energie=energie;
    m_special=special;
    m_atk=atk;
    m_def=def;

    const char* chemin;
    ///CONVERSION STRING TO CHAR*
    chemin=path.c_str();

    ///CHARGEMENT DE LA CARTE
    maCarte.setBITMAP(chemin);
}

