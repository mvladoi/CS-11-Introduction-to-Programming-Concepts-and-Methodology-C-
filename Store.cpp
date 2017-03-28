
/**
    CS-11 Asn 10
    store.cpp
    Purpose: this is a program that creates a vector which stores  Product objects and
    perform different operations on this vector

    @author Vladoi Marian
    @version 1.0 17/04/14
*/





#include <fstream>
#include <iostream>
#include <cstdlib>
#include <vector>
#include <iomanip>
#include <sstream>
using namespace std;

class Product
{
public:
    Product();                                                 //default constructor
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
    void read();                                               // loads information from display
    void read(ifstream& fin);                                  // loads information from the file stream, @input stream parameter
    void write(ofstream& fout);                                // writes informations about this product, @ output stream parameter

private:
    string name;
    double price;
    int quantity;
};





Product :: Product()
{
    name ="Unknown";
    price = 0.0;
    quantity = 0;
}




Product :: Product (string newName, double newPrice, int newQuantity)
{
    name = newName;
    price = newPrice;
    if (price < 0.0)
    {
        cout << "Error: negative price!\n"
             << "Setting price to 0.\n";
        price = 0.0;
    }
    quantity = newQuantity;
    if (quantity < 0)
    {
        cout << "Error: negative quantity!\n"
             << "Setting quantity to 0.\n";
        quantity = 0;
    }
}




string Product :: getName()const
{
    return name;
}



double Product :: getPrice()const
{
    return price;
}



int Product :: getQuantity()const
{
    return quantity;
}



void Product :: setName(string newName)
{
    name = newName;
}



void Product :: setPrice(double newPrice)
{
    price = newPrice;
}



void Product :: setQuantity (int newQuantity)
{
    quantity = newQuantity;
}



double Product :: getValue()const
{
    return quantity * price;
}



void Product :: print ()const
{
    cout <<fixed << setprecision(2) << setw(21)<< left << name << setw(13) << price << setw(10)
         << quantity << setw(6)<< right << getValue()<< endl;
}


string Product :: toString() const
{
    ostringstream output;
    output <<fixed<< setprecision(2) << left << setw(20)  << name << right << setw(13) << price << right<<setw(10)
           << quantity <<right << setw(15) << getValue();
    string a = output.str();
    return a;
}


void Product::read()
{
    cout << "Enter the name of the product: ";
    cin >> ws;
    getline( cin ,name);
    cout << "Enter the price for a " << name << ": ";
    cin >> price;

    cout << "Enter the initial inventory: ";
    cin >> quantity;
}


void Product::read(ifstream& fin){
    fin >> ws;
    getline(fin,name);
    fin >> price;
    fin >> quantity;

}

void Product::write(ofstream& fout){
fout << name << endl;
fout << price << endl;
fout << quantity << endl;
}





// add a product to my list, @vector of Product objects
void addProduct(vector<Product>& store);

// print the inventory of my list , @vector of Product objects
void reportInventory(vector<Product>& store);

// delete a product of my list , @vector of Product objects
void deleteProduct(vector<Product>& store);

// sell a product of my list , @vector of Product objects
void sellProduct(vector<Product>& store);

// restock my list , @vector of Product objects
void restockProduct(vector<Product>& store);

// change the price of a product of my list , @vector of Product objects
void changePrice(vector<Product>& store);

//display the menu on the console
int menu();




/**
    Loads the Product data from the specified file name and
    returns the data in a vector of Product objects.

    @param store The list of products to display.
    @param fileName The name of the file from which to read.
*/
void loadData(vector<Product>& store, string fileName);



/**
    Writes store data to an output file.

    @param store The vector of Product objects.
    @param fileName The name of the file to which to write.
*/
void saveData(vector<Product>& store, string fileName);




/**
    Writes a report to a file named report.txt.

    @param store The vector of Product objects.
    @param fileName The name of the file to which to write.
*/
void writeReport(vector<Product> store, string fileName);







