#include <iostream>
using namespace std;

int main (){
int month;
int day;
int divisible;
const int NUMBER = 3;
string season;
string answer = "y";

cout << "I will print the seasons.\n\n";
while ("y" == answer){
cout << "Enter the month (1-12): ";
cin >> month;
if (month < 1 || month > 12){
    cout << "Please pay attention to my indications.\n";
    cout << "Enter the month (1-12): ";
    cin >> month;
}

cout << "Enter the day (1-31): ";
cin >> day;
if (day < 1 || day > 31){
    cout << "Please pay attention to my indications.\n";
    cout << "Enter the day (1-31): ";
    cin >> day;
}

if (month == 1 || month == 2 || month == 3){
    season = "Winter";
}
else if (month == 4 || month == 5 || month == 6){
    season = "Spring";
}
else if (month == 7 || month == 8 || month == 9){
    season = "Summer";
}
else if (month == 10 || month == 11 || month == 12){
    season = "Fall";
}
divisible = month % NUMBER;
if (divisible == 0 && day >=21){
    if (season == "Winter"){
        season = "Spring";
    }
    else if (season == "Spring"){
        season = "Summer";
    }
    else if (season == "Summer"){
        season = "Fall";
    }
    else {
        season = "Winter";
    }
}

cout << "The season is " << season <<endl;
cout << "Run again? (y/n) ";
cin >> answer;
cout << "\n\n";
}
return 0;
}
