#ifndef KRUG_HPP_INCLUDED
#define KRUG_HPP_INCLUDED

#include "VALJAK.hpp"

class Krug : public Elipsa
{
public:
    Krug() : Elipsa(2.00,2.00){}
    Krug(double x) : Elipsa(x,x){}
    Krug(const Krug &x) : Elipsa(x){}
};

#endif // KRUG_HPP_INCLUDED


