#include <iostream>
using namespace std;

int main ()
{
    int number;

    cout << "This program prints a filled and hollow square.\n\n";
    cout << "Enter the length of a side (-1 to quit): ";
    cin >> number;
    while (number != -1)
    {

        for (int i = 1; i <= number ; i ++)
        {
            for ( int j = 0; j <= number * 2  ; j++)
            {
                if (j == number )
                    cout << " ";
                else if ( j > (number + 1) && j < (number * 2 ) && i != 1 && i != number)
                    cout << " ";
                else  cout <<"*";

            }
            cout << endl;
        }
        cout << "Enter the length of a side (-1 to quit): ";
        cin >> number;
    }

    return 0;
}
