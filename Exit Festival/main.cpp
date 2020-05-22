#include <iostream>

using namespace std;
#include "Osoba.hpp"
#include "Posetilac.hpp"
#include "Zaposleni.hpp"
#include "Izvodjac.hpp"
#include "Stage.hpp"
#include "Zanr.hpp"
#include "Exit.hpp"
#include "FestivalskiDan.hpp"
#include "TerminNastupa.hpp"
#include "Nastup.hpp"
#include "Organizator.hpp"
#include <fstream>
#include <vector>


int Posetilac::brPosetilaca=0;

void citajTxt()
{
    string linija;
    ifstream fajl ("Funkcionalnost.txt");
    if (fajl.is_open())
    {
        while ( getline (fajl,linija) )
        {
            cout << linija << '\n';
        }
        fajl.close();
    }
    else
        cout << "Neuspesno otvoren fajl";

}
Posetilac PosetilacPrijava(Posetilac &p1)
{
    cout<< "Posetioce, unesite svoje podatke"<<endl;
    int vu;
    int p;
    string i;
    string prz;
    int g;
    int brh;
    string z;
    cout<< "Unesite broj za vrstu ulaznice"<<endl<< "1-Jednodnevna  2-Narukvica  3-VIP 4-VIP gold"<<endl;
    cin>>vu;
    cout<< "Unesite kolicinu para koju zelite da uplatite"<<endl;
    cin>>p;
    cout<< "Unesite ime"<<endl;
    cin>>i;
    cout<< "Unesite prezime"<<endl;
    cin>>prz;
    cout<< "Unesite godine"<<endl;
    cin>>g;
    cout<< "Unesite broj hromozoma"<<endl;
    cin>>brh;
    cout<< "Unesite omiljeni zanr"<<endl;
    cin>>z;
    p1.setVrsta(vu);
    p1.setCelo(p,i,prz,g,brh,z);
    return p1;
}
Zaposleni ZaposleniPrijava(Zaposleni &z1)
{
    cout<< "Radnice, unesite svoje podatke";
    int t;
    int p;
    int r;
    string i;
    string pr;
    int u;
    int brh;
    cout<< "Unesite broj za tip  posla"<<endl<< "1-Pandur  2-Obezbedjenje  3-Medicinski radnik 4-Volonter 5-Stand za hranu  6-Organizacija"<<endl;
    cin>>t;
    if(t == 1)
    {
        p=1000;
    }
    else if(t == 2)
    {
        p=2000;
    }
    else if(t == 3)
    {
        p=800;
    }
    else if(t == 4)
    {
        p=0;
    }
    else if(t == 5)
    {
        p=1500;
    }
    else
    {
        p=100000000;
    }
    cout<< "Koliko dana radite"<<endl;
    cin>>r;
    cout<< "Unesite ime"<<endl;
    cin>>i;
    cout<< "Unesite prezime"<<endl;
    cin>>pr;
    cout<< "Unesite godine"<<endl;
    cin>>u;
    cout<< "Unesite broj hromozoma"<<endl;
    cin>>brh;
    z1.setCelo(p,r,i,pr,u,brh);
    z1.setTip(t);
    return z1;
}



