#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() 
{
    ifstream fin;
    fin.open("input.dat");
    string line1;
    string line2;
    string line3;
    string line4;

    fin >> line1;
    fin >> line2;
    fin >> line3;
    fin >> line4;

    cout << line1 << endl;
    cout << line2 << endl;
    cout << line3 << endl;
    cout << line4 << endl;

    fin.close();

    return 0;
}