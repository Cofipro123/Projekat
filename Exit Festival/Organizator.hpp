#ifndef ORGANIZATOR_HPP_INCLUDED
#define ORGANIZATOR_HPP_INCLUDED
#include "Zaposleni.hpp"

class Organizator:public Zaposleni
{
private:
    int budzet;
public:
    Organizator(int b, tipPosla t, int p, int r, string i, string pr, int u, int brh):Zaposleni(t,p,r,i,pr,u,brh)
    {
        budzet=b;
    }
    Organizator():Zaposleni()
    {
        budzet=0;
    }
    void setCelo(int b, double pl, int r, string i, string p, int u, int brh)
        {
            budzet=b;
            plata=pl;
            radniDani=r;
            ime=i;
            prezime=p;
            uzrast=u;
            brojHromozoma=brh;
        }
};
#endif // ORGANIZATOR_HPP_INCLUDED
