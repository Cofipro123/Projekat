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
};


#endif // ZANR_HPP_INCLUDED
