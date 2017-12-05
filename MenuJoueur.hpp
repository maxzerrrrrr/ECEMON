#ifndef MENUJOUEUR_HPP
#define MENUJOUEUR_HPP

#include <allegro.h>
#include <iostream>
#include "Joueur.h"

Joueur menuJoueur(int* choix_joueur,BITMAP* save,BITMAP* joueur_c,std::vector<Joueur> Joueurs,int* choix, BITMAP* buffer, BITMAP* joueur_b,BITMAP* cursor);

#endif // MENUJOUEUR_HPP
