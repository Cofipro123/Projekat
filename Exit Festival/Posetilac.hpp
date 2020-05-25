#ifndef POSETILAC_HPP_INCLUDED
#define POSETILAC_HPP_INCLUDED
#include "Osoba.hpp"
#include "Zanr.hpp"

enum vrstaUlaznice {JEDNODNEVNA, NARUKVICA, VIP, VIPGOLD};
class Posetilac:public Osoba
{
protected:
    Zanr z;
    vrstaUlaznice u;
    int pare;
    static int brPosetilaca;
public:
    Posetilac( vrstaUlaznice uu, int p, string i, string prz, int g, int brh, string z, string si, bool pr):Osoba(i,prz,g,brh),z(z,si,pr)
    {
        u=uu;
        pare=p;
        brPosetilaca++;
    }
    Posetilac():Osoba()
    {
        u=NARUKVICA;
        pare=0;
        brPosetilaca++;
    }
    void setCelo(int p, string i, string prz, int g, int brh, string zi)
    {
        pare=p;
        ime=i;
        prezime=prz;
        uzrast=g;
        brojHromozoma=brh;
        z.setZanr(zi);
    }
    vrstaUlaznice getVrsta()
    {
        return u;
    }
    void setVrsta(int x)
    {
        if(x == 1)
        {
            u=JEDNODNEVNA;
        }
        else if(x == 1)
        {
            u=NARUKVICA;
        }
        else if(x == 1)
        {
            u=VIP;
        }
        else
        {
            u=VIPGOLD;
        }
    }


    Zanr getZ()
    {
        return z;
    }

    friend ostream& operator<<(ostream& izlaz, const Posetilac &p)
    {

        izlaz<<"Posetilac - ispis"<<endl;

        izlaz<<"Ime: "<<p.ime<<endl;

        izlaz<<"Prezime: "<<p.prezime<<endl;

        izlaz<<"Godine: "<<p.uzrast<<endl;

        izlaz<<"Broj hromozoma: "<<p.brojHromozoma<<endl;

        izlaz<<"Pare: "<<p.pare<<endl;

        return izlaz;
    }

    void dodajPare (int p)
    {
        pare+=p;
    }
    void kupi ()
    {
        int x;
        int y;
        int t;
        cout<<"Pozdrav, posetioce. Molim Vas da izaberete sta zelite da kupite."<<endl;
        cout<<"Vase trenutno stanje na racunu je: "<<pare<<endl;
        cout<<"1. Pljeskavica-300 dinara"<<endl<<"2. Hot dog-250 dinara"<<endl<<"3. Pizza-200 dinara"<<endl<<"4. Smirnoff ice-300 dinara"<<endl;
        cin>> x;
        if(x==1)
        {
            if(pare>=300)
            {
                cout<<"Uzivajte u vasoj pljeskavici!"<<endl;
                pare-=300;
            }
            else
            {
                cout<< "Molim vas uplatite jos para. To mozete uraditi pritiskom tastera 1. Ako ipak necete, pritisnite 0"<<endl;
                cin>>y;

                if(y == 1)
                {
                    cout<< "Odaberite sumu novca koju zelite da uplatite"<<endl;
                    cin>>t;
                    dodajPare(t);
                }
                kupi();
            }
        }
        else if(x==2)
        {
            if(pare>=250)
            {
                cout<<"Uzivajte u vasem hot dogu!"<<endl;
                pare-=250;
            }
            else
            {
                cout<< "Molim vas uplatite jos para. To mozete uraditi pritiskom tastera 1. Ako ipak necete, pritisnite 0"<<endl;
                cin>>y;

                if(y == 1)
                {
                    cout<< "Odaberite sumu novca koju zelite da uplatite"<<endl;
                    cin>>t;
                    dodajPare(t);
                }
                kupi();
            }
        }
        else if(x==3)
        {
            if(pare>=200)
            {
                cout<<"Uzivajte u vasoj pizzi!"<<endl;
                pare-=200;
            }
            else
            {
                cout<< "Molim vas uplatite jos para. To mozete uraditi pritiskom tastera 1. Ako ipak necete, pritisnite 0"<<endl;
                cin>>y;

                if(y == 1)
                {
                    cout<< "Odaberite sumu novca koju zelite da uplatite"<<endl;
                    cin>>t;
                    dodajPare(t);
                }
                kupi();
            }
        }
        else if(x==4)
        {
            if(pare>=300)
            {
                cout<<"Uzivajte u vasem Smirnoff ice-u!"<<endl;
                pare-=300;
            }
            else
            {
                cout<< "Molim vas uplatite jos para. To mozete uraditi pritiskom tastera 1. Ako ipak necete, pritisnite 0"<<endl;
                cin>>y;

                if(y == 1)
                {
                    cout<< "Odaberite sumu novca koju zelite da uplatite"<<endl;
                    cin>>t;
                    dodajPare(t);
                }
                kupi();
            }
            cout<< "Otalo vam je "<<pare<< " novca"<<endl;
        }
    };
    int getPare(){return pare;}
    void plan ()
    {
        cout<< "Vas omiljeni zanr je: "<<z.getZanr()<< " Stoga Vam preporucujemo "<<z.getStejdz().getIme()<<endl;
    }
};


#endif // POSETILAC_HPP_INCLUDED
