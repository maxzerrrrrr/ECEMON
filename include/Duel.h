#ifndef DUEL_H
#define DUEL_H
#include "Joueur.h"
#include <iostream>



class Duel
{
    public:
        Duel();
        virtual ~Duel();



    protected:

    private:
        std::vector<Joueur>MesJoueurs;
        int m_turn;
        std::string phase;
};

#endif // DUEL_H
