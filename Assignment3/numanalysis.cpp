
#include <iostream>
using namespace std;

int main()
{

    double number;
    double small;
    double large;
    string answer = "y";
    cout << "This program analyzes numerical input.\n\n";

    while (answer == "y")
    {
        int counnt = 0;
        double total = 0;

        cout << "Enter a number (0 to exit): ";
        cin >> number;
        if (number == 0)
        {
            return 1;
        }
        large = number;
        small = number;
        while (number != 0)
        {


            total = total + number;
            counnt ++;
            if (number < small)
            {
                small = number;
            }
            if (number > large)
            {
                large = number;
            }
            cout << "Enter a number (0 to exit): ";
            cin >> number;

        }
        cout << "\n\nAverage value: " << total / counnt << endl;
        cout << "Smallest value: " << small << endl;
        cout << "Largest value: " << large << endl;
        cout << "Range: " << large - small << endl;

        cout << "\n\n";
        cout << "Play again? (y/n) ";
        cin >> answer;
        cout << "\n\n";

    }
    return 0;
}
