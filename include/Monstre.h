#ifndef MONSTRE_H
#define MONSTRE_H

#include "Carte.h"
#include "Energie.h"
#include <iostream>

class Monstre : public Carte
{
public:
    Monstre();
    virtual ~Monstre();

    void setEnergie(int _energie);
    int getEnergie();

    void setSpec(bool _spec);
    bool getSpec();

    void setATK(int _atk);
    int getATK();

    void setDEF(int _def);
    int getDEF();

    void setDomaine(std::string _domaine);
    std::string getDomaine();

    virtual void AffichInfo(const char* chemin) const;
    virtual void AjouterCarteMonstre(Carte &maCarte,std::string nom, std::string domaine, int energie, bool special, int atk, int def, int nbre_exemplaires, std::string path);

protected:
    BITMAP* image;

private:
    int m_nbre_energie;
    bool m_special;
    int m_atk;
    int m_def;


};

#endif // MONSTRE_H
