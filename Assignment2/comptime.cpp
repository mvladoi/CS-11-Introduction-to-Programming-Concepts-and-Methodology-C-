#include <iostream>
using namespace std;

int main ()
{
    string answer;
    string firstTime;
    string secondTime;

    cout << "Enter two times and I will print which come first.\n\n";
    do
    {

        cout << "Enter the first time in military format (like 1930): ";
        cin >> firstTime;
        cout << "Enter the second time: ";
        cin >> secondTime;

        string hour1 = firstTime.substr (0,2);
        string minute1 = firstTime.substr (2,2);
        string hour2 = secondTime.substr (0,2);
        string minute2 = secondTime.substr (2,2);




        if (hour1 < hour2)
        {

            cout << firstTime << " " << secondTime << endl;
        }

        else if(hour1 == hour2)
        {
            if (minute1 < minute2)
            {
                cout << firstTime << " " << secondTime << endl;
            }
            else if(minute1 == minute2)
            {
                cout << firstTime << " == " << secondTime << endl;
            }
            else
            {
                cout << secondTime << " " << firstTime << endl;
            }


        }
        else
        {
            cout << secondTime << " " << firstTime << endl;
        }
        cout << "Run again? (y/n): ";
        cin >> answer;
        cout << "\n\n";
    }
    while (answer == "y");
    return 0;
}
