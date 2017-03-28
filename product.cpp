
/**
    CS-11 Asn 8
    postal.cpp
    Purpose: this is a program that creates a class Product which represents
    an item that you would find in a store.

    @author Vladoi Marian
    @version 1.0 02/04/14
*/






#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

class Product {
public:
Product(); //default constructor 
Product(string newName, double newPrice, int newQuantity); // a three parameter constructor
string getName()const;                                     // accessor function that returns the name
double getPrice()const;                                    // accessor function that returns the price
int getQuantity() const;                                   // accessor function that returns the quantity
void setName(string newName);                              // mutator function that sets the name
void setPrice(double newPrice);                            // mutator function that sets the price
void setQuantity(int newQuantity);                         // mutator function that sets the quantity
double getValue()const;                                    // accessor function that returns price *quantity
void print()const;                                         // print function
string toString()const;                                    // function that returns a string value containing all the data about the product

private:
    string name;
    double price;
    int quantity;
};

Product :: Product(){
name ="Unknown";
price = 0.0;
quantity = 0;
}

Product :: Product (string newName, double newPrice, int newQuantity){
name = newName;
price = newPrice;
 if (price < 0.0) {
        cout << "Error: negative price!\n"
             << "Setting price to 0.\n";
        price = 0.0;
    }
quantity = newQuantity;
 if (quantity < 0) {
        cout << "Error: negative quantity!\n"
             << "Setting quantity to 0.\n";
        quantity = 0;
    }
}

string Product :: getName()const{
return name;
}

double Product :: getPrice()const{
return price;
}

int Product :: getQuantity()const{
return quantity;
}

void Product :: setName(string newName){
name = newName;
}

void Product :: setPrice(double newPrice){
price = newPrice;
}

void Product :: setQuantity (int newQuantity){
quantity = newQuantity;
}

double Product :: getValue()const{
return quantity * price;
}

void Product :: print ()const{
cout <<fixed << setprecision(2) << setw(21)<< left << name << setw(13) << price << setw(10)
<< quantity << setw(6)<< right << getValue()<< endl;
}


string Product :: toString() const{
ostringstream output;
output <<fixed<< setprecision(2)<< setw(21)<< left << name << setw(13) << price << setw(10)
<< quantity << setw(6)<< right << getValue();
string a = output.str();
return a;
}


int main(){
Product milk("Milk", 3.95, 40);
Product bread("Bread", 2.99, 30);
Product cheese;
cheese.setName("Cheese");
cheese.setPrice(4.98);
cheese.setQuantity(20);
cout << "My products:" << endl;
cout << "Name" << setw(21) << "Price" << setw(11) << "Qty" << setw(14) << "Value" << endl;
milk.print();
bread.print();
cheese.print();
cout << endl;
cout << milk.toString() << endl;

return 0;
}
