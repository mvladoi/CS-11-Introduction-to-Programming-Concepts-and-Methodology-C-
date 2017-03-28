#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int PERCENT = 100;
    double taxRate = 0;
    double tax = 0;
    string name;
    double price = 0;

    cout << "Enter the product name: ";
    cin >> name;
    cout << "Price of the " << name << ": ";
    cin >> price;
    cout << fixed << setprecision (2);
    cout << "Enter sales tax rate (%): ";
    cin >> taxRate;
    tax = price * (taxRate / PERCENT);
    price += tax;
    cout << "Total price: " << price << endl;

    int dollars = (int) price;
    cout << "In whole dollars: $" << dollars << endl;

    cout << "Total price: $" << price << endl;



    return 0;
}
