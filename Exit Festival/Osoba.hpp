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
};


#endif // OSOBA_HPP_INCLUDED
