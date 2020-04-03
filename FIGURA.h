
#ifndef FIGURA_H_INCLUDED
#define FIGURA_H_INCLUDED

#include <cmath>

class Figura
{
    protected:
        double a;
        double b;
    public:
    
        Figura(){a = 2; b = 3;}
        Figura(double aa, double bb){a = aa; b = bb;}
        Figura(const Figura &f){a = f.a; b = f.b;}

        void setStrA(double A) { a = A; }
        void setStrB(double B) { b = B; }

        double getStrA() const { return a; }
        double getStrB() const { return b; }
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
