#ifndef NASTUP_HPP_INCLUDED
#define NASTUP_HPP_INCLUDED
#include "Stage.hpp"
class Nastup{
protected:
    string imeIzv;
    Stage s;
public:
    Nastup(string u, string i, bool p, string z, string o):s(i,p,z,o)
    {
        imeIzv=u;
    }
};


#endif // NASTUP_HPP_INCLUDED
