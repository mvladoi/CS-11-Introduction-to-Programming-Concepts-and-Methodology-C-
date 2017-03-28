#include <iostream>
using namespace std;

struct Rectangle{
int length;
int width;
};

//Read structure data from the keyboard;
void read(Rectangle& rect);

//Print structure data from the keyboard;
void print(Rectangle& rect);

int main(){
Rectangle spongeBob;
read(spongeBob);
print(spongeBob);
return 0;
}

void read(Rectangle& rect){
cout << "Enter the rectangle length: ";
cin >>rect.length;
cout << "Enter the rectangle width: ";
cin >> rect.width;
}

void print(Rectangle& rect){
cout << rect.length << "x" << rect.width << endl;
}
