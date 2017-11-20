#ifndef DUEL_H
#define DUEL_H
#include "Joueur.h"
#include "Field.h"
#include <iostream>
#include <queue>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <ctime>

class Duel
{
    public:
        Duel();
        virtual ~Duel();
        void start();
        void draw(Joueur player1);
        void win(Joueur player1);
        void activate(Carte card1);
        void defausse();
        void choosecard(Carte card1);
        void attack(Carte card1, Carte card2);
        void destroy(Carte card1);
        void toss();
        void getdestroy(Carte card1);
        int getturn()const;
        void setturn();


    protected:

    private:
        std::vector<Joueur>MesJoueurs;
        int m_turn;
        int m_duelphase = 0;
        std::vector<Carte>MyField;
        std::vector<Carte>Hand;
        std::vector<Carte>Graveyard;
        std::vector<Carte>AleaDeck;
        std::queue<Carte>PlayDeck;
};

#endif // DUEL_H
