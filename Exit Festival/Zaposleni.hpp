#ifndef ZAPOSLENI_HPP_INCLUDED
#define ZAPOSLENI_HPP_INCLUDED
enum tipPosla{PANDUR, OBEZBEDJENJE, MEDTEHNICAR, VOLONTER, STANDZAHRANU};
class Zaposleni:public Osoba{
protected:
    tipPosla t;
    double plata;
    int radniDani;
public:
    Zaposleni(tipPosla tt, double p, int r, string i, string p, int u, int brh):Osoba(i,p,u,brh)
    {
        t=tt;
        plata=p;
        radniDani=r;
        ime=i;
        prezime=p;
        uzrast=u;
        brojHromozoma=b;
    }
};


#endif // ZAPOSLENI_HPP_INCLUDED
