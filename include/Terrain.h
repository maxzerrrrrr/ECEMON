#ifndef TERRAIN_H
#define TERRAIN_H

#include "Carte.h"

class Terrain : public Carte
{
public:
    Terrain();
    virtual ~Terrain();

    void AjouterCarteTerrain(Carte &maCarte, std::string nom, std::string domaine,int nbre_exemplaires,std::string path);


protected:

private:

};

#endif // TERRAIN_H
