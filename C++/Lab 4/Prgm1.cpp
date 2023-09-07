//Code author Adam Jones || 10-24-2022 || CS1336 || Frizell
/*
Program reads in gasoline type and returns the cost of gasoline
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int gal = 15;
    char input;
    double price;
    bool isGas = true;
    cout << "What kind of gasoline does your car take?" << endl;
    cout << "Regular (R), Plus (P), or Supreme (S)" << endl;
    cin >> input;

    if (input == 'R' || input == 'r') {

        price = 2.79;

    } else if (input == 'P' || input == 'p') {
        price = 2.99;

    } else if (input == 'S' || input == 's') {
        price = 3.39;

    } else {
        cout << "Wrong gas choice" << endl;
        isGas = false;
    }
    cout << fixed << setprecision(2);
    if (isGas) {
    cout << "The cost to fill up your car is: $" << gal * price << endl;
    }

    return 0;    
}