
#ifndef PRAVOGUAONIK_HPP_INCLUDED
#define PRAVOGUAONIK_HPP_INCLUDED

#include "FIGURA.h"
#include <cmath>

class Pravougaonik : public Figura
{
private:
    double a;
    double b;
public:
    Pravougaonik(){a = 10.00; b = 15.00;}
    Pravougaonik(double aa, double bb){a = aa; b = bb;}
    Pravougaonik(const Pravougaonik &P){ a = P.a; b = P.b;}

    double getA()const {return a;}
    double getB()const {return b;}

    void setA(double A){a = A;}
    void setB(double B){b = B;}

    double Povrsina()
    {
        double P = a*b;
        return P;
    }
    double Obim()
    {
        double O = 2*(a+b);
        return O;
    }
};


#endif // PRAVOGUAONIK_HPP_INCLUDED
