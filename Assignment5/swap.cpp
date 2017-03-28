
#include <iostream>
using namespace std;


void swap(int& var1, int& var2);

int main(){
int num1 = 0, num2 = 0;
cout << "Enter two integers: ";
cin >> num1 >> num2;

swap(num1, num2);

cout << "After calling function: "
     << num1 << " " << num2 << endl;

     return 0;
}


void swap(int& var1, int& var2){
int temp = var1;
var1 = var2;
var2 = temp;
}
