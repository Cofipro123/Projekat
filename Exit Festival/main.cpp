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
#include <fstream>
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

int main()
{
    //Predlog za funkcionalnost: Posetilac unese Svoje lične podatke i omiljeni žanr, izadju mu izvodjači, stageovi i termini kada se izvode ti žanrovi
    /*Izvodjac i[5];
    i[0](false,10000,"rap","Brzo pevanje sa prijatnim rimama","Travis","Scott",25,46);
    i[1](false,4000,"tehno","Moderna, instrumentalna muzika sa hype ritmom","Martin","Garrix",30,46);
    i[2](true,500,"folk","Srpska lagana muzika","Zvonko","Bogdan",70,46);

    Stage s[5];
    s[0]("Dance Arena", false, "tehno","Moderna, instrumentalna muzika sa hype ritmom");
    s[1]("Cockta",false,"rap","Brzo pevanje sa prijatnim rimama");
    s[2]("Serbian stage", true,"folk","Srpska lagana muzika")*/
    string nasFajl = "Funkcionalnost.txt";

    cout<<"\tU fajlu pise: "<<endl;
    citajTxt();
    cout<<endl<<endl;
    string recenica="Ovo je poslednji red fajla...";
    cout<<"\tU fajlu posle dodavanja pise: "<<endl;
    Osoba o("X","Y",20,46);
    cout<<o<<endl;
    return 0;
}
