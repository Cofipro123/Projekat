#ifndef TERMINNASTUPA_HPP_INCLUDED
#define TERMINNASTUPA_HPP_INCLUDED
class TerminNastupa{
protected:
    int sat;
    int minut;
public:
    TerminNastupa()
    {
        sat=21;
        minut=0;
    }
    TerminNastupa(int s, int m)
    {
        sat=s;
        minut=m;
    }
    int getSat(){return sat;}
    int getMin(){return minut;}
};


#endif // TERMINNASTUPA_HPP_INCLUDED
