#ifndef FIELD_H
#define FIELD_H
#include <queue>
#include <vector>
#include <Joueur.h>

class Field
{
    public:
        Field();
        virtual ~Field();

    protected:

    private:
        std::vector<Carte>MyField;
        std::vector<Carte>Hand;
        std::vector<Carte>Graveyard;
        std::vector<Carte>AleaDeck;
        std::queue<Carte>Deck;
};

#endif // FIELD_H
