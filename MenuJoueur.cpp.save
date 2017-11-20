#include "MenuJoueur.hpp"

Joueur menuJoueur(int*  choix_joueur,BITMAP* save,BITMAP* joueur_c,std::vector<Joueur> Joueurs, int* choix, BITMAP* buffer, BITMAP* joueur_b, BITMAP* cursor)
{
    rest(500);
    Joueur j;
    int num=0;
    int num_save=0;
    Deck monDeck;
    const char* trans;
    Joueurs=j.RecupJoueur();
    std::string chemin;

    if(Joueurs.size()!=0)
    {
        monDeck=j.RecupDeck(num_save);
    }
    if(Joueurs.size()==0)
    {

        j.CreerJoueur();
        Joueurs=j.RecupJoueur();
        j.CreationDeck(Joueurs.size()-1);
        monDeck=j.RecupDeck(num_save);


    }


    while(*choix==2)
    {

        clear_bitmap(buffer);

        blit(joueur_b,buffer,0,0,0,0,800,600);
        blit(joueur_c,buffer,0,0,50,140,800,600);

        ///AFFICHAGE
        if(Joueurs.size()!=0)
        {
            ///CONVERSION DU STRING
            trans=Joueurs[num].getNomJoueur().c_str();

            textprintf_ex(buffer,font,500,500,makecol(255,255,255), -1,  "Nom du joueur : ");
            textout_ex(buffer,font,trans,630,500,makecol(255,255,255),-1);
            textprintf_ex(buffer,font,500,510,makecol(255,255,255), -1,  "Nombre de victoires du joueur : %d ", Joueurs[num].getVictoire() );
            textprintf_ex(buffer,font,500,520,makecol(255,255,255), -1,  "Nombre de defaites du joueur : %d ", Joueurs[num].getDefaite() );
            textprintf_ex(buffer,font,500,530,makecol(255,255,255), -1,  "Nombre de cartes dans deck : %d", monDeck.getNbreCartes());
            textprintf_ex(buffer,font,420,10,makecol(255,255,255), -1,  "%d", Joueurs[num].getMoney());

        }

        ///SUIVANT DANS MENU
        if(mouse_b &&  mouse_x>560 && mouse_x<700 && mouse_y>170 && mouse_y<280)
        {
            rest(200);

            if(num==Joueurs.size()-1)
            {
                num=0;
            }
            else
            {
                num++;
            }

        }
        ///PRECEDENT DANS MENU
        if(mouse_b && mouse_x>560 && mouse_x<700 && mouse_y>70 && mouse_y<180)
        {
            rest(200);
            if(num==0)
            {
                num=Joueurs.size()-1;
            }
            else
            {
                num--;
            }


        }
        ///CREER UN JOUEUR
        if(mouse_b && mouse_x>510 && mouse_x<780 && mouse_y>370 && mouse_y<410)
        {
            rest(200);
            j.CreerJoueur();
            Joueurs=j.RecupJoueur();
            j.CreationDeck(Joueurs.size()-1);
            monDeck=j.RecupDeck(num_save);
        }

        ///SI ON VALIDE
        if(mouse_b && mouse_x>730 && mouse_x<780 && mouse_y>420 && mouse_y<455)
        {
            rest(200);
            *choix_joueur=1;
            num_save=num;
            monDeck=j.RecupDeck(num_save);
            j=Joueurs[num_save];
            j.setDeck(monDeck);
        }
        if(*choix_joueur==1 && num_save==num)
            draw_sprite(buffer,save,510,420);

        ///QUITTER
        if(mouse_b && mouse_x>770 && mouse_x<790 && mouse_y >10 && mouse_y<30)
        {
            *choix=1;
        }

        draw_sprite(buffer,cursor,mouse_x,mouse_y);
        blit(buffer,screen,0,0,0,0,800,600);
    }

    return j;
}
END_OF_FUNCTION()
