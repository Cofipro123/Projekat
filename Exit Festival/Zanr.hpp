#ifndef ZANR_HPP_INCLUDED
#define ZANR_HPP_INCLUDED
#include "Stage.hpp"
class Zanr
{
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
    void setZanr(string z)
    {
        zanr=z;
    }
    string getZanr()
    {
        return zanr;
    }
    friend ostream& operator<<(ostream& izlaz, const Zanr &z)
    {


        izlaz<<"Naziv Zanra: "<<z.zanr<<endl;

        izlaz<<"Stage: "<<z.s<<endl;

        return izlaz;
    }
    Stage getStejdz()
    {
        return s;
    }
};



#endif // ZANR_HPP_INCLUDED
