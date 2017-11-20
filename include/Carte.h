#ifndef CARTE_H
#define CARTE_H

#include  <iostream>
#include <allegro.h>
#include <vector>

class Carte
{
public:
    Carte();
    virtual ~Carte();

    void setNom(std::string _nom);
    std::string getNom();

    BITMAP* getBITMAP();
    void setBITMAP(const char* chemin);

    void setStock(bool stock);
    bool getStock();

    void setDomaine(int _domaine);
    std::string getDomaine();

    void setNbreExemplaire(int _ex);
    int getNbreExemplaire();

    virtual void AffichInfo(const char * chemin) const;
    virtual void AjouterCarte(std::string nom, std::string domaine, int nbre_exemplaires);


protected:
    BITMAP* image;
    std::string nomCarte;
    std::string m_domaine;
    int nbre_exemplaire;

private:

};

#endif // CARTE_H
