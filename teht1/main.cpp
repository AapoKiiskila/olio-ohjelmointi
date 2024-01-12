#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int count = 0;

int game(int maxnum)
{
    int number = 0;
    int guess = 0;

    srand(time(NULL));
    number = rand() % maxnum + 1;

    cout<<"Arvaa luku 1-"<<maxnum<<endl;

    while(number != guess)
    {
        cin>>guess;
        count++;

        if(number > guess)
        {
            cout<<"Luku on suurempi"<<endl;
        }

        if(number < guess)
        {
            cout<<"Luku on pienempi"<<endl;
        }

        if(number == guess)
        {
            cout<<"Oikea vastaus"<<endl;
        }
    }

    return count;
}

int main()
{
    game(20);
    cout<<"Arvauksia: "<<count<<endl;

    return 0;
}
