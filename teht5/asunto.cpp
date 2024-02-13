#include "asunto.h"

Asunto::Asunto()
{
    cout<<"asunto luotu"<<endl;
}

void Asunto::maarita(int aM, int n)
{
    asukasMaara = aM;
    neliot = n;

    cout<<"Asunto maaritettu asukkaita= "<<aM<<" nelioita= "<<n<<endl;
}

double Asunto::laskeKulutus(double value)
{
    double asuntoKulutus = value * asukasMaara * neliot;
    cout<<"asunnon kulutus, kun hinta= "<<value<<" on "<<asuntoKulutus<<endl;
    return asuntoKulutus;
}
