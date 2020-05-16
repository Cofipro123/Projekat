#ifndef IZVODJAC_HPP_INCLUDED
#define IZVODJAC_HPP_INCLUDED
#include "Osoba.hpp"
#include "Zanr.hpp"
#include "Nastup.hpp"
class Izvodjac:public Osoba{
protected:
    bool domaci;
    double plata;
    Zanr z;
    Nastup n;
public:
    Izvodjac():z(),Osoba(),n()
     {
         domaci=false;
         plata=0;

     }
    //Napraviti construktor bez parametri
    Izvodjac(bool d, double pl, string z, string o, string si, bool p1, string im, string p, int u, int brh, string imeIz, int s, int m):z(z,o,si,p1) ,Osoba(im,p,u,brh),n(imeIz,s,m)
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
    Nastup getNastup(){return n;}
    void plan ()
    {

        cout<< "Vi izvodite: "<<z.getZanr()<< ". Budite na  "<<z.getStejdz().getIme()<< "stejdzu, u  "<<getNastup().getTermin().getSat()<<" sati i "<<getNastup().getTermin().getMin()<< " minuta"<<endl;
    }
};


#endif // IZVODJAC_HPP_INCLUDED
