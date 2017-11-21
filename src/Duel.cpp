#include "Duel.h"
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

void Duel::start()
{
    while(Hand.size() != 5)
    {
        Hand.push_back(PlayDeck);
        PlayDeck.pop();
        HisHand.push_back(PlayDeck);
        HisPlayDeck.pop();
    }
}

void Duel::toss()
{
    int i;
    int nombreAleatoire;
    srand((int)time(0));
    nombreAleatoire = (rand() % i);
    std::random_shuffle(AleaDeck.begin(), AleaDeck.end(), nombreAleatoire);
    for (const auto& elem : AleaDeck)
    {
        PlayDeck.push(elem);
    }
    std::random_shuffle(HisAleaDeck.begin(), HisAleaDeck.end(), nombreAleatoire);
    for (const auto& elem : HisAleaDeck)
    {
        HisPlayDeck.push(elem);
    }
}

void Duel::Lose()
{
    if((PlayDeck.empty() )||( Mesjoueurs[1].m_lifepoint = 0))
    {
        std::cout<<" YOU LOSE !!!!!!! "<<std::endl;
    }
}

void Duel::win()
{
    if((HisPlayDeck.empty() )||( Mesjoueurs[2].m_lifepoint = 0))
    {
        std::cout<<" YOU WIN !!!!!!! "<<std::endl;
    }
}
