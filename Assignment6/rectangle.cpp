
#include <iostream>
using namespace std;

class Rectangle{
public:
    //Default constructor
    Rectangle();
    //Read data from the keyboard
    void read();
    //Print data from the keyboard
    void print();

private:
    int length;
    int width;
};

int main(){
Rectangle spongeBob;
spongeBob.read();
spongeBob.print();

return 0;
}

Rectangle::Rectangle(){
length = 0;
width = 0;
}

void Rectangle::read(){
cout << "Enter rectangle length: ";
cin >> length;
cout << "Enter rectangle width: ";
cin >>width;
}

void Rectangle::print(){
cout << length << "x" << width << endl;
}
