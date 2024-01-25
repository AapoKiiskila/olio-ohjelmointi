#include "chef.h"
#include "italianchef.h"

int main()
{
    Chef objectChef3("Jyrki");
    ItalianChef objectChef4("Mario");
    objectChef3.makeSalad();
    objectChef4.makePasta();
    objectChef3.makeSoup();

    return 0;
}
