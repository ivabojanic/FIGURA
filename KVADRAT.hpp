
#ifndef KVADRAT_HPP_INCLUDED
#define KVADRAT_HPP_INCLUDED

#include "PRAVOGUAONIK.hpp"

class Kvadrat : public Pravougaonik
{
    public:
        Kvadrat() : Pravougaonik(2,2){getObimm();getPovrsinaa();}
        Kvadrat(double aa) : Pravougaonik(aa, aa) {getObimm();getPovrsinaa();}
        Kvadrat(const Kvadrat &kv) : Pravougaonik(kv.a, kv.b) {getObimm();getPovrsinaa();}
};

#endif // KVADRAT_HPP_INCLUDED
