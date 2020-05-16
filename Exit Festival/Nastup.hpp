#ifndef NASTUP_HPP_INCLUDED
#define NASTUP_HPP_INCLUDED
#include "Stage.hpp"
#include "TerminNastupa.hpp"
class Nastup{
protected:
    string imeIzv;
    TerminNastupa t;
public:
    Nastup():t()
    {
        imeIzv="d";
    }
    Nastup(string u, int s, int m):t(s,m)
    {
        imeIzv=u;
    }
    TerminNastupa getTermin(){return t;}
};


#endif // NASTUP_HPP_INCLUDED