Organizator OrganizatorPrijava(Organizator &o1)
{
    cout<< "Organizatore, unesite svoje podatke"<<endl;
    int b;
    int p;
    int r;
    string i;
    string pr;
    int u;
    int brh;
    cout<< "Unesite budzet"<<endl;
    cin>>b;
    cout<< "Koliko dana radite"<<endl;
    cin>>r;
    cout<< "Unesite ime"<<endl;
    cin>>i;
    cout<< "Unesite prezime"<<endl;
    cin>>pr;
    cout<< "Unesite godine"<<endl;
    cin>>u;
    cout<< "Unesite broj hromozoma"<<endl;
    cin>>brh;
    o1.setCelo(b,p,r,i,pr,u,brh);
    return o1;
}
int main()
{
    string nasFajl = "Funkcionalnost.txt";

    cout<<"\tU fajlu pise: "<<endl;
    citajTxt();
    cout<<endl<<endl;
    string recenica="Ovo je poslednji red fajla...";
    cout<<"\tU fajlu posle dodavanja pise: "<<endl;
    Exit e2020(2020,"2.0");
    int i=1;
    vector <Zanr*> zanrovi;

    Zanr z1("Rap","Fusion stage",false);
    zanrovi.push_back(&z1);
    Zanr z2("Pop","Main stage",true);
    zanrovi.push_back(&z2);
    Zanr z3("Techno","Dance Arena stage", false);
    zanrovi.push_back(&z3);
    Zanr z4("Trap","Cockta stage",false);
    zanrovi.push_back(&z4);
    Zanr z5("Folk","Serbian stage", false);
    zanrovi.push_back(&z5);



    cout<< "Dobro dosli na exit "<< e2020.getKampanja()<<e2020.getGodina()<< ". godine"<<endl;

    FestivalskiDan f[4];
    f[1].setDan(1);
    f[2].setDan(2);
    f[3].setDan(3);
    f[4].setDan(4);
    int l;

    Posetilac p1;
    Zaposleni r1;
    Organizator o1;
    int kkk;
    int c;
    int h=0;
    while(h<1)
    {
        h++;
        cout<< "Ako ste posetilac, pritisnite 1,"<<endl<< "ako ste zaposleni, pritisnite 2,"<<endl<< "ako ste organizator pritisnite 3."<<endl<< "Pritisnite 0 da izadjete iz aplikacije"<<endl;
        cin>>l;
        if(l == 1)

        {
            {
                Posetilac p1;

                p1=PosetilacPrijava(p1);
                cout<< "Uspesna prijava"<<endl;
                ofstream Fajl;
                Fajl.open("Fajl.txt");
                Fajl<< p1<<endl;
                Fajl.close();
                for(auto i = zanrovi.begin(); i != zanrovi.end(); i++)
                {
                    if((*i)->getZanr() == p1.getZ().getZanr())
                    {
                        p1.getZ().getStejdz().setIme((*i)->getStejdz().getIme());
                        break;
                    }
                }
                if(p1.getZ().getStejdz().getIme() == "Main stage")
                {
                    p1.getZ().getStejdz().setPr(true);
                }
                else
                {
                    p1.getZ().getStejdz().setPr(false);
                }
                while(i<=4)
                {
                    cout<<"U toku je "<<f[i].getDan()<<". dan"<<endl;
                    if(p1.getVrsta() == JEDNODNEVNA && i>=2)
                    {
                        cout<< "Ili kupi kartu na mostu ili idi kuci"<<endl;
                    }
                    cout<< "Ako zelite da narucite hranu, kliknite 1. Ako necete Kliknite 0"<<endl;
                    cin>>c;
                    if(c == 1)
                    {
                        p1.kupi();
                    }

                    for(kkk=0; kkk<4; kkk++)
                    {
                        f[kkk].uporedi(p1);
                    }
                    i++;
                }
            }


        }

        else if(l == 2)
        {
            r1=ZaposleniPrijava(r1);
            cout<< "Uspesna prijava"<<endl;
            r1.plan();
            h--;
        }
        else if(l == 3)
        {
            h--;
            o1=OrganizatorPrijava(o1);
            cout<< "Uspesna prijava"<<endl;
            cout<< "Ukucajte 1 da dodate nastup. Kada dodate sve nastupe za odgovarajuci dan kliknite 0"<<endl;
            int q;
            cin>>q;
            string u;
            int s;
            int m;
            string z;
            string i;
            bool p;
            int w=1;
            int br=0;
            while(w<=4)
            {
                cout<<"Ime izvodjaca: ";
                cin>> u;
                cout<<endl;

                cout<<"Sat: ";
                cin>> s;
                cout<<endl;

                cout<<"Minut: ";
                cin>> m;
                cout<<endl;

                cout<<"Zanr: ";
                cin>> z;
                cout<<endl;

                cout<<"Stage: ";
                cin>> i;
                cout<<endl;

                cout<<"Oljin omiljeni stage: ";
                cin>> p;
                cout<< "Uneli ste p"<<endl;

                cin>>q;
                fflush(stdout);
                cout<<"Uneli ste q"<<endl;

                Nastup *a=new Nastup(u,s,m,z,i,p);
                f[br].dodajVector(*a);
                br++;
                cout<<w<<endl;

                if(q == 0)
                {
                    w++;
                }

            }
            for(kkk=0; kkk<4; kkk++)
                    {
                        f[kkk].ispis();
                    }
            cout<< "Uneli ste sve nastupe, prepustam aplikaciju korisniku"<<endl;


        }
        if(l==0)
        {
            return 0;
        }
    }





    //Posetilac p2(JEDNODNEVNA,500,"Petar","Lucic",16,43,"Rap","Fusion Stage",false);
    //Posetilac p3(VIPGOLD,2500,"Mihajlo","Malinovic",16,47,"Folk","Serbian Stage",false);
    //Posetilac p4(NARUKVICA,1000,"Ognjen","Bozic",16,46,"Pop","Main Stage",true);
    //e2020.dodajVector(p1);
    //e2020.dodajVector(p2);
    //e2020.dodajVector(p3);
    //e2020.brisVector();
    //e2020.ispis();
    //e2020.pretraga();

    return 0;
}
