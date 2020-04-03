#ifndef KRUG_HPP_INCLUDED
#define KRUG_HPP_INCLUDED

#include "VALJAK.hpp"

class Krug : public Elipsa
{
    public:
        Krug() : Elipsa(2,2){getObim();getPovrsina();}
        Krug(double aa) : Elipsa(aa, aa) {getObim();getPovrsina();}
        Krug(const Krug &k) : Elipsa(k.a, k.b) {getObim();getPovrsina();}
};

#endif // KRUG_HPP_INCLUDED

