#ifndef STAGE_HPP_INCLUDED
#define STAGE_HPP_INCLUDED
#include "Zanr.hpp"
class Stage{
protected:
    string ime;
    bool profesorkinOmiljeniStejdz;
    Zanr z;
public:
    //Napraviti construktor bez parametri
    Stage(string i, bool p, string z, string o):z(z,o)
    {
        ime=i;
        profesorkinOmiljeniStejdz=p;
    }
    string getZanr(){return z.getZanr();}
};


#endif // STAGE_HPP_INCLUDED
