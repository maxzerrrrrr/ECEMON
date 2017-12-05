#include "shop.hpp"

std::vector<Carte> Shop(Deck d,std::vector <Carte> Collection,int *choix, BITMAP* buffer, BITMAP* shop, BITMAP* screen, BITMAP* cursor, BITMAP*  carte_m_s, BITMAP* carte_shop)
{
    rest(500);
    Carte maCarte;
    Magasin m;
    int num=0;

    while(*choix==2)
    {
        clear_bitmap(buffer);
        blit(shop,buffer,0,0,0,0,800,600);
        textprintf_ex(buffer,font,500,430,makecol(255,255,255), -1,  "Nombre de cartes restantes : %d ", Collection[num].getNbreExemplaire());

        blit(Collection[num].getBITMAP(), buffer,0,0,100,140,800,600);

        ///PRENDRE DANS STOCK
        if(mouse_b && mouse_x>680 && mouse_x<780 && mouse_y>370 && mouse_y<400)
        {
            int valeur_tab;
            std::cout << "OK" << std::endl;
            d.getVectorDeck().push_back(Collection[num]);
            Collection[num].setNbreExemplaire(Collection[num].getNbreExemplaire()-1);
            rest(300);

            for(int i=0; i<17; i++)
            {
                 std::cout << " Case "<< i << " : " << d.getVectorDeck()[i].getNom() << std::endl;
            }

        }


        ///SUIVANT DANS CARTES
        if(mouse_b &&  mouse_x>560 && mouse_x<700 && mouse_y>170 && mouse_y<280)
        {

            rest(200);
            if(num!=83)
                num++;
            else
                num=0;


        }

        ///PRECEDENT DANS CARTES
        if(mouse_b && mouse_x>560 && mouse_x<700 && mouse_y>70 && mouse_y<180)
        {

            rest(200);
            if(num!=0)
                num--;
            else
                num=83;

        }

        ///QUITTER
        if(mouse_b && mouse_x>770 && mouse_x<790 && mouse_y >10 && mouse_y<30)
        {
            *choix=1;
        }

        draw_sprite(buffer,cursor,mouse_x,mouse_y);
        blit(buffer,screen,0,0,0,0,800,600);

    }

    return Collection;

}
END_OF_FUNCTION()
