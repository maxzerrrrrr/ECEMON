#ifndef DUEL_H
#define DUEL_H
#include "Field.h"
#include "Joueur.h"
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
    std::vector<Joueur> getMesjoueurs()const;
    void AjouterJoueur(Joueur player1, Joueur player2);
    std::queue<Carte>getMyPlayDeck()const;
    std::vector<Carte>getMyField()const;
    std::vector<Carte>getMyHand()const;
    std::vector<Carte>getMyGraveyard()const;
    std::queue<Carte>getHisPlayDeck()const;
    std::vector<Carte>getHisField()const;
    std::vector<Carte>getHisHand()const;
    std::vector<Carte>getHisGraveyard()const;


protected:

private:
    std::vector<Joueur>MesJoueurs;
    int m_turn;
    std::string m_duelphase[3];
    std::vector<Carte>&Field;
    std::vector<Carte>&Hand;
    std::vector<Carte>&Graveyard;
    std::vector<Carte>AleaDeck;
    std::queue<Carte>&PlayDeck;
    std::vector<Carte>&HisField;
    std::vector<Carte>&HisHand;
    std::vector<Carte>&HisGraveyard;
    std::vector<Carte>HisAleaDeck;
    std::queue<Carte>&HisPlayDeck;
};

#endif // DUEL_H
