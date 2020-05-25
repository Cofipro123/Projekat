#ifndef ZAPOSLENI_HPP_INCLUDED
#define ZAPOSLENI_HPP_INCLUDED
#include "Osoba.hpp"
#include <vector>
enum tipPosla {PANDUR, OBEZBEDJENJE, MEDTEHNICAR, VOLONTER, STANDZAHRANU,ORGANIZATOR};
class Zaposleni:public Osoba
{
protected:
    tipPosla t;
    double plata;
    int radniDani;
public:
    Zaposleni(tipPosla tt, double pl, int r, string i, string p, int u, int brh):Osoba(i,p,u,brh)
    {
        t=tt;
        plata=pl;
        radniDani=r;
    }
    Zaposleni():Osoba()
    {
        t=PANDUR;
        plata=0;
        radniDani=4;
    }
    void setCelo(double pl, int r, string i, string p, int u, int brh)
    {
        plata=pl;
        radniDani=r;
        ime=i;
        prezime=p;
        uzrast=u;
        brojHromozoma=brh;
    }
    void setTip (int x)
    {
        if(x == 1)
        {
            t=PANDUR;
        }
        else if(x == 2)
        {
            t=OBEZBEDJENJE;
        }
        else if(x == 3)
        {
            t=MEDTEHNICAR;
        }
        else if(x == 4)
        {
            t=VOLONTER;
        }
        else if(x == 5)
        {
            t=STANDZAHRANU;
        }
        else
        {
            t=ORGANIZATOR;
        }
    }
    void plan()
    {
        if(t == PANDUR)
        {
            cout<< "Molim Vas idite do kapija da pretresate ljude."<<endl;
        }
        else if(t == OBEZBEDJENJE)
        {
            cout<< "Molim Vas idite do stejdza na kome radite da odrzavate mir."<<endl;
        }
        else if(t == MEDTEHNICAR)
        {
            cout<< "Molim Vas idite do medicinskog objekta i budete u pripravnosti."<<endl;
        }
        else if(t == VOLONTER)
        {
            cout<< "Molim Vas idite do svog radnog mesta"<<endl;
        }
        else
        {
            cout<< "Molim Vas idite do standa za hranu i da cekate musterije"<<endl;
        }
    }
};


#endif // ZAPOSLENI_HPP_INCLUDED
