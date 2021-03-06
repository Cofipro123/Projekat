#ifndef NASTUP_HPP_INCLUDED
#define NASTUP_HPP_INCLUDED
#include "Stage.hpp"
#include "TerminNastupa.hpp"
class Nastup
{
protected:
    string imeIzv;
    TerminNastupa t;
    Zanr z;
public:
    Nastup():t(),z()
    {
        imeIzv="d";
    }
    Nastup(string u, int s, int m, string z, string i, bool p):t(s,m),z(z,i,p)
    {
        imeIzv=u;
    }
    TerminNastupa getTermin()
    {
        return t;
    }
    friend ostream& operator<<(ostream& izlaz, const Nastup &n)
    {

        izlaz<<"Ime izvodjaca: "<<n.imeIzv<<endl;

        izlaz<<n.t;

        izlaz<<n.z<<endl;
        return izlaz;
    }

    string getImeIzv()
    {
        return imeIzv;
    }
    Zanr getZ()
    {
        return z;
    }
};


#endif // NASTUP_HPP_INCLUDED
