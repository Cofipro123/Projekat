#ifndef POSETILAC_HPP_INCLUDED
#define POSETILAC_HPP_INCLUDED
#include "Osoba.hpp"
enum vrstaUlaznice{JEDNODNEVNA, NARUKVICA, VIP, VIPGOLD};
class Posetilac:public Osoba{
protected:
    string favZanr;
    vrstaUlaznice u;
    int pare;
    static int brPosetilaca;
public:
    Posetilac(string f, vrstaUlaznice uu, int p, string i, string prz, int g, int brh):Osoba(i,prz,g,brh)
    {
        favZanr=f;
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
        if(x=1)
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
        else if(x=2)
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
        else if(x=3)
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
        else if(x=4)
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
    string getFavZanr(){return favZanr;}
   /* void unos (Izvodjac iz[], Stage s[])
    {
        string ime;
        string prezime;
        int uzrast;
        int brh;
        string fz;
        vrstaUlaznice vu;
        int p;

        cin>>i;
        cin>>prz;
        cin>>uz;
        cin>>brh;
        cin>>fz;
        cin>>vu;
        cin>>p;
        Posetilac(fz,vu,pi,prz,uz,brh);
        for(i=0;i<3;i++)
        {
            if(s[i].z.getZanr() == fz)
            {
                cout<<"Exit team bi vam preporucio "<< s.ime<< " stage";
            }
        }
        for(i=0;i<3;i++)
        {
            if(iz[i].z.getZanr() == fz)
            {
                cout<<" i " i.ime <<" izvodjaca"<<endl;
            }
        }

    }*/

};


#endif // POSETILAC_HPP_INCLUDED
