#ifndef CARTE_H
#define CARTE_H
#include <iostream>
#include <allegro.h>
#include <vector>
//#include "Duel.h"
#include "Joueur.h"
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

    void setNbEnergy(int x);
    int getNbEnergy()const;

    virtual void AffichInfo(const char * chemin) const;
    virtual void AjouterCarte(std::string nom, std::string domaine, int nbre_exemplaires);

    void Dryade(Duel duelA, Joueur player1);
    void Ange(Joueur player1);
    void DameBlanche(Joueur player2);
    void Agloolik(Joueur player1);
    void Aerico(Joueur player2);
    void Askafroa(Joueur player1);


protected:
    BITMAP* image;
    std::string nomCarte;
    std::string m_domaine;
    int nbre_exemplaire;
    int m_nbenergy;
    std::string m_type;

private:

};

#endif // CARTE_H
