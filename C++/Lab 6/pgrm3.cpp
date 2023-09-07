//Code author Adam Jones || 11-22-22 || CS1336 || Frizell
//Program reads in a temperature value and type, and then it to or from celcius/fahrenheit


#include <iostream>

using namespace std;

void ConvertToC(double);
void ConvertToF(double);


int main()
{
    double temp;
    char type;
    cout << "Please enter the temperature in degrees : " << endl;
    cin >> temp;
    cout << "Please input c for celcius or f for fahrenheit : " << endl;
    cin >> type;

    if (type == 'c' || type == 'C')
        ConvertToF(temp);
    if (type == 'f' || type == 'F')
        ConvertToC(temp);

}

void ConvertToC(double temp) {
    double newTemp = (temp - 32)*5/9; 
    cout << "The temperature in Celcius is " << newTemp << " degrees." << endl;
}

void ConvertToF(double temp) {
    double newTemp = temp*(9/5) + 32;
    cout << "The temperature in Fahrenheit is " << newTemp << " degrees." << endl;
}