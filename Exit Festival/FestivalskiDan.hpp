#ifndef FESTIVALSKIDAN_HPP_INCLUDED
#define FESTIVALSKIDAN_HPP_INCLUDED
#include "Nastup.hpp"
class FestivalskiDan{
protected:
    int dan;
    Nastup n[10];
public:
    FestivalskiDan(int d, string u, string i, bool p):n(u,i,p)
    {
        dan=d;
    }
};


#endif // FESTIVALSKIDAN_HPP_INCLUDED
