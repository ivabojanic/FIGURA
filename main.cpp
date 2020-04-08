#include <iostream>

#include "FIGURA.h"
#include "PRAVOGUAONIK.hpp"
#include "VALJAK.hpp"
#include "KRUG.hpp"
#include "KVADRAT.hpp"
#include "OBLIKK.hpp"

using namespace std;

int main()
{
    Pravougaonik P;
    Pravougaonik P1(10,12);
    Pravougaonik P2(P);
    cout<<P.Obim()<<","<<P.Povrsina()<<endl;
    cout<<P1.Obim()<<","<<P1.Povrsina()<<endl;
    cout<<P2.Obim()<<","<<P2.Povrsina()<<endl;

    Elipsa E;
    Elipsa E1(2,5);
    Elipsa E2(E);
    cout<<E.Obim()<<","<<E.Povrsina()<<endl;
    cout<<E1.Obim()<<","<<E1.Povrsina()<<endl;
    cout<<E2.Obim()<<","<<E2.Povrsina()<<endl;

    Kvadrat K;
    Kvadrat K1(5);
    Kvadrat K2(K);
    cout<<K.Obim()<<","<<K.Povrsina()<<endl;
    cout<<K1.Obim()<<","<<K1.Povrsina()<<endl;
    cout<<K2.Obim()<<","<<K2.Povrsina()<<endl;

    Krug G;
    Krug G1(10);
    Krug G2(G);
    cout<<G.Obim()<<","<<G.Povrsina()<<endl;
    cout<<G1.Obim()<<","<<G1.Povrsina()<<endl;
    cout<<G2.Obim()<<","<<G2.Povrsina()<<endl;

    Oblik O;
    Oblik O1(2,1);
    Oblik O2(O);
    cout<<O.UkupniObim()<<","<<O.UkupnaPovrsina()<<endl;
    cout<<O1.UkupniObim()<<","<<O1.UkupnaPovrsina()<<endl;
    cout<<O2.UkupniObim()<<","<<O2.UkupnaPovrsina()<<endl;
    return 0;
}


