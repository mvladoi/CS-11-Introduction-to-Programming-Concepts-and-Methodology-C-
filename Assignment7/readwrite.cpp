#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("rawdata.txt");
    if (fin.fail())
    {
        cout << "Input file failed to open.\n";
        exit(-1);
    }
    vector<double> data;
    double value;
    while(fin >> value)
    {
        cout << "Read: " << value << endl;
        data.push_back(value);
    }

    fin.close();
    double sum = 0;
    int countt = data.size();
    for (int i = 0; i < countt; i++)
    {
        sum = sum + data[i];
    }
    double average = sum / countt;
    cout << "Average = " << average << endl;

    ofstream fout;
    fout.open("output.text");
    if (fout.fail())
    {
        cout << "Output file failed to open.\n";
        exit(-1);
    }

    for (int i = 0; i < countt; i++)
    {
        fout << data[i] << endl;
    }
    fout << "Average = " << average << endl;
    fout.close();
    return 0;
}
