#ifndef JOUEURDUEL_H
#define JOUEURDUEL_H

#include <Joueur.h>


class JoueurDuel : public Joueur
{
    public:
        JoueurDuel();
        virtual ~JoueurDuel();
    std::queue<Carte>getPlayDeck()const;
    std::vector<Carte>getField()const;
    std::vector<Carte>getHand()const;
    std::vector<Carte>getGraveyard()const;

    protected:

    private:
    std::vector<Carte>&Field;
    std::vector<Carte>&Hand;
    std::vector<Carte>&Graveyard;
    std::vector<Carte>AleaDeck;
    std::queue<Carte>&PlayDeck;
        unsigned int m_lifepoint = 8000;
};

#endif // JOUEURDUEL_H
