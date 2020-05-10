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
    Izvodjac():z(),Osoba()
     {
         domaci=false;
         plata=0;

     }
    //Napraviti construktor bez parametri
    Izvodjac(bool d, double pl, string z, string o, string i, string p, int u, int brh):z(z,o) ,Osoba(i,p,u,brh)
    {
        domaci=d;
        plata=pl;
    }
    friend ostream& operator<<(ostream& izlaz, const Izvodjac &i){

        izlaz<<"Izvodjac - ispis"<<endl;

        izlaz<<"Ime: "<<i.ime<<endl;

        izlaz<<"Prezime:"<<i.prezime<<endl;

        izlaz<<"Uzrast: "<<i.uzrast<<endl;

        izlaz<<"Broj hromozoma: "<<i.brojHromozoma<<endl;

        izlaz<<"Domaci: "<<i.domaci<<endl;

        izlaz<<"Plata: "<<i.plata<<endl;

        izlaz<<"Zanr: "<<i.z<<endl;
        return izlaz;
    }
};


#endif // IZVODJAC_HPP_INCLUDED
