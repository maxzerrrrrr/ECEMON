#ifndef MAGASIN_H
#define MAGASIN_H

#include <iostream>
#include <allegro.h>
#include <vector>
#include <fstream>
#include "Deck.h"
#include "Monstre.h"
#include "Magie.h"
#include "Piege.h"
#include "Energie.h"
#include "Terrain.h"
#include "Achat.h"

class Joueur;

class Magasin
{
public:
    Magasin();
    virtual ~Magasin();

    void setStock(int _stock);
    int getStock();

    std::vector<Carte> RecupFichier();

protected:

private:
    int nbre_cartes_stock;
    std::string nomMagasin;
    std::vector<Carte> CollectionMagasin;
};

#endif // MAGASIN_H
