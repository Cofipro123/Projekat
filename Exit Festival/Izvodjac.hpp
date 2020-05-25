#ifndef IZVODJAC_HPP_INCLUDED
#define IZVODJAC_HPP_INCLUDED
#include "Osoba.hpp"
#include "Zanr.hpp"
#include "Nastup.hpp"
class Izvodjac:public Osoba
{
protected:
    bool domaci;
    double plata;
    Nastup n;
public:
    Izvodjac():Osoba(),n()
    {
        domaci=false;
        plata=0;
        plan();
    }
    //Napraviti construktor bez parametri
    Izvodjac(bool d, double pl, string im, string p, int u, int brh, string imeIz, int s, int m, string z, string si, bool p1):Osoba(im,p,u,brh),n(imeIz,s,m,z,si,p1)
    {
        domaci=d;
        plata=pl;
    }
    friend ostream& operator<<(ostream& izlaz, const Izvodjac &i)
    {

        izlaz<<"Izvodjac - ispis"<<endl;

        izlaz<<"Ime: "<<i.ime<<endl;

        izlaz<<"Prezime:"<<i.prezime<<endl;

        izlaz<<"Uzrast: "<<i.uzrast<<endl;

        izlaz<<"Broj hromozoma: "<<i.brojHromozoma<<endl;

        izlaz<<"Domaci: "<<i.domaci<<endl;

        izlaz<<"Plata: "<<i.plata<<endl;

        izlaz<<"Nastup: "<<i.n<<endl;
        return izlaz;
    }
    Nastup getNastup()
    {
        return n;
    }
    void plan ()
    {

        cout<< "Vi izvodite: "<<n.getZ().getZanr()<< ". Budite na  "<<n.getZ().getStejdz().getIme()<< "stejdzu, u  "<<getNastup().getTermin().getSat()<<" sati i "<<getNastup().getTermin().getMin()<< " minuta"<<endl;
    }
};


#endif // IZVODJAC_HPP_INCLUDED
