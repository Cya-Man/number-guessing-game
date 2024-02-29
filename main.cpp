#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    srand(time(0));

    int secretNumber = rand()%100+1;
    int guessNumber;
    int tries = 0;

    cout<<"Welcome to the Number Guessing game\n";
    cout<<"===================================\n";
    cout<<"Try to guess the selected number from 1 to 100"<<endl;
    cout<<"\n";



    do
    {
       // cout<<secretNumber<<endl; testing
        cout<<"Enter your guess number :";
        cin>>guessNumber;
        tries++;

        if(guessNumber < secretNumber)
        {
            cout<<"\nToo low, try again!"<<endl;
        }
        else if(guessNumber > secretNumber)
        {
            cout<<"\nToo high, try again!\n";
        }
        else{
            cout<<"\n\nConratulations! you've guessed the number ("<<secretNumber<<")in "<<tries<<" attempts!\n";
        }



    }
    while(guessNumber != secretNumber);

    return(0);
}
