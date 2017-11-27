#include "Magasin.h"


Magasin::Magasin()
{
    //ctor
}

Magasin::~Magasin()
{
    //dtor
}

void Magasin::setStock(int _stock)
{
    nbre_cartes_stock=_stock;
}
int Magasin::getStock()
{
    return nbre_cartes_stock;
}

std::vector<Carte> Magasin::RecupFichier()
{

    //Lire un fichier ligne par ligne
    //Entrée : le chemin d'accès au fichier

    std::ifstream fichier("SHOP.txt", std::ios::in);
    std::cout << "Reading SHOP.text => OK" << std::endl;
    if (fichier) ///test si le fichier est bien ouvert
    {
        int num=0;
        std::string line;
        std::string type;
        std::string nom;
        int energie;
        int atk;
        int pt_energie;
        int nbre_exemplaire;
        std::string domaine="_";
        int def;
        bool special;
        std::string path;
        const char* chemin;

        do
        {
            fichier >> type;
            if(type=="MONSTRE")
            {
                fichier >> nom >> domaine >> energie >> special >> atk >> def >> nbre_exemplaire >> path;
                Monstre maCarte;
                maCarte.AjouterCarteMonstre(maCarte,nom,domaine,energie,special,atk,def,nbre_exemplaire,path);
                //AJOUT DE LA CARTE DANS LA COLLECTION
                CollectionMagasin.push_back(maCarte);
                chemin=path.c_str();
                maCarte.AffichInfo(chemin);


            }
            else if(type=="MAGIE" || type=="PIEGE")
            {
                fichier >> nom >> nbre_exemplaire>> path;
                if(type=="MAGIE")
                {
                    Magie maCarte;
                    domaine="_";
                    maCarte.AjouterCarteMagie(maCarte,type,domaine,nbre_exemplaire,path);
                    CollectionMagasin.push_back(maCarte);
                    chemin=path.c_str();
                    maCarte.AffichInfo(chemin);


                }
                if(type=="PIEGE")
                {
                    Piege maCarte;
                    domaine="_";
                    maCarte.AjouterCartePiege(maCarte,type,domaine,nbre_exemplaire,path);
                    CollectionMagasin.push_back(maCarte);
                    chemin=path.c_str();
                    maCarte.AffichInfo(chemin);

                }

            }
            else if(type=="ENERGIE")
            {
                fichier >> domaine >> pt_energie >> nbre_exemplaire >> path;
                Energie maCarte;
                maCarte.AjouterCarteEnergie(maCarte,type,domaine,pt_energie,nbre_exemplaire,path);
                CollectionMagasin.push_back(maCarte);
                chemin=path.c_str();
                maCarte.AffichInfo(chemin);



            }
            if(type=="TERRAIN")
            {
                fichier >> domaine >> nbre_exemplaire >> path;
                Terrain maCarte;
                maCarte.AjouterCarteTerrain(maCarte,type,domaine,nbre_exemplaire,path);
                CollectionMagasin.push_back(maCarte);
                chemin=path.c_str();
                maCarte.AffichInfo(chemin);

            }
            std::cout << "\n";
            num++;
        }
        while(std::getline(fichier,line));

        fichier.close(); // fermeture du flux
    }

    else ///en cas d'erreur...
    {
        std::cout << "Cannot read SHOP.text" << std::endl;
    }
    CollectionMagasin.pop_back();


    return CollectionMagasin;
}
