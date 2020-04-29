#ifndef FESTIVALSKIDAN_HPP_INCLUDED
#define FESTIVALSKIDAN_HPP_INCLUDED
class FestivalskiDan{
protected:
    int dan;
    Nastup n[10];
public:
    FestivalskiDan(int d, string u, string i, bool p):Nastup(u,i,p)
    {
        dan=d;
        imeIzv=u;
        ime=i;
        profesorkinOmiljeniStejdz=p;
    }
};


#endif // FESTIVALSKIDAN_HPP_INCLUDED
