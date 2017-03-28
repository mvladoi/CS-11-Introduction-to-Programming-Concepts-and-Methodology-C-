
/**
    CS-11 Asn 6
    scramble.cpp
    Purpose: Flips characters in the middle of words.

    @author Vladoi Marian
    @version 1.3/8/14
*/
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

/**
    Scrambles two letters in a word, other than the first and last letter.
    @param str a string with a word
    @return a string with new scrambled word
*/
string scramble(string word);


// Main function for testing.
int main()
{
    srand(time(0));
    string answer = "y";
    while ( answer == "y" ){
    cout << "Enter a phrase followed by the Enter key.";
    cout << " Press Ctrl-Z/D to end.\n";
    string word;
    string phrase;
    while (cin >> word)
    {
        phrase = scramble(word) + " ";
        cout << phrase;
    }

    cin.clear();

    cout << "Again (y/n) ";
    cin >> answer;
    cout << "\n";
    }
    cout << endl;
    return 0;
}



string scramble(string word)
{
    int length = word.length();
    int r1 = 0;
    int r2 = 0;
    if (length > 3)
    {
        r1 = rand()% (length-2 ) ;

        if (r1 == 0)
        {
            r1= r1 + 1;
        }


        r2 = r1;
        while (r2 == r1)
        {
            r2 = rand() % (length-2) + 1;

            char t = word[r2];
            word[r2] = word[r1];
            word[r1] = t;
        }
    }
    return word;


}
