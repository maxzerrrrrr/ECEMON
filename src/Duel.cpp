#include "Duel.h"
#include "Joueur.h"
#include <algorithm>
#include <string>
#include <cstdlib>
#include <ctime>

Duel::Duel()
{
    //ctor
}

Duel::~Duel()
{
    //dtor
}

void Duel::start(Joueur player1, Joueur player2)
{
    while(player2.Hand.size() != 5)
    {
        player1.Hand.push_back(PlayDeck.front());
        PlayDeck.pop();
        player2.Hand.push_back(PlayDeck.front());
        player2.PlayDeck.pop();
    }
}

void Duel::draw(Joueur player1)
{
    player1.Hand.push_back(PlayDeck.front());
    PlayDeck.pop();
}

void Duel::defausse(int i, Joueur playeer1)
{
    std::vector<Carte>::iterator it;
    if(i > Hand.size())
    {
        i == Hand.size();
    }
    int y;
    for(int x =0; x<i; x++)
    {
        std::cout<<"choisir le numero de la carte a defausser : "<<std::endl;
        for(it = Hand.begin(); it!= Hand.end(); it++)
        {
            std::string CARDNAME;
            CARDNAME == (*it).getNom();
            std::cout << CARDNAME <<std::endl;
        }
    std::cin>>y;
    Hand.erase(Hand.begin() +y-1);
    }

}
int Duel::getturn()const
{
    return m_turn;
}

std::vector<Joueur> Duel::getMesjoueurs()const
{
    return MesJoueurs;
}
void Duel::shuffle()
{
    std::random_shuffle(AleaDeck.begin(), AleaDeck.end());
    for (const auto& elem : AleaDeck)
    {
        PlayDeck.push(elem);
    }
    std::random_shuffle(HisAleaDeck.begin(), HisAleaDeck.end());
    for (const auto& elem : HisAleaDeck)
    {
        HisPlayDeck.push(elem);
    }
}
void Duel::AjouterJoueur(Joueur player1, Joueur player2)
{
    MesJoueurs.push_back(player1);
    MesJoueurs.push_back(player2);
}


void Duel::Lose()
{
    if(PlayDeck.empty() || MesJoueurs[0].getLP() == 0 )
    {
        std::cout<<" YOU LOSE !!!!!!! "<<std::endl;
    }
}

void Duel::win()
{
    if((HisPlayDeck.empty() )||( MesJoueurs[1].getLP() == 0))
    {
        std::cout<<" YOU WIN !!!!!!! "<<std::endl;
    }
}
