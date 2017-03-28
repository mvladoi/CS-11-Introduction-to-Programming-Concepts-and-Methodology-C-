#include <iostream>
using namespace std;

int main()
{
    int month;
    cout << "I will print the number of days in a month.\n\n";
    string answer = "y";
    while ( "y" == answer)
    {

        cout << "Enter the month (1-12): ";
        cin >> month;
        if (month < 1 || month > 12)
        {
            cout << "On our planet the year has only 12 months.\n";
            cout << "Enter the month (1-12): ";
            cin >> month;
        }
        if(month == 4 || month == 6 || month == 9 || month == 11)
        {
            cout << "30 days.";
        }
        else if (month == 1 || month == 3 || month == 5 || month == 7
                 || month == 8 || month == 10 || month == 12)
        {
            cout << "31 days.";
        }
        else
        {
            cout << "28 or 29 days.";
        }


        cout << "\nRun again? (y/n) ";
        cin >> answer;
        cout << "\n\n";
    }
    return 0;
}
