#ifndef ZANR_HPP_INCLUDED
#define ZANR_HPP_INCLUDED
#include "Stage.hpp"
class Zanr{
protected:
    string zanr;
    Stage s;
public:
    Zanr():s()
    {
        zanr="";
    }
    Zanr(string z, string i, bool p):s(i,p)
    {
        zanr=z;

    }
    void setZanr(string z){zanr=z;}
    string getZanr(){return zanr;}
    friend ostream& operator<<(ostream& izlaz, const Zanr &z){

        izlaz<<"Zanr - ispis"<<endl;

        izlaz<<"Naziv Zanra: "<<z.zanr<<endl;

        return izlaz;
    }
    Stage getStejdz(){return s;}
};



#endif // ZANR_HPP_INCLUDED
