#include "game.h"


void Game::printGameResult()
{
    cout<<"You guessed the right answer = "<<randomNumber;
    cout<<" with "<<numOfGuesses;
    cout<<" guesses"<<endl;
}

Game::Game(int)
{
    cin>>maxNumber;
    cout<<"GAME CONSTRUCTOR: object initialized with "<<maxNumber;
    cout<<" as a maximum value"<<endl;

    srand(time(NULL));
    randomNumber = rand() % maxNumber + 1;
}

Game::~Game()
{
    cout<<"GAME DESTRUCTOR: object cleared from stack memory"<<endl;
}

void Game::play()
{
    cout<<"Give your guess between 1-"<<maxNumber<<endl;

    while(randomNumber != playerGuess)
    {
        cin>>playerGuess;
        numOfGuesses++;

        if(randomNumber > playerGuess)
        {
            cout<<"Your guess is too small"<<endl;
        }

        if(randomNumber < playerGuess)
        {
            cout<<"Your guess is too big"<<endl;
        }

        if(randomNumber == playerGuess)
        {
            cout<<"Your guess is right"<<endl;
            printGameResult();
        }
    }
}


