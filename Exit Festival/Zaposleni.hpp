#ifndef ZAPOSLENI_HPP_INCLUDED
#define ZAPOSLENI_HPP_INCLUDED
enum tipPosla{PANDUR, OBEZBEDJENJE, MEDTEHNICAR, VOLONTER, STANDZAHRANU};
class Zaposleni{
private:
    tipPosla t;
    double plata;
    int radniDani;
};


#endif // ZAPOSLENI_HPP_INCLUDED
