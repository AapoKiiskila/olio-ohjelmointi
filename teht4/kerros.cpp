#include "kerros.h"
#include "asunto.h"

Kerros::Kerros()
{
    cout<<"Kerros luotu"<<endl;
}

void Kerros::maaritaAsunnot()
{
    cout<<"Maaritetaan 4 kpl kerroksen asuntoja"<<endl;
    as1.maarita(2,100);
    as2.maarita(2,100);
    as3.maarita(2,100);
    as4.maarita(2,100);
}

double Kerros::laskeKulutus(double value)
{
    int as1Hinta = value * as1.asukasMaara * as1.neliot;
    int as2Hinta = value * as2.asukasMaara * as2.neliot;
    int as3Hinta = value * as3.asukasMaara * as3.neliot;
    int as4Hinta = value * as4.asukasMaara * as4.neliot;
    double kerrosKulutus = as1Hinta + as2Hinta + as3Hinta + as4Hinta;

    return kerrosKulutus;
}
