#ifndef IZVODJAC_HPP_INCLUDED
#define IZVODJAC_HPP_INCLUDED
class Izvodjac:public Osoba{
protected:
    bool domaci;
    double plata;
public:
    Izvodjac(bool d, double p, string i, string p, int u, int brh):Osoba(i,p,u,brh)
    {
        domaci=d;
        plata=p;
        ime=i;
        prezime=p;
        uzrast=u;
        brojHromozoma=b;
    }
};


#endif // IZVODJAC_HPP_INCLUDED
