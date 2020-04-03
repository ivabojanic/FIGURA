
#ifndef PRAVOGUAONIK_HPP_INCLUDED
#define PRAVOGUAONIK_HPP_INCLUDED

#include "FIGURA.h"

class Pravougaonik : public Figura
{
    public:

        double getObimm()const{return getOPravougaonika();}
        double getPovrsinaa()const{return getPPravougaonika();}

        Pravougaonik() : Figura(2,3){getObimm();getPovrsinaa();}
        Pravougaonik(double aa, double bb) : Figura(aa, bb) {getObimm();getPovrsinaa();}
        Pravougaonik(const Pravougaonik &p) : Figura(p.a, p.b) {getObimm();getPovrsinaa();}

};


#endif // PRAVOGUAONIK_HPP_INCLUDED
