
#ifndef VALJAK_HPP_INCLUDED
#define VALJAK_HPP_INCLUDED

#include "FIGURA.h"

class Elipsa : public Figura
{
    public:
        double getObim()const{return getOElipse();}
        double getPovrsina()const{return getPElipse();}

        Elipsa() : Figura(2,3){getObim();getPovrsina();}
        Elipsa(double aa, double bb) : Figura(aa, bb) {getObim();getPovrsina();}
        Elipsa(const Elipsa &e) : Figura(e.a, e.b) {getObim();getPovrsina();}

};

#endif // VALJAK_HPP_INCLUDED
