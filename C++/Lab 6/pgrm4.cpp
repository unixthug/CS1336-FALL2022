//Code author Adam Jones || 11-22-22 || CS1336 || Frizell
//Program reads in a temperature value and type, and then it to or from celcius/fahrenheit


#include <iostream>

using namespace std;

double ConvertToC(double);
double ConvertToF(double);


int main()
{
    double temp;
    char type;
    string typ;
    cout << "Please enter the temperature in degrees : " << endl;
    cin >> temp;
    cout << "Please input c for celcius or f for fahrenheit : " << endl;
    cin >> type;

    if (type == 'c' || type == 'C') {
        temp = ConvertToF(temp);
        typ = "Fahrenheit";
    }

    if (type == 'f' || type == 'F') {
        temp = ConvertToC(temp);
        typ = "Celcius";
    }
    cout << "The temperature in " << typ << " is " << temp << endl;
}

double ConvertToC(double temp) {
    double newTemp = (temp - 32)*5/9; 
    return newTemp;
}

double ConvertToF(double temp) {
    double newTemp = temp*(9/5) + 32;
    return newTemp;
}