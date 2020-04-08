#ifndef KVADRAT_HPP_INCLUDED
#define KVADRAT_HPP_INCLUDED

#include "PRAVOGUAONIK.hpp"

class Kvadrat : public Pravougaonik
{
private:
    double stranicaA;
public:
    Kvadrat() : Pravougaonik(10.00,10.00){}
    Kvadrat(double x) : Pravougaonik(x,x){}
    Kvadrat(const Kvadrat &x) : Pravougaonik(x){}
};

#endif // KVADRAT_HPP_INCLUDED

