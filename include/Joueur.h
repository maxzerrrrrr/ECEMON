#ifndef JOUEUR_H
#define JOUEUR_H

#include <iostream>
#include <allegro.h>
#include <vector>
#include <queue>
#include <fstream>
#include "Deck.h"
#include "Monstre.h"
#include "Magie.h"
#include "Achat.h"


class Magasin;

class Joueur
{
public:
    Joueur();
    Joueur(std::string _nom, int nbre_carte_max);
    virtual ~Joueur();

    int getVictoire();
    int getDefaite();
    std::string getNomJoueur();
    int getMoney();
    Deck getDeck();

    void setVictoire(int _victoire);
    void setDefaite(int _defaite);
    void setNomJoueur(std::string _nom);
    void setMoney(int _money);
    void setDeck(Deck _deck);

    void AfficherDeck();
    void CreerJoueur();
    std::vector<Joueur> RecupJoueur();
    void CreationDeck(int num);
    Deck RecupDeck(int num);
    int getLP()const;
    void AfficherDeck(Deck d);
    std::vector<Carte>getMesjoueurs()const;
    std::queue<Carte>getPlayDeck()const;
    std::vector<Carte>getAleaDeck()const;
    std::vector<Carte>getField()const;
    std::vector<Carte>getHand()const;
    std::vector<Carte>getGraveyard()const;
    void AcheterCarte(Magasin *m);

protected:

private:
    std::vector <Joueur> MesJoueurs;
    std::vector<Carte>Field;
    std::vector<Carte>Hand;
    std::vector<Carte>Graveyard;
    std::vector<Carte>AleaDeck;
    std::queue<Carte>PlayDeck;
    Deck JDeck;
    std::string m_nom="undefined";
    int m_money;
    int m_nbre_victoires;
    int m_nbre_defaites;
    int m_lifepoint = 8000;
};

#endif // JOUEUR_H
