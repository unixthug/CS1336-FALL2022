/*
Adam Jones
Frizell CS1336
11-7-2022
Program prompts user to enter in a school id case sensitively
Program runs a loop to iterate through every data line for cases of inputted id
If program finds a match, it will print the entire line the id was found on and close
If the program fails to find a match, it will produce an error message and close
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
    string info, id, input;
    int end;
    bool isStudent = false;

    ifstream records;
    records.open("studentrecords.txt");

    cout << "Please input student id (CASE SENSITIVE) : " << endl;
    cin >> input;

    for (int i = 1 ; i < 16 ; i++) {
        getline(records, info);
        end = info.find(' ');
        id = info.substr(0, end);
        if (input == id) {
            cout << info.substr(0, 50) << endl;
            isStudent = true;
            exit(0);
        } 
    }

    if (!isStudent) {
        cout << input << " is not an active student at the university." << endl;
        exit(0);
    }

    records.close();

    return 0;
}