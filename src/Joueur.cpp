#include "Joueur.h"

Joueur::Joueur()
{
    //ctor
}

Joueur::Joueur(std::string _nom, int nbre_carte_max)
    :JDeck(_nom,nbre_carte_max)
{

}

Joueur::~Joueur()
{
    //dtor
}
int Joueur::getLP()const
{
    return m_lifepoint;
}
int Joueur::getDefaite()
{
    return m_nbre_defaites;
}
int Joueur::getVictoire()
{
    return m_nbre_victoires;
}

std::string Joueur::getNomJoueur()
{

    return m_nom;
    std::cout << "m_nom :" <<m_nom<<std::endl;
}
int Joueur::getMoney()
{
    return m_money;
}

Deck Joueur::getDeck()
{
    return JDeck;
}


void Joueur::setDefaite(int _defaites)
{
    m_nbre_defaites=_defaites;
}

void Joueur::setVictoire(int _victoires)
{
    m_nbre_victoires=_victoires;
}

void Joueur::setNomJoueur(std::string _nom)
{
    m_nom=_nom;
}

void Joueur::setMoney(int _money)
{
    m_money=_money;
}

void Joueur::setDeck(Deck _deck)
{
    JDeck=_deck;
}

void Joueur::setLP(int LP)
{
    m_lifepoint = LP;
}
void Joueur::draw()
{
    Hand.push_back(PlayDeck.front());
    PlayDeck.pop();
}

void Joueur::CreerJoueur()
{
    ///Lire un fichier ligne par ligne
    ///Entrée : le chemin d'accès au fichier

    std::ofstream fichier("JOUEUR.txt", std::ios::app);

    std::cout << "Creer joueur => JOUEUR.text => OK" << std::endl;

    std::string nom;

    if (fichier) ///test si le fichier est bien ouvert
    {

        allegro_message("ENTRER LE NOM DU JOUEUR");
        std::cout << "Entrer le nom du joueur : " << std::endl;
        std::cin >> nom;

        fichier <<"\n" <<0 <<" "<<0 << " "<< nom <<" "<< 5000<< std::endl;



        fichier.close();
    }
    else ///en cas d'erreur...
    {
        std::cout << "Cannot read JOUEUR.text" << std::endl;
    }
}

std::vector <Joueur> Joueur::RecupJoueur()
{

    ///Lire un fichier ligne par ligne
    ///Entrée : le chemin d'accès au fichier
    std::vector <Joueur> Actualiser;
    std::ifstream fichier("JOUEUR.txt", std::ios::in);
    std::cout << "Recup Joueur => JOUEUR.text => OK" << std::endl;
    if(fichier)
    {

        std::string line;
        std::string nom;
        int victoires;
        int defaites;
        int money;

        do
        {
            fichier >>  victoires >> defaites >> nom >> money;
            if(nom!="suppr")
            {
                Joueur j;
                j.setNomJoueur(nom);
                j.setVictoire(victoires);
                j.setDefaite(defaites);
                j.setMoney(money);
                Actualiser.push_back(j);


            }
        }
        while(fichier.eof()==false);

        fichier.close();
    }
    else ///en cas d'erreur...
    {
        std::cout << "Cannot read JOUEUR.text" << std::endl;
    }
    Actualiser.pop_back();
    MesJoueurs=Actualiser;
    return Actualiser;
}

void Joueur::AfficherDeck(Deck d)
{
    d.AfficherDeck();
}

void Joueur::CreationDeck(int num)
{
    std::string nom;
    std::string chemin;
    nom=MesJoueurs[num].getNomJoueur().c_str();
    JDeck.CreationDeck(nom);

}

Deck Joueur::RecupDeck(int num)
{
    std::string nom;
    std::string chemin;
    int DeckCartes=0;
    nom=MesJoueurs[num].getNomJoueur().c_str();
    ///CollectionJoueur=JDeck.RecupDeck(nom);
    JDeck.setVectorDeck(JDeck.RecupDeck(nom));
    JDeck.setNomDeck(nom);
    for(int i=0; i<JDeck.getVectorDeck().size()-1; i++)
    {
        DeckCartes+=JDeck.getVectorDeck()[i].getNbreExemplaire();
    }

      JDeck.setNbreCartes(DeckCartes);
    return JDeck;

}







