#include "Carte.h"
#include "Duel.h"
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
void Carte::setNbenergy(int x)
{
    m_nbenergy -= x;
}
int Carte::getNbenergy()const
{
    return m_nbenergy;
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

void Carte::Dryade(Duel duelA, Joueur player1)
{
    std::string phase == duelA.getPhase();
    if(phase == "DrawPhase")
    {
        player1.Hand.push_back(Energie5Europe);
    }
}

void Carte::Ange(Joueur player1)
{
    player1.setLP +=2000;
}

void Carte::DameBlanche(Duel duelA, Joueur player2)
{
    int x = duelA.getturn();
    if(x%2 = 1)
    {
        duelA.setPhase(2);
    }
}

void Carte::Agloolik(Joueur player1)
{
    while(player1.nbinvoc = 1 )
    {
        for(auto& elem : player1.Hand)
        {
            player1.Hand.setNbEnergy(-1);
        }
    }
}


void Carte::Aerico(Joueur player2)
{
    for(int i = 0; i <2; i++)
    {
        for(auto& elem : player2.Hand)
        {
            if(player2.Hand.m_type == " ENERGIE")
            {
                player2.Hand.erase(elem);
            }
        }

    }
}

void Carte::Askafroa(Joueur player1)
{
    std::vector<Carte>::iterator it;
    if(1 > player1.Hand.size())
    {

    }
    else
    {
        int y = 0;
        std::cout<<"choisir le numero de la carte a defausser : "<<std::endl;
        for(it = player1.Hand.begin(); it!= player1.Hand.end(); it++)
        {
            std::string CARDNAME;
            CARDNAME == (*it).getNom();
            std::cout << CARDNAME <<std::endl;
        }
        std::cin>>y;
        int a = player1.Hand.getNbEnergy();
        player1.Hand.erase(player1.Hand.begin() +y-1);
        for( int i =0; i < a; i++)
        {
            player1.draw();
        }


    }

}
















