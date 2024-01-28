#include "italianchef.h"


ItalianChef::ItalianChef(string newName,int jauhot, int vesi) : Chef(newName)
{
    cout<<"Chef "<<name<<" konstruktori"<<endl;
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta(int jauhot, int vesi)
{
    cout<<"Chef "<<name<<" makes pasta with special recipe"<<endl;
    cout<<"Chef "<<name<<" uses jauhot = "<<jauhot<<endl;
    cout<<"Chef "<<name<<" uses vesi = "<<vesi<<endl;
}
