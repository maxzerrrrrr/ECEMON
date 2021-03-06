#ifndef ENERGIE_H
#define ENERGIE_H
#include <iostream>

class Energie : public Carte
{
public:
    Energie();
    virtual ~Energie();

    void setPE(int _energie);
    int getPE();

    void setDomaine(std::string _domaine);
    std::string getDomaine();

    virtual void AffichInfo(const char* chemin);
    virtual void AjouterCarteEnergie(Carte &maCarte, std::string nom, std::string domaine,int energie,int nbre_exemplaires,std::string path);

protected:

private:
    int  m_point_energie;


};

#endif // ENERGIE_H
