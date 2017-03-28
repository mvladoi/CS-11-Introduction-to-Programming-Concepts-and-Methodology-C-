#include <iostream>
using namespace std;

int main()
{
    int guess = 0;
    string repeat = "y";
    while ( "y" == repeat)
    {
        cout << "I am thinking of a number between"
             << " 1 and 10.\nCan you guess it?\n\n"
             << "Enter your guess: ";
        cin >> guess;
        if (guess == 7)
        {
            cout << "*** Correct! ***\n";
        }
        else
        {

            cout << "Sorry, that is not correct.\n";
                 cout << "Try again.\n";
             }

                 cout << "\nDo you want to play again? (y/n) ";
                 cin >> repeat;
             }

                 cout << "Game over\n";
                 return 0;
             }
