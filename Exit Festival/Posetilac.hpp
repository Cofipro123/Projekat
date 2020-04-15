#ifndef POSETILAC_HPP_INCLUDED
#define POSETILAC_HPP_INCLUDED
enum vrstaUlaznice{JEDNODNEVNA, NARUKVICA, VIP, VIPGOLD};
class Posetilac:public Osoba{
private:
    string favZanr;
    vrstaUlaznice u;
};


#endif // POSETILAC_HPP_INCLUDED
