#ifndef STAGE_HPP_INCLUDED
#define STAGE_HPP_INCLUDED
#include "Zanr.hpp"
class Stage{
protected:
    string ime;
    bool profesorkinOmiljeniStejdz;
public:
    //Napraviti construktor bez parametri
    Stage(string i, bool p)
    {
        ime=i;
        profesorkinOmiljeniStejdz=p;
    }
    Stage()
    {
        ime="Main";
        profesorkinOmiljeniStejdz=true;
    }
    friend ostream& operator<<(ostream& izlaz, const Stage &s){

        izlaz<<"Stage - ispis"<<endl;

        izlaz<<"Naziv Stagea: "<<s.ime<<endl;

        izlaz<<"Profesorkin omiljeni stejdz:"<<s.profesorkinOmiljeniStejdz<<endl;

        return izlaz;
    }
    string getIme(){return ime;}
    void setIme(string i){ime=i;}
    void setPr(bool p){profesorkinOmiljeniStejdz=p;}

};


#endif // STAGE_HPP_INCLUDED
