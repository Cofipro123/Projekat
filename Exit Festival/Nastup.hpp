#ifndef NASTUP_HPP_INCLUDED
#define NASTUP_HPP_INCLUDED
class Nastup{
protected:
    string imeIzv;
    Stage s;
public:
    Nastup(string u, string i, bool p):Stage(i,p)
    {
        imeIzv=u;
        ime=i;
        profesorkinOmiljeniStejdz=p;
    }
};


#endif // NASTUP_HPP_INCLUDED
