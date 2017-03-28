

/**
    CS-11 Asn 7
    postal.cpp
    Purpose: this is a program that asks the user for a zip code and prints
    the POSTNET A bar code to the console.

    @author Vladoi Marian
    @version 1.0 20/03/14
*/





#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

const  int DIVISOR_OF_TEN = 10;




/**
    Builds the entire POSTNET "A" bar code for a ZIP code.

    @param zip the code to convert to a barcode.
    @return a bar code of the zip using "|" as the long
    bar and "," as the half bar.
*/
string makeBarcode(int zip);




/**
    Turns a single digit into a bar code.

    @param digit the single integer digit to encode.
    @return a bar code of the digit using "|" as the long
    bar and "," as the half bar.
*/
string makeDigit(int digit);




/**
    Gets a valid zip code from the user

     @param zip the code to convert to a barcode.
     @return true if the code is valid (no words, no negative code,
      > 10000, < 99999, no 0 code)
*/
bool readValidZip(int zip);






int main()
{
    int zip;
    bool alpha;
    cout << "Enter a zip code and I will generate a bar code.\n"
         << "Enter 0 to exit.\n\n";
    do
    {

        cout << "Enter a zip code: ";
        cin >> zip;
        alpha = readValidZip(zip);

        while (!alpha)
        {
            cout << "Enter a zip code: ";
            cin >> zip;
            alpha = readValidZip(zip);
        }

        string barCode = makeBarcode(zip);
        cout<< "The bar code for " << zip << " is: " << "|" << barCode << "|"  << endl;
        cout << "\n";

    }
    while (zip != 0);

    return 0;
}




string makeBarcode(int zip )
{
    string code;
    string number;
    int divisor = 10000;
    int numberDigits = 5;
    int sum = 0;
    int digit = 0;
    for ( int i = 1;  i <= numberDigits; i++)
    {
        digit = zip / divisor;
        zip = zip % divisor;
        divisor = divisor / DIVISOR_OF_TEN;
        sum += digit;
        code = makeDigit(digit);
        number += code;
    }

    digit =  10 - (sum % DIVISOR_OF_TEN);
    code = makeDigit(digit);
    number += code;
    return number;
}




string makeDigit(int digit)
{

    string code;
    switch (digit)
    {
    case 10:
    case 0:
        code = "||,,,";
        break;
    case 1:
        code = ",,,||";
        break;
    case 2:
        code = ",,|,|";
        break;
    case 3:
        code = ",,||,";
        break;
    case 4:
        code = ",|,,|";
        break;
    case 5:
        code = ",|,|,";
        break;
    case 6:
        code = ",||,,";
        break;
    case 7:
        code = "|,,,|";
        break;
    case 8:
        code = "|,,|,";
        break;
    case 9:
        code = "|,|,,";
        break;
    }
    return code;
}




bool readValidZip(int a)
{


    if (cin.fail())
    {
        cout << "You must enter digits, not words" << endl;
        cin.clear();
        cin.ignore(1000, '\n');
        return false;
    }

    else if (a > 99999)
    {
        cout << "ZIP codes must be <= 99999" << endl;
        return false;
    }
    else if (a < 10000 && a > 0)
    {
        cout << "ZIP codes must be >= 10000" << endl;
        return false;
    }
    else if (a < 0)
    {
        cout << "ZIP codes must be > 0" << endl;
        return false;
    }
    else if (a == 0)
    {
        cout << "\nMay your mail zip to its destination!"<< endl;
        exit(1);
    }
    else
        return true;
}
