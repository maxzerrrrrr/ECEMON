#include "JoueurDuel.h"

JoueurDuel::JoueurDuel()
{
    //ctor
}

JoueurDuel::~JoueurDuel()
{
    //dtor
}

std::queue<Carte>& Duel::getPlayDeck()const
{
    return PlayDeck;
}
std::vector<Carte>& Duel::getHand()const
{
    return Hand;
}
std::vector<Carte>& Duel::getGraveyard()const
{
    return Graveyard;
}
std::vector<Carte>& Duel::getField()const
{
    return Field;
}
