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

}

void Duel::toss()
{
    int nombreAleatoire;
    srand((int)time(0));
    nombreAleatoire = (rand() % i);
    random_shuffle(AleaDeck.begin(), AleaDeck.end(), nombreAleatoire);
}
