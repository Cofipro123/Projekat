#ifndef ZAPOSLENI_HPP_INCLUDED
#define ZAPOSLENI_HPP_INCLUDED
#include "Osoba.hpp"
#include <vector>
enum tipPosla{PANDUR, OBEZBEDJENJE, MEDTEHNICAR, VOLONTER, STANDZAHRANU};
class Zaposleni:public Osoba{
protected:
    tipPosla t;
    double plata;
    int radniDani;
    vector <Osoba*> osobe;
public:
    Zaposleni(tipPosla tt, double pl, int r, string i, string p, int u, int brh):Osoba(i,p,u,brh)
    {
        t=tt;
        plata=pl;
        radniDani=r;
    }

    void dodajVector(Osoba &o)
    {
        osobe.push_back(&o);
        cout<< "Dodat element u madafakin vector"<<endl;
    }
    void brisVector ()
    {
        string lajna;
        cin>>lajna;
        bool izbrisan=false;
        for(auto i = osobe.begin(); i != osobe.end(); i++)
        {
            if((*i)->getIme()==lajna)
            {
                osobe.erase(i);
                izbrisan=true;
                break;
            }
        }
        if(izbrisan)
        cout<<"Izbrisan madafakin vector"<<endl;
    }
    void ispis()
    {
       for(auto i = osobe.begin(); i != osobe.end(); i++)
        {
            cout<<**i<<endl;
        }
    }
    void pretraga ()
    {
        string lajna;
        cin>>lajna;
        for(auto i = osobe.begin(); i != osobe.end(); i++)
        {
            if((*i)->getIme()==lajna)
            {
                cout<<**i<<endl;
            }
            else
            {
                cout<< "Dambo";
            }
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
