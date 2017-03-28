#include <iostream>
using namespace std;

int main()
{
    string str;
    int sum = 0;
    cout << "Enter an integer number: ";
    cin >> str;
    cout << "The number of characters is " << str.length() << " ."<< endl;
    for (unsigned i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        int digit = ch - 48;
        cout << "Digit: " << digit << endl;
        sum += digit;
    }
    cout << "The sum of the digits is: "
         << sum << endl;
    return 0;
}
