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
    friend ostream& operator<<(ostream& izlaz, const TerminNastupa &t){

        izlaz<<"Vreme nastupa - ispis"<<endl;

        izlaz<<"Sati: "<<t.sat<<endl;

        izlaz<<"Minuta:"<<t.minut<<endl;

        return izlaz;
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
