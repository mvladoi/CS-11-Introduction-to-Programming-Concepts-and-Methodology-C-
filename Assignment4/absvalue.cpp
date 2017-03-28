#include <iostream>
using namespace std;


double calcAbs(double value) {
if (value < 0)
value *= -1;
    return value;
}



int main()
{
    cout << "This program calculates absolute values\n";
    cout << "Number to calculate: ";
    double num = 0.0;
    cin >> num;
    double absnum = calcAbs(num);
    cout << "Absolute value is: " << absnum << endl;

    return 0;
}
