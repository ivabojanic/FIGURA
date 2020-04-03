
#ifndef FIGURA_H_INCLUDED
#define FIGURA_H_INCLUDED

#include <cmath>

class Figura
{
    protected:
        double a;
        double b;
    public:
        double getOPravougaonika()
        {
            double O = 2*(a+b);
            return O;
        }
        double getOElipse()const
        {
            double O = 3.14*(3*(a + b)-sqrt((3*a + b)*(a + 3*b)));
            return O;
        }
        double getPPravougaonika()const
        {
            double P = a*b;
            return P;
        }
        double getPElipse()const
        {
            double P = a*b*3.14;
            return P;
        }
;


#endif // FIGURA_H_INCLUDED
