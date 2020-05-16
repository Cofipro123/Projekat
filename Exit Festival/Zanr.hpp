#ifndef ZANR_HPP_INCLUDED
#define ZANR_HPP_INCLUDED
#include "Stage.hpp"
class Zanr{
protected:
    string zanr;
    string opis;
    Stage s;
public:
    Zanr():s()
    {
        zanr="";
        opis="";
    }
    Zanr(string z, string o, string i, bool p):s(i,p)
    {
        zanr=z;
        opis=o;
    }
    string getZanr(){return zanr;}
    friend ostream& operator<<(ostream& izlaz, const Zanr &z){

        izlaz<<"Zanr - ispis"<<endl;

        izlaz<<"Naziv Zanra: "<<z.zanr<<endl;

        izlaz<<"Opis istog:"<<z.opis<<endl;

        return izlaz;
    }
    Stage getStejdz(){return s;}
};



#endif // ZANR_HPP_INCLUDED
