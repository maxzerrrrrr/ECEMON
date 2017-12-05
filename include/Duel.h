#ifndef DUEL_H
#define DUEL_H
#include "Field.h"
#include "JoueurDuel.h"
#include "Carte.h"
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
    void draw();
    void win();
    void Lose();
    void attack(Carte card1, Carte target)
    void activate(Carte card1);
    void defausse(int i);
    void choosecard(Carte card1);
    void attack(Carte card1, Carte card2);
    void destroy(Carte card1);
    void shuffle();
    void getdestroy(Carte card1);
    int getturn()const;
    void setturn();
    std::string getPhase()const;
    void setPhase(int x);
    std::vector<JoueurDuel> getMesjoueurs()const;
    void AjouterJoueur(Joueur player1, Joueur player2);


protected:

private:
    std::vector<JoueurDuel>MesJoueurs;
    int m_turn;
    std::string m_duelphase[3];
};

#endif // DUEL_H
