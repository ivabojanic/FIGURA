
#ifndef VALJAK_HPP_INCLUDED
#define VALJAK_HPP_INCLUDED

///slucajno nazvan fajl valjak a treba eplipsa ups
#include "FIGURA.h"
#include <cmath>
class Elipsa : public Figura
{
private:
    double a;
    double b;
public:
    Elipsa(){a = 2.00; b = 3.00;}
    Elipsa(double aa, double bb){a = aa; b = bb;}
    Elipsa(const Elipsa &E){ a = E.a; b = E.b;}

    double getA()const {return a;}
    double getB()const {return b;}

    void setA(double A){a = A;}
    void setB(double B){b = B;}

    double Povrsina()
    {
        double P = a*b*3.14;
        return P;
    }
    double Obim()
    {
        double O = 3.14*(3*(a + b)-sqrt((3*a + b)*(a + 3*b)));
        return O;
    }
};

#endif // VALJAK_HPP_INCLUDED
