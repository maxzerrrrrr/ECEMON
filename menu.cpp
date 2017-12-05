#include "menu.hpp"

int menu(int* choix, BITMAP *buffermenu, BITMAP* mythologia, BITMAP* cursor, BITMAP* play, BITMAP* wallpaper, BITMAP* slogan)
{
    clear_bitmap(buffermenu);
    while(*choix==0)
    {
        clear_bitmap(buffermenu);
        blit(wallpaper, buffermenu,0,0,0,0,800,600);
        draw_sprite(buffermenu,play,50,550);
        draw_sprite(buffermenu, mythologia,100,0);
        blit(slogan,buffermenu,0,0,550,550,800,650);
        draw_sprite(buffermenu,cursor,mouse_x,mouse_y);
        blit(buffermenu,screen,0,0,0,0,800,600);

        ///CHOISIR JOUER
        if(*choix==0 && mouse_b && mouse_x>65 && mouse_x<148 && mouse_y>550 && mouse_y<600)
        {
            *choix=1;
            rest(1000);

        }
        ///CHOISIR QUITTER
        if(*choix==0 && mouse_b && mouse_x>180 && mouse_x<240 && mouse_y>550 && mouse_y<600)
        {
            *choix=10;
        }

    }

    return *choix;
}
