
/**
    CS-11 Asn 6
    carcostfun.cpp
    Purpose: This program calculates the cost of traveling with a
    gas car and with an electric car.

    @author Vladoi Marian
    @version 1.0 04/03/14
*/




#include <iostream>
using namespace std;

double cost100Gas(double, double);
double cost100Elec(double, double);

const double MILES = 100;
const double PRICE = 33.7;

int main()
{
    double mpg, gallonCost, gasCar;
    double mpge, kwhCost, electricCar;
    string answer = "y";
    do
    {
        cout << "Enter the fuel efficiency of the car in MPG: ";
        cin >> mpg;
        cout << "Enter the cost of one gallon of gas: ";
        cin >> gallonCost;
        gasCar = cost100Gas (mpg, gallonCost);
        cout << "Cost of traveling 100 miles in a gas car is: "<< gasCar << "\n\n";


        cout << "Enter the energy efficiency of electric car in MPGe: ";
        cin >> mpge;
        cout << "Enter the cost of one KWH of electricity: ";
        cin >> kwhCost;
        electricCar = cost100Elec(mpge, kwhCost);
        cout << "Cost of traveling 100 miles in an electric car is: " << electricCar << "\n\n";

        cout << "Again? (y/n)\n ";
        cin >> answer;
    }
    while (answer != "n");


    return 0;
}



/**
    Calculates the cost of traveling with a gas car.
    @param double a is the fuel efficiency of the car.
    @param double b is the cost of one gallon of gas.
    @return the cost of traveling.

*/

double cost100Gas(double a, double b)
{

    return (MILES / a) * b;
}




/**
    Calculates the cost of traveling with an electric  car.
    @param double a is the energy efficiency of the car.
    @param double b is the cost of one KWH.
    @return the cost of traveling.

*/
double cost100Elec(double a, double b)
{

    return (MILES / a) * (b * PRICE);
}

