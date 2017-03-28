
/**
    CS-11 Asn 6
    doublefun.cpp
    Purpose: This program display the prompt string, read a floating point as
    a string and it returns it as a floating point;

    @author Vladoi Marian
    @version 1.0 04/03/14
*/

#include <iomanip>
#include <iostream>
#include <climits>
using namespace std;

/**
    This function read a double as a string and return as a double
    @param string, the user input.
    @return the input as a double.

*/
double readDouble(string prompt);


int main()
{
    string answer = "y";
    while ( answer == "y")
    {
         number = readDouble("Enter a floating-point number: ");

        cout << "You entered "  << setprecision(10) <<  number << "\n\n";

        cout << "Again (y/n)? ";
        cin >> answer;
        cout << "\n\n";
    }
    return 0;
}


double readDouble(string prompt)
{
    cout << prompt;
    double number;
    cin >> number;


    while (cin.fail())
    {
        cout << "Please enter a floating-point number only! ";
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cin >> number;

    }
    return number;
}
