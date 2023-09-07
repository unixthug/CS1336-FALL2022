#include <iostream>
#include <string>

using namespace std;

int main() 
{
    //variables
    string fname, lname, mini;

    //user input
    cout << "What is your first name?" << endl;
    cin >> fname;
    cout << "What is your last name?" << endl;
    cin >> lname;
    cout << "What is your middle initial?" << endl;
    cin >> mini;

    //output
    cout << fname + " " + mini + ". " + lname << endl;
    cout << lname + ", " + fname + " " + mini + ". " << endl;
    
}
