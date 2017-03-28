
#include <iostream>
using namespace std;

class Rectangle
{
public:
    //Default constructor
    Rectangle();
    // Overloaded constructor
    Rectangle(int newLength, int newWidth);
    //accessor function
    int getLength()const;
    //mutator function
    void setLength(int newLength);
    //accessor function
    int getWidth()const;
    //mutator function
    void setWidth(int newWidth);
    //Read data from the keyboard
    void read();
    //Print data from the keyboard
    void print();
    //Set size constructor
     void setSize(int length, int width);
private:
    int length;
    int width;
};

int main()
{
    Rectangle spongeBob;
    spongeBob.read();
    spongeBob.print();

    cout << "Testing get and set functions\n";
    Rectangle big(100, 300);
    cout << "The length of big is: "
         << big.getLength() << endl;
    big.setLength(50);
    cout << "Rectangle big is now: ";
    big.print();

    cout << "The width of big is: "
         << big.getWidth() << endl;
    big.setWidth(75);
    cout << "Rectangle big is now: ";
    big.print();

    cout << "Testing shadowing\n";
    Rectangle shadow;
    shadow.setSize(7, 14);
    shadow.print();


    return 0;
}

Rectangle::Rectangle()
{
    length = 0;
    width = 0;
}


Rectangle::Rectangle(int newLength, int newWidth)
{
    length = newLength;
    width = newWidth;
}


int Rectangle::getLength()const
{
    return length;
}

void Rectangle::setLength(int newLength)
{
    length = newLength;
}


 int Rectangle:: getWidth()const{
 return width;
 }

 void Rectangle::setWidth(int newWidth){
     width = newWidth;
 }
void Rectangle::read()
{
    cout << "Enter rectangle length: ";
    cin >> length;
    cout << "Enter rectangle width: ";
    cin >>width;
}

void Rectangle::print()
{
    cout << length << "x" << width << endl;
}


void Rectangle::setSize(int newLength, int newWidth)
{
    length = newLength;
    width = newWidth;
}
