#include <iostream>
using namespace std;

int main ()
{
    double sumScores = 0;
    double nextScore = 0;
    int counnt = 1;
const int INT_MAX = 1;
    cout << "Enter score " << counnt << ": ";
    cin >> nextScore;
    while (nextScore >= 0)
    {
        counnt++;
        cout << "Enter score "<< counnt << ": ";
        cin >> nextScore;
        if (cin.fail ())
        {
            cout << "Error: please enter a number.\n";
            cin.clear();
            cin.ignore(INT_MAX, 'n');
             counnt --;
        }
        else if (nextScore >= 0)
        {
            sumScores += nextScore;
        }
    }
    cout << "\n\n";
    cout << "Sum of scores " << sumScores << endl;


    return 0;
}
