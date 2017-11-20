#ifndef SHOP_HPP
#define SHOP_HPP

#include <allegro.h>
#include <vector>
#include "Magasin.h"
#include "Carte.h"
#include "Joueur.h"

std::vector<Carte> Shop(Deck d,std::vector <Carte> Collection,int* choix, BITMAP* buffer, BITMAP* shop, BITMAP* screen, BITMAP* cursor, BITMAP* carte_m_s, BITMAP* carte_shop);

#endif // SHOP_HPP
