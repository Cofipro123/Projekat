#ifndef OSOBA_HPP_INCLUDED
#define OSOBA_HPP_INCLUDED
class Osoba{
protected:
    string ime;
    string prezime;
    int uzrast;
    int brojHromozoma;
public:
    Osoba()
    {
        ime="X";
        prezime="Y";
        uzrast=0;
        brojHromozoma=46;
    }
    Osoba(string i, string p, int u, int brh)
    {
        ime=i;
        prezime=p;
        uzrast=u;
        brojHromozoma=brh;
    }
    friend ostream& operator<<(ostream& izlaz, const Osoba& o){

        izlaz<<"Osoba - ispis"<<endl;

        izlaz<<"Ime: "<<o.ime<<endl;

        izlaz<<"Prezime:"<<o.prezime<<endl;

        izlaz<<"Uzrast: "<<o.uzrast<<endl;

        izlaz<<"Broj hromozoma: "<<o.brojHromozoma<<endl;

        return izlaz;
    }
};


#endif // OSOBA_HPP_INCLUDED
