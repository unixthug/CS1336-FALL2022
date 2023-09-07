//Code author Adam Jones || 10-24-2022 || CS1336 || Frizell
/*
Program calculates two integers using function determined by user input
*/
#include <iostream>
using namespace std;

int main() 
{
    int num1, num2;
    char func;
    double result;
    bool canCal = true;
    cout << "Input calculator function ( +, -, *, /)" << endl;
    cin >> func;
    cout << "Input 2 integers to be calculate (in order): " << endl;
    cin >> num1;
    cin >> num2;
    if (func == '+') {
        result = num1 + num2;
    }
    if (func == '-') {
        result = num1 - num2;
    }
    if (func == '*' && num2 != 0) {
        result = num1 * num2;
    }
    if (func == '/' && num2 != 0) {
        result = num1 / num2;
    } else if (func == '/' && num2 == 0) {
        cout << "ERROR! Denominator cannot be 0." << endl;
        canCal = false;
        exit(0);
    }

    if (canCal == true) { 
    cout << num1 << func << num2 << "=";
    cout << result << endl;
    }

    return 0;
}