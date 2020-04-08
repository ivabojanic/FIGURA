
#ifndef FIGURA_H_INCLUDED
#define FIGURA_H_INCLUDED

class Figura
{
    protected:
        double a;
        double b;
    public:
        virtual double Obim() = 0;
        virtual double Povrsina() = 0;
};

#endif // FIGURA_H_INCLUDED
