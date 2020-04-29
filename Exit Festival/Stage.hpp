#ifndef STAGE_HPP_INCLUDED
#define STAGE_HPP_INCLUDED
class Stage{
protected:
    string ime;
    bool profesorkinOmiljeniStejdz;
public:
    Stage(string i, bool p)
    {
        ime=i;
        profesorkinOmiljeniStejdz=p;
    }
};


#endif // STAGE_HPP_INCLUDED
