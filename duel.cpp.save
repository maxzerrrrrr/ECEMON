#include "duel.hpp"


void Duel(int *choix, BITMAP* buffermenu, BITMAP* cases_terrain, BITMAP* cursor, BITMAP* terrain, BITMAP* cadre, BITMAP* cadre_b,BITMAP* buffer, BITMAP* terrain_b, BITMAP* cases_terrain_b, BITMAP* carte_m)
{
    while(*choix==2)
    {

        clear_bitmap(buffermenu);
        clear_bitmap(cadre_b);
        clear_bitmap(buffer);
        blit(terrain, buffermenu, 0,0,0,0, 800, 600);
        blit(terrain_b, cadre_b, 0,0,0,0,2300,1250);

        draw_sprite(buffermenu, cases_terrain,0,350);
        draw_sprite_vh_flip(buffermenu, cases_terrain,0,0);
        draw_sprite(cadre_b, cases_terrain_b,300,600);
        draw_sprite_vh_flip(cadre_b, cases_terrain_b,300,0);

        draw_sprite(cases_terrain_b, carte_m, 0,0);


        ///CREATION CADRE
        draw_sprite(buffermenu,cadre,600,0);
        draw_sprite(buffermenu,cursor,mouse_x,mouse_y);
        blit(buffermenu, buffer, 0,0,0,0, 800, 600);
        blit(cadre_b,buffer,(mouse_x+140)*2.1,(mouse_y)*1.55,602,2,196,286);
        blit(buffer,screen,0,0,0,0,800,600);

    }
}
END_OF_FUNCTION()
