#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    eka = new Katutaso;
    toka = new Kerros;
    Kolmas = new Kerros;
    cout<<"Kerrostalo luotu"<<endl;
    cout<<"Maaritellaan koko kerrostalon kaikki asunnot"<<endl;
    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    Kolmas->maaritaAsunnot();
}

Kerrostalo::~Kerrostalo()
{
    delete eka;
    eka = nullptr;

    delete toka;
    eka = nullptr;

    delete Kolmas;
    eka = nullptr;

}

double Kerrostalo::laskeKulutus(double)
{
    double kulutus = eka->laskeKulutus(1) + toka->laskeKulutus(1) + Kolmas->laskeKulutus(1);
    cout<<"Kerrostalon kulutus, = "<<kulutus<<endl;

    return kulutus;
}
