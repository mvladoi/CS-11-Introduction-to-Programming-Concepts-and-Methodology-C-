#include <iostream>
#include <cctype>
#include <cstdio>


/**
    CS-11 Asn 6
    vowels.cpp
    Purpose: This program print the number of vowels in a string.

    @author Vladoi Marian
    @version 1.0 04/03/14
*/

using namespace std;

int countVowels( string );


int main ()
{


    string phrase;
    string answer = "y";

    do
    {
        cout << "Enter a word or phrase: ";
        cin >> ws;
        getline ( cin, phrase);
        int vowels = countVowels (phrase);
        cout << "Your input contains " << vowels << " vowels.\n\n\n";
        cout << "Play again? (y/n)";
        cin >> answer;

        while (answer != "n" && answer != "y")
        {
            cout << "Play again? (y/n)";
            cin >> answer;
        }

    }
    while (answer != "n");


    cout << "Good bye!"  << endl;


    return 0;
}



/**
    Counts the number of vowel in a string.
    @param string that will be processed.
    @return the number of vowels.

*/


int countVowels( string x )
{
    int countV = 0;
    int length;
    length = x.length();


    for (unsigned int i = 0; i < length; i++)
    {
        
        x[i] = (tolower(x[i]));
        if( x [i] == 'a' || x [i] == 'e' || x [i] == 'i'
                || x  [i] == 'o' || x [i] == 'u')
            countV++;
    }


    return countV;

}
