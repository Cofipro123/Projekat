#ifndef TERMINNASTUPA_HPP_INCLUDED
#define TERMINNASTUPA_HPP_INCLUDED
class TerminNastupa
{
protected:
    int sat;
    int minut;
public:
    TerminNastupa()
    {
        sat=21;
        minut=0;
    }
    friend ostream& operator<<(ostream& izlaz, const TerminNastupa &t)
    {

        izlaz<<"Nastup se odrzava u ";


        izlaz<<t.sat;

        if(t.sat%10 == 1)
        {
            izlaz<<" sat i ";
        }
        else if(t.sat%10 == 2 || t.sat%10 == 3 || t.sat%10 == 4)
        {
            izlaz<<" sata i ";
        }
        else
        {
            izlaz<<" sati i ";
        }

        if(t.minut%10 == 1)
        {
            izlaz<< t.minut <<" minut"<<endl;
        }
        else if(t.minut%10 == 2 || t.minut%10 == 3 || t.minut%10 == 4)
        {
            izlaz<< t.minut <<" minuta"<<endl;
        }
        else
        {
            izlaz<< t.minut <<" minuta"<<endl;
        }


        return izlaz;
    }
    TerminNastupa(int s, int m)
    {
        sat=s;
        minut=m;
    }
    int getSat()
    {
        return sat;
    }
    int getMin()
    {
        return minut;
    }
};


#endif // TERMINNASTUPA_HPP_INCLUDED
