#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

void toScreen(ifstream& fin);

int main()
{
    string filename, line;

    cout << "Enter a file name: ";
    cin >> filename;

    ifstream fin(filename.c_str());
    if (fin.fail())
    {
        cout << "Input file failed to open.\n";
        exit(-1);
    }
    toScreen(fin);
    fin.close();

    return 0;
}

void toScreen(ifstream& fin)
{
    string line;
    int countt = 1;
    while (getline(fin, line))
    {
        cout << countt << ": " << line << endl;
        countt++;
    }

}

