#ifndef POSETILAC_HPP_INCLUDED
#define POSETILAC_HPP_INCLUDED
enum vrstaUlaznice{JEDNODNEVNA, NARUKVICA, VIP, VIPGOLD};
class Posetilac:public Osoba{
protected:
    string favZanr;
    vrstaUlaznice u;
public:
    Posetilac(string f, vrstaUlaznice uu, string i, string p, int g, int brh):Osoba(i,p,g,brh)
    {
        favZanr=f;
        u=uu;
        ime=i;
        prezime=p;
        uzrast=u;
        brojHromozoma=b;
    }
};


#endif // POSETILAC_HPP_INCLUDED
