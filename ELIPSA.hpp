
#ifndef VALJAK_HPP_INCLUDED
#define VALJAK_HPP_INCLUDED

#include "FIGURA.h"

class Elipsa : public Figura
{
    public:
        Figura(){a = 2; b = 3;}
        Figura(double aa, double bb){a = aa; b = bb;}
        Figura(const Figura &f){a = f.a; b = f.b;}

        void setStrA(double A) { a = A; }
        void setStrB(double B) { b = B; }

        double getStrA() const { return a; }
        double getStrB() const { return b; }

        double getObim()const{return getOElipse();}
        double getPovrsina()const{return getPElipse();}

        Elipsa() : Figura(2,3){getObim();getPovrsina();}
        Elipsa(double aa, double bb) : Figura(aa, bb) {getObim();getPovrsina();}
        Elipsa(const Elipsa &e) : Figura(e.a, e.b) {getObim();getPovrsina();}

};

#endif // VALJAK_HPP_INCLUDED
