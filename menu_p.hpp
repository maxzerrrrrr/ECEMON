#ifndef MENU_P_HPP
#define MENU_P_HPP

#include <allegro.h>
#include <iostream>
#include "Carte.h"
#include "Joueur.h"
#include "shop.hpp"



int menu_p(Deck d,Joueur j,int*  choix_joueur,BITMAP* save,BITMAP* joueur_c,std::vector <Joueur> Joueurs, std::vector <Carte> Collection,int *choix,BITMAP* terrain, BITMAP* buffermenu, BITMAP* cursor, BITMAP* screen, BITMAP* menup, BITMAP* cases_terrain, BITMAP* cadre, BITMAP* cadre_b, BITMAP* buffer,  BITMAP* terrain_b, BITMAP* cases_terrain_b, BITMAP* shop, BITMAP* carte_m, BITMAP*carte_m_s, BITMAP* carte_shop,BITMAP* joueur_b);

#endif // MENU_P_HPP
