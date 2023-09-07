//Code author Adam Jones || 10-24-2022 || CS1336 || Frizell
/*
Program reads in credit hours and gpa and returns eligibility status
*/
#include <iostream>
using namespace std;

int main()
{
    double gpa;
    int cred;

    cout << "Please enter gpa and credit hours to determine eligibility: " << endl;

    cin >> gpa;
    cin >> cred;
    if (gpa >= 2.8 && cred >= 30) {
        cout << "You are eligible" << endl;
    }
    if (gpa >= 2.8 && cred < 30) {
        cout << "You are not eligible. \n Your credit hours are too low." << endl;
    }
    if (gpa < 2.8 && cred >= 30) {
        cout << "You are not eligible. \n Your GPA is too low." << endl;
    }
    if (gpa < 2.8 && cred < 30) {
        cout << "You are not eligible, both your credit hours and gpa are too low.";
    }

    return 0;

}