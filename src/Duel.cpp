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

void Duel::start(JoueurDuel player1, JoueurDuel player2)
{
    while(player2.Hand.size() != 5)
    {
        player1.Hand.push_back(PlayDeck.front());
        player1.PlayDeck.pop();
        player2.Hand.push_back(PlayDeck.front());
        player2.PlayDeck.pop();
    }
}
void Duel::attack(Carte* card1, Carte* target)
{
    Monstre* m = dynamic_cast<Monstre*>(card1);
    Monstre* t = dynamic_cast<Monstre*>(target);
    if(m->getATK() > t->getDEF())
    {
        int degat = m->getATK() - t->getDEF();
        destroy(t);
        player1.setLP -= degat;

    }
    if(m->getATK() < t->getDEF())
    {
        int degat = t->getDEF() - m->getATK();
        player2.setLP -= degats;
    }
}
void Duel::destroy(Carte card1)
{
    Graveyard.push_back(card1*);
    card1* = NULL;
}
void Duel::draw(JoueurDuel player1)
{
    player1.Hand.push_back(PlayDeck.front());
    PlayDeck.pop();
}

void Duel::defausse(int i, JoueurDuel playeer1)
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

std::vector<JoueurDuel> Duel::getMesjoueurs()const
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
void Duel::AjouterJoueur(JoueurDuel player1, JoueurDuel player2)
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
std::string Duel::getPhase()const
{
    return m_phase;
}
void Duel::setPhase(int x)
{
    m_phase = m_phase[x];
}
std::string Duel::m_phase[0] = "DrawPhase"
std::string Duel::m_phase[1] = "MainPhase"
std::string Duel::m_phase[2] = "BattlePhase"
std::string Duel::m_phase[3] = "EndPhase"


