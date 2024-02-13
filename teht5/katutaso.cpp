#include "katutaso.h"

Katutaso::Katutaso()
{
    as1 = new Asunto();
    as2 = new Asunto();
    cout<<"Katutaso luotu"<<endl;
}

Katutaso::~Katutaso()
{
    delete as1;
    as1 = nullptr;

    delete as1;
    as2 = nullptr;
}

void Katutaso::maaritaAsunnot()
{
    cout<<"Maaritetaan 2 kpl katutason asuntoja"<<endl;
    as1->maarita(2,100);
    as2->maarita(2,100);
    cout<<"Maaritetaan katutason kerrokselta perittyja asuntoja"<<endl;
}

double Katutaso::laskeKulutus(double value)
{
    int as1Hinta = value * as1->asukasMaara * as1->neliot;
    int as2Hinta = value * as2->asukasMaara * as2->neliot;
    double katutasoKulutus = as1Hinta + as2Hinta;

    return katutasoKulutus;
}
