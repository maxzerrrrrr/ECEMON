#include "MenuJoueur.hpp"
#include "shop.hpp"
#include "duel.hpp"


int menu_p(Deck d,Joueur j, int*  choix_joueur,BITMAP*save,BITMAP* joueur_c,std::vector<Joueur> Joueurs, std::vector <Carte> Collection,int *choix,BITMAP* terrain, BITMAP* buffermenu, BITMAP* cursor, BITMAP* screen, BITMAP* menup, BITMAP* cases_terrain, BITMAP* cadre, BITMAP* cadre_b, BITMAP* buffer,  BITMAP* terrain_b, BITMAP* cases_terrain_b, BITMAP* shop, BITMAP* carte_m, BITMAP* carte_m_s, BITMAP* carte_shop, BITMAP* joueur_b)
{
    while(*choix==1)
    {

        clear_bitmap(buffermenu);
        blit(menup, buffermenu,0,0,0,0,800,600);
        draw_sprite(buffermenu,cursor,mouse_x,mouse_y);
        blit(buffermenu, screen, 0, 0, 0, 0, 800, 600);
        if(*choix==1 &&  mouse_b && mouse_x>590 && mouse_x<780 && mouse_y >30 && mouse_y<72)
        {
            *choix=2;
            j=menuJoueur(choix_joueur,save,joueur_c,Joueurs,choix,buffer,joueur_b,cursor);
            d=j.getDeck();
            for(int i=0; i<d.getVectorDeck().size();i++)
            {
                std::cout << "\nType des cartes : " << d.getVectorDeck()[i].getDomaine() << std::endl;
                std::cout << "Nom de carte : " << d.getVectorDeck()[i].getNom() << std::endl;
                std::cout << "Nbre de carte : " << d.getVectorDeck()[i].getNbreExemplaire() << std::endl;
            }
        }
        if(*choix==1 && mouse_b && mouse_x>640 && mouse_x<770 && mouse_y>100 && mouse_y<142)
        {
            *choix=2;

        }
        if(*choix==1 && mouse_b && mouse_x>640 && mouse_x<770 && mouse_y>170 && mouse_y<210)
        {
            *choix=2;
            std::cout << "VECTOR : " << d.getVectorDeck().size() << std::endl;
              if(*choix_joueur!=0)
              {
                   Collection=Shop(d,Collection,choix, buffer, shop, screen, cursor, carte_m_s,carte_shop);
              }
              else
              {
                  *choix=1;
              }

        }
        if(*choix==1 && mouse_b && mouse_x>640 && mouse_x<770 && mouse_y>240 && mouse_y<290)
        {
            *choix=2;
            Duel(choix, buffermenu,cases_terrain,cursor, terrain,cadre,cadre_b, buffer,terrain_b,cases_terrain_b, carte_m);

        }
        if(*choix==1 && mouse_b && mouse_x>680 && mouse_x<770 && mouse_y>340 && mouse_y<390)
        {
            *choix=10;

        }
    }

    return *choix;
}
