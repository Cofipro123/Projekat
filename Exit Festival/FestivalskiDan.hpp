#ifndef FESTIVALSKIDAN_HPP_INCLUDED
#define FESTIVALSKIDAN_HPP_INCLUDED
#include "Nastup.hpp"
class FestivalskiDan{
protected:
    int dan;
    Nastup n;
public:
    FestivalskiDan(int d, string u, int s, int m):n(u,s,m)
    {
        dan=d;
    }
};


#endif // FESTIVALSKIDAN_HPP_INCLUDED
