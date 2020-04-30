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
int main()
{
    //Predlog za funkcionalnost: Posetilac unese Svoje lične podatke i omiljeni žanr, izadju mu izvodjači, stageovi i termini kada se izvode ti žanrovi
    //Iskreno sumnjam da je druga metoda skroz dobra, ali valjda se razume poenta pa cemo na casu zajedno popraviti
    Izvodjac i[5];
    i[0](false,10000,"rap","Brzo pevanje sa prijatnim rimama","Travis","Scott",25,46);
    i[1](false,4000,"tehno","Moderna, instrumentalna muzika sa hype ritmom","Martin","Garrix",30,46);
    i[2](true,500,"folk","Srpska lagana muzika","Zvonko","Bogdan",70,46);

    Stage s[5];
    s[0]("Dance Arena", false, "tehno","Moderna, instrumentalna muzika sa hype ritmom");
    s[1]("Cockta",false,"rap","Brzo pevanje sa prijatnim rimama");
    s[2]("Serbian stage","folk","Srpska lagana muzika")
    return 0;
}
