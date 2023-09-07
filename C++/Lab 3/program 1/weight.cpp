//adam z jones
//9/14/2022
//program reads name and weight in lbs. and returns a number 15% lower than inputted weight with difference
/* algorithm
    1. reads name and weight from user input
    2. calculates 15% weight loss and difference from initial input
    3. prints results to console


*/


#include <iostream>
#include <string>
using namespace std;

int main()
{
    int weight, ini;
    string name;

    cout << "Enter your name and current weight in lbs. and I will determine what your 15% weight loss would be!" << endl;
    getline(cin, name);
    cin >> weight;
    ini = weight;
    
    //15% loss
    weight *= 0.85;
    cout << "Hello " << name << ". A 15% would weight loss would put you at " << weight << " lbs." << endl;
    cout << "To reach this you would need to lose " << ini - weight << " lbs." << endl;
    
    
    return 0;
}