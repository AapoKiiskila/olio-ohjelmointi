#include "italianchef.h"


ItalianChef::ItalianChef(string newName) : Chef(newName)
{
    cout<<"Chef "<<name<<" konstruktori"<<endl;
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    cout<<"Chef "<<name<<" makes pasta"<<endl;
}
