#include <iostream>
using namespace std;

int main ()
{
    int score;
    string grade;
    string answer = "y";
    while ("y" == answer)
    {
        cout << "Enter a score: ";
        cin >> score;
        while (score < 50 || score > 100)
        {
            cout << "Invalid score\n";
            cout << "Enter a score: ";
            cin >> score;

        }
        if (score >= 90)
        {
            grade = "A";
        }
        else if (score >= 80)
        {
            grade = "B";
        }
        else if (score >= 70)
        {
            grade = "C";
        }
        else if (score >= 60)
        {
            grade = "D";
        }
        else if (score >= 50)
        {
            grade = "F";
        }
        cout << grade << endl;
        cout << "Play again (y/n): ";
        cin >> answer;
        cout << "\n\n";
    }

    return 0;
}
