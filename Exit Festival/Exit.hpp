#ifndef EXIT_HPP_INCLUDED
#define EXIT_HPP_INCLUDED
#include <vector>
class Exit{
protected:
    int godina;
    string kampanja;
    vector <Posetilac*> posetioci;
public:
    Exit(int g, string k)
    {
        godina=g;
        kampanja=k;
    }
    int getGodina(){return godina;}
    string getKampanja(){return kampanja;}
    void dodajVector(Posetilac &p)
    {
        posetioci.push_back(&p);
        cout<< "Dodat element u vector"<<endl;
    }
    void brisVector ()
    {
        string lajna;
        cin>>lajna;
        bool izbrisan=false;
        for(auto i = posetioci.begin(); i != posetioci.end(); i++)
        {
            if((*i)->getIme()==lajna)
            {
                posetioci.erase(i);
                izbrisan=true;
                break;
            }
        }
        if(izbrisan)
        cout<<"Izbrisan vector"<<endl;
    }
    void ispis()
    {
       for(auto i = posetioci.begin(); i != posetioci.end(); i++)
        {
            cout<<**i<<endl;
        }
    }
    void pretraga ()
    {
        string lajna;
        cin>>lajna;
        for(auto i = posetioci.begin(); i != posetioci.end(); i++)
        {
            if((*i)->getIme()==lajna)
            {
                cout<<**i<<endl;
            }
            else
            {
                cout<< "Dambo";
            }
        }
    }
};


#endif // EXIT_HPP_INCLUDED
