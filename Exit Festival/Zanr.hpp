#ifndef ZANR_HPP_INCLUDED
#define ZANR_HPP_INCLUDED
class Zanr{
protected:
    string zanr;
    Stage s;
public:
    Zanr(string z, string i, bool p):Stage(i,p)
    {
        zanr=z;
        ime=i;
        profesorkinOmiljeniStejdz=p;
    }
};


#endif // ZANR_HPP_INCLUDED
