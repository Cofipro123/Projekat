#ifndef ZANR_HPP_INCLUDED
#define ZANR_HPP_INCLUDED
class Zanr{
protected:
    string zanr;
    string opis;
public:
    Zanr()
    {
        zanr="";
        opis="";
    }
    Zanr(string z, string o)
    {
        zanr=z;
        opis=o;
    }
    string getZanr(){return zanr;}
    friend ostream& operator<<(ostream& izlaz, const Zanr &z){

        izlaz<<"Zanr - ispis"<<endl;

        izlaz<<"Naziv Zanra: "<<z.zanr<<endl;

        izlaz<<"Opis istog:"<<z.opis<<endl;

        return izlaz;
    }
};



#endif // ZANR_HPP_INCLUDED
