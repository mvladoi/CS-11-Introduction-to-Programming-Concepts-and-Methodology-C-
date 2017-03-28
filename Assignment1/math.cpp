#include <iostream>
#include <cmath>
using namespace std;
/**
    CS-11 Asn 2
    math.cpp
    Purpose: This is a program that reads a number and displays the
    square, cube, and fourth power of the number.

    @author Vladoi Marian
    @version 1.0 02/07/13
*/


int main (){
 string answer;

do{
cout << " Please enter a number, not bigger than 100:";
int number;
cin >>  number;
if(number > 100){ cout << " ERROR, pay attention to my indications." << endl; }
else {
int numberSquare = number * number;
int numberCube = number * number * number;
int numberFourthPower = pow(number,4) + 0.5;
cout << "The number" << " " << number << " " << "square is: " << " " <<numberSquare << "." << endl;
cout << "The number" << " " <<  number << " " << " cube is: " << " " << numberCube << "." << endl;
cout << "The number" << " " << number << " " << "to the fourth power is :" << " " << numberFourthPower <<  "." << endl;
cout << "Do you want to try again? " << endl;
cout << "If yo want to try again type 'y' and if you do not want type 'n'." << endl;
cin >> answer;

if (answer == "N" || answer == "n")
    cout << "I think you got tired, see you soon. " << endl;

}
} while (answer == "Y" || answer == "y");







return 0;

}