int main()
{
    vector<Product> store;
    cout << "Welcome to the Virtual Store Manager\n\n" ;

    loadData(store, "products.txt");

     int choice = menu();

      while (choice !=0)
    {
        switch (choice)
        {
        case 1:
            reportInventory(store);
            break;
        case 2:
            addProduct(store);
            break;
        case 3:
            deleteProduct(store);
            break;
        case 4:
            sellProduct(store);
            break;
        case 5:
            restockProduct(store);
            break;
        case 6:
            changePrice(store);
            break;
        case 7:
           writeReport(store, "report.txt");
           break;
        }
       choice = menu();
    }

    saveData(store, "store.txt");

    return 0;
}



void addProduct(vector<Product>& store)
{
    cout << "\nAdding a new product:\n";
    Product prod;

    prod.read();
    store.push_back(prod);
    cout << endl;
}



void deleteProduct(vector<Product>& store)
{
    reportInventory(store);
    cout << "Which product: ";
    int pos;
    cin >> pos;
    for (unsigned i = pos-1; i < store.size() - 1; i++)
    {
        store[i] = store[i + 1];
    }
    store.pop_back();

}


void reportInventory(vector<Product>& store)
{   cout << endl;
    cout << setw(30)<< left << "# Name" << setw(12) << "Price" << setw(12)
         << "Qty" << setw(6)<< right << "Value"<< endl;
    for (unsigned i = 0; i < store.size(); i++)
    {
        cout << i+1 <<" " << store[i].toString() << endl ;
    }
    cout << endl;
}


void sellProduct(vector<Product>& store)
{
    cout << "Selling a product:" << endl;
    reportInventory(store);
    cout << "Which product: ";
    int pos;
    cin >> pos;
    int number = store[pos - 1].getQuantity();
    store[pos-1].setQuantity(number - 1);
}



void restockProduct(vector<Product>& store)
{
    cout << "Restocking a product:" << endl;
    reportInventory(store);
    cout << "Which product: ";
    int pos;
    cin >> pos;
    cout << "Number of items to add: ";
    int items;
    cin >> items;
    int number = store[pos-1].getQuantity();
    store[pos-1].setQuantity(number+items);
}



int menu()
{
    cout << "Please choose one of the following operations:"<< endl;
    cout << "0. Exit program" << endl;
    cout << "1. Report inventory \n";
    cout << "2. Add a new product\n";
    cout << "3. Delete a product\n";
    cout << "4. Sell a product\n";
    cout << "5. Restock a product\n";
    cout << "6. Changing a product price\n";
    cout << "7. Make a report of the store\n";
    cout << "Choice (0-7): ";
    int choice;
    cin >> choice;
   return choice;
}



void changePrice(vector<Product>& store){
cout << "Changing a product price:" << endl;
reportInventory(store);
cout << "Which product: ";
    int pos;
    cin >> pos;
    cout << "Enter the new price: ";
    double price;
    cin >> price;
    store[pos-1].setPrice(price);
}



void loadData(vector<Product>& store, string fileName){
ifstream fin;
fin.open(fileName.c_str());
if (fin.fail()){
    cout << "The input file failed to open.\n";
    exit(-1);
}
Product temp;
while(fin.good()){
   // Product temp;
    temp.read(fin);
    if(fin.good()){
        store.push_back(temp);
    }
}
fin.close();
}



void saveData(vector<Product>& store, string fileName){
ofstream fout;
fout.open(fileName.c_str());
if (fout.fail()){
    cout << "The output file failed to open.\n";
    exit(-1);
}
for (unsigned int i = 0; i < store.size(); i++){
    store[i].write(fout);
}
fout.close();
}

void writeReport(vector<Product> store, string fileName){
ofstream fout(fileName.c_str());
double value = 0;
if (fout.fail()){
    cout << "Report file was not opened\n";
    exit(-1);
}

    fout << "Report for my store:\n";
    fout << setw(30)<< left << "# Name" << setw(12) << "Price" << setw(12)
         << "Qty" << setw(6)<< right << "Value"<< endl;
    for (unsigned i = 0; i < store.size(); i++)
    {
        fout << i+1 <<" " << store[i].toString() << endl ;
        value = value + store[i].getValue();
}
fout << "\nTotal inventory value: " << value << endl;
fout.close();
}
