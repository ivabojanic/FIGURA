#ifndef OBLIK_HPP_INCLUDED
#define OBLIK_HPP_INCLUDED

#include "KVADRAT.hpp"
#include "KRUG.hpp"

class Oblik
{
private:
    Kvadrat A;
    Krug B;
public:
    Oblik() : A(), B(){}
    Oblik(double x,double y) : A(x), B(y){}
    Oblik(const Oblik &O) : A(O.A), B(O.B){}

    double UkupniObim()
    {
        return A.Obim()+ B.Obim();
    }
    double UkupnaPovrsina()
    {
        return A.Povrsina()- B.Povrsina();
    }
};

#endif // OBLIK_HPP_INCLUDED
