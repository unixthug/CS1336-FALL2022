//adam z jones
//9/14/2022
//program reads the work hours and hourly pay and calculates weekly and annual income
/* algorithm
    1. reads the work hours per week and hourly pay
    2. calculates the weekly income and annual income
    3. prints the results to console (to 2 decimals)

*/

#include <iostream>
#include <iomanip>

using namespace std;
int main() 
{
    int hours;
    double pay, wpay, ypay;

    cout << "How many hours do you work per week? : " << endl;
    cin >> hours;
    cout << "What is your hourly pay? : " << endl;
    cin >> pay;

    wpay = pay * hours;
    ypay = wpay * 52;

    cout << fixed << setprecision(2);
    cout << "Your weekly income is $" << wpay << endl;
    cout << "Your annual income is $" << ypay << endl;


    return 0;
}