
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    double number;
    double minimum;
    string answer = "y";
    cout << "This program finds a minimum input value.\n\n";


while (answer == "y"){
        cout << "Enter a number (Q to quit): ";
        cin >> number;
        minimum = number;



        while (! cin. fail())
        {
            if (minimum > number)
            {
                minimum = number;
            }
            cout << "Enter a number (Q to quit): ";
            cin >> number;


        }

        cout << "Minimum value: " << minimum << "\n\n";
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "Play again (y/n): ";
        cin >> answer;
        cout << "\n\n";
}
return 0;

}

