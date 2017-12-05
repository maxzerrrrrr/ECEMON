#include "Terrain.h"

Terrain::Terrain()
{
    //ctor
}

Terrain::~Terrain()
{
    //dtor
}
void Terrain::AjouterCarteTerrain(Carte &maCarte, std::string nom, std::string domaine,int nbre_exemplaires,std::string path)
{
    const char* chemin;
    Carte::AjouterCarte(nom,domaine,nbre_exemplaires);
    ///CONVERSION STRING TO CHAR*
    chemin=path.c_str();

    ///CHARGEMENT DE LA CARTE
    maCarte.setBITMAP(chemin);

}
