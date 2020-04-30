#ifndef IZVODJAC_HPP_INCLUDED
#define IZVODJAC_HPP_INCLUDED
#include "Osoba.hpp"
#include "Zanr.hpp"
class Izvodjac:public Osoba{
protected:
    bool domaci;
    double plata;
    Zanr z;
public:
    Izvodjac(bool d, double pl, string z, string o, string i, string p, int u, int brh):z(z,o) ,Osoba(i,p,u,brh)
    {
        domaci=d;
        plata=pl;
    }
};


#endif // IZVODJAC_HPP_INCLUDED
