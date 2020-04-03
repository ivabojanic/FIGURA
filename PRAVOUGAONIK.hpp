
#ifndef PRAVOGUAONIK_HPP_INCLUDED
#define PRAVOGUAONIK_HPP_INCLUDED

#include "FIGURA.h"

class Pravougaonik : public Figura
{
    public:
        Figura(){a = 2; b = 3;}
        Figura(double aa, double bb){a = aa; b = bb;}
        Figura(const Figura &f){a = f.a; b = f.b;}

        void setStrA(double A) { a = A; }
        void setStrB(double B) { b = B; }

        double getStrA() const { return a; }
        double getStrB() const { return b; }

        double getObimm()const{return getOPravougaonika();}
        double getPovrsinaa()const{return getPPravougaonika();}

        Pravougaonik() : Figura(2,3){getObimm();getPovrsinaa();}
        Pravougaonik(double aa, double bb) : Figura(aa, bb) {getObimm();getPovrsinaa();}
        Pravougaonik(const Pravougaonik &p) : Figura(p.a, p.b) {getObimm();getPovrsinaa();}

};


#endif // PRAVOGUAONIK_HPP_INCLUDED
