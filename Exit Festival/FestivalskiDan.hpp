#ifndef FESTIVALSKIDAN_HPP_INCLUDED
#define FESTIVALSKIDAN_HPP_INCLUDED
#include "Nastup.hpp"
class FestivalskiDan{
protected:
    int dan;
    Nastup n;
public:
    FestivalskiDan(int d, string u, string i, bool p, string z, string o):n(u,i,p,z,o)
    {
        dan=d;
    }
};


#endif // FESTIVALSKIDAN_HPP_INCLUDED
