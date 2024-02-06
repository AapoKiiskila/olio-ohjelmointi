#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    cout<<"Kerrostalo luotu"<<endl;
    cout<<"Maaritellaan koko kerrostalon kaikki asunnot"<<endl;
    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    Kolmas.maaritaAsunnot();
}

double Kerrostalo::laskeKulutus(double)
{
    double kulutus = eka.laskeKulutus(1) + toka.laskeKulutus(1) + Kolmas.laskeKulutus(1);
    cout<<"Kerrostalon kulutus, = "<<kulutus<<endl;

    return kulutus;
}
