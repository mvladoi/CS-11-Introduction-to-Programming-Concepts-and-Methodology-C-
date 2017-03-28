
/**
    CS-11 Asn 2
    carcost.cpp
    Purpose: Calculates the cost and carbon emitted when traveling 100
    miles in a car.

    @author Vladoi Marian
    @version 1.0 02/07/13
*/



#include <iostream>
using namespace std;


int main ()
{
     string answer;
    const double KWHperMile = 34; // 34 KWH per 100 miles

do{
    cout << "Enter the fuel efficiency of the car in MPG:";
    float MPG ;
    cin >> MPG;
    cout << "Enter the cost of one gallon of gas:";
    double costOfGalon;
    cin >> costOfGalon;
    int traveled = 100;
    double galonsPer100Miles = traveled / MPG;
    double costOfTraveling = galonsPer100Miles * costOfGalon;
    cout << "Cost of traveling 100 miles in a gas car is:" << costOfTraveling << endl;
    cout << "\n";
    cout << "\n";
    cout << "Enter the energy efficiency of electric car in MPGe:";
    double MPGe;
    cin >> MPGe;
    cout << "Enter the cost of one KWH of electricity: ";
    double costOfKwh;
    cin >> costOfKwh;
    double galonsEPer100MilesE = traveled / MPGe;
    double costOfTraveling2 =  KWHperMile * costOfKwh;
    cout << "Cost of traveling 100 miles in an electric car is:" << costOfTraveling2 << endl;
    cout << "\n";
    cout << "\n";
    int poundsOfCo2 = 20;
    double totalCo2gas = poundsOfCo2 * galonsPer100Miles;

    double totalCo2Electric = poundsOfCo2 * galonsEPer100MilesE;

    cout << "Carbon emitted traveling 100 miles in gas car:" << totalCo2gas << endl;
    cout << "Carbon emitted traveling 100 miles in electric car:" << totalCo2Electric << endl;
    cout << "\n \n";
    cout << "Would you like to try again?" << endl;
    cout << "Press 'y' for yes and 'n' for no" << endl;

    cin >> answer;
    if (answer == "n" || answer == "N"){
    cout << "Good bye "  << endl;}


}while (answer == "y" || answer == "Y");





    return 0;

}
