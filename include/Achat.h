#ifndef ACHAT_H
#define ACHAT_H

#include "Carte.h"



class Achat
{
public:
    Achat();
    virtual ~Achat();

    void VendreCarte();

protected:

private:
    int m_argent;

};

#endif // ACHAT_H
