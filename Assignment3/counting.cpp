#include <iostream>
using namespace std;

int main(){
int maximum = 0;
cout << "This program uses a loop to count.\n";
cout << "Enter the maximum number: ";
cin >> maximum;
for (int i = 1; i <= maximum; i++){
    cout << i << endl;
}

return 0;
}
