#ifndef POSETILAC_HPP_INCLUDED
#define POSETILAC_HPP_INCLUDED
#include "Osoba.hpp"
#include "Zanr.hpp"
enum vrstaUlaznice{JEDNODNEVNA, NARUKVICA, VIP, VIPGOLD};
class Posetilac:public Osoba{
protected:
    Zanr z;
    vrstaUlaznice u;
    int pare;
    static int brPosetilaca;
public:
    Posetilac(string f, vrstaUlaznice uu, int p, string i, string prz, int g, int brh, string zi, string o, string si, bool pr):Osoba(i,prz,g,brh),z(zi,o,si,pr)
    {
        u=uu;
        pare=p;
        brPosetilaca++;
        cout<<"Ima "<<brPosetilaca<<" posetilaca"<<endl;
    }
    bool kupi ()
    {
        int x;
        cout<<"Pozdrav, posetioce. Molim Vas da izaberete sta zelite da kupite."<<endl;
        cout<<"Vase trenutno stanje na racunu je: "<<pare<<endl;
        cout<<"1. Pljeskavica-300 dinara"<<endl<<"2. Hot dog-250 dinara"<<endl<<"3. Pizza-200 dinara"<<endl<<"4. Smirnoff ice-300 dinara"<<endl;
        cin>> x;
        if(x==1)
        {
            if(pare>=300){
                cout<<"Uzivajte u vasoj pljeskavici!"<<endl;
                pare-=300;
                return true;
            }
            else{
                return false;
            }
        }
        else if(x==2)
        {
            if(pare>=250){
                cout<<"Uzivajte u vasem hot dogu!"<<endl;
                pare-=250;
                return true;
            }
            else{
                return false;
            }
        }
        else if(x==3)
        {
            if(pare>=200){
                cout<<"Uzivajte u vasoj pizzi!"<<endl;
                pare-=200;
                return true;
            }
            else{
                return false;
            }
        }
        else if(x==4)
        {
            if(pare>=300){
                cout<<"Uzivajte u vasem Smirnoff ice-u!"<<endl;
                pare-=300;
                return true;
            }
            else{
                return false;
            }
        }
    };
    void plan ()
    {
        cout<< "Vas omiljeni zanr je: "<<z.getZanr()<< " Stoga Vam preporucujemo "<<z.getStejdz().getIme()<<endl;
    }
};


#endif // POSETILAC_HPP_INCLUDED
