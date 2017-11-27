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
        void start(Joueur player1, Joueur player2);
        void draw(Joueur player1);
        void win();
        void Lose();
        void activate(Carte card1);
        void defausse(int i, Joueur playeer1);
        void choosecard(Carte card1);
        void attack(Carte card1, Carte card2);
        void destroy(Carte card1);
        void shuffle();
        void getdestroy(Carte card1);
        int getturn()const;
        void setturn();
        std::string getPhase()const;
        void setPhase(int x);
        std::vector<Joueur> getMesjoueurs()const;
        void AjouterJoueur(Joueur player1, Joueur player2);


    protected:

    private:
        std::vector<Joueur>MesJoueurs;
        int m_turn;
        std::string m_duelphase[3];
        std::vector<Carte>HisField;
        std::vector<Carte>HisHand;
        std::vector<Carte>HisGraveyard;
        std::vector<Carte>HisAleaDeck;
        std::queue<Carte>HisPlayDeck;
};

#endif // DUEL_H
