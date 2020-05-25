#ifndef FESTIVALSKIDAN_HPP_INCLUDED
#define FESTIVALSKIDAN_HPP_INCLUDED
#include "Nastup.hpp"
#include <vector>
class FestivalskiDan
{
protected:
    int dan;
    vector<Nastup*> nastupi;
public:
    FestivalskiDan(int d)
    {
        dan=d;
    }
    FestivalskiDan ()
    {
        dan=1;
    }

    void setDan (int x)
    {
        dan=x;
    }
    int getDan ()
    {
        return dan;
    }
    friend ostream& operator<<(ostream& izlaz, const FestivalskiDan &f)
    {

        izlaz<<"Ispis"<<endl;

        izlaz<<"dan: "<<f.dan<<endl;

        return izlaz;
    }
    void dodajVector(Nastup &n)
    {
        nastupi.push_back(&n);
        ///cout<< "Dodat element u vector"<<endl;
    }
    void brisVector ()
    {
        string lajna;
        cin>>lajna;
        bool izbrisan=false;
        for(auto i = nastupi.begin(); i != nastupi.end(); i++)
        {
            if((*i)->getImeIzv()==lajna)
            {
                nastupi.erase(i);
                izbrisan=true;
                break;
            }
        }
        if(izbrisan)
            cout<<"Izbrisan vector"<<endl;
    }
    void ispis()
    {
        for(auto i = nastupi.begin(); i != nastupi.end(); i++)
        {
            cout<<**i<<endl;
        }
    }
    void pretraga ()
    {
        string lajna;
        cin>>lajna;
        for(auto i = nastupi.begin(); i != nastupi.end(); i++)
        {
            if((*i)->getImeIzv()==lajna)
            {
                cout<<**i<<endl;
            }
            else
            {
                cout<< "Dambo";
            }
        }
    }
    void uporedi (Posetilac &p)
    {
        for(auto i=nastupi.begin(); i != nastupi.end(); i++)
        {
            if(p.getZ().getZanr() == (*i)->getZ().getZanr())
            {
                cout<<(**i)<<endl;
            }
        }
    }
};


#endif // FESTIVALSKIDAN_HPP_INCLUDED
