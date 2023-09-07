//Code author Adam Jones || 10-24-2022 || CS1336 || Frizell
/*
Program reads in credit hours and determines classification
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name, clas;
    int hours;
    cout << "Please enter name and credit hours : " << endl;
    getline(cin, name);
    cin >> hours;

    if (hours < 30) {
        clas = "Freshman";
    } else if (hours >= 30 && hours < 60) {
        clas = "Sophomore";
    } else if (hours >= 60 && hours < 90) {
        clas = "Junior";
    } else if (hours >= 90) {
        clas = "Senior";
    }
    cout << "Your classification is " << clas << endl;
} 