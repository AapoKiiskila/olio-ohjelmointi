#include "kerrostalo.h"

int main()
{
    Kerrostalo* ptrKerrostalo;
    ptrKerrostalo = new Kerrostalo();

    ptrKerrostalo->laskeKulutus(1);

    delete ptrKerrostalo;
    ptrKerrostalo = nullptr;

    return 0;
}
