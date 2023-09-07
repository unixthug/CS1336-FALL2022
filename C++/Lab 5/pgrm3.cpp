/*
Adam Jones
Frizell
11-7-2022
Program reads in an input file "newhires.txt"
Program creates a user name using each full name in the list, adding 0's when necessary
Program creates an email for each person using the created username and a constant domain
Program makes email and username lowercase
Program prints each person's full name, username, and email to an output file "hiringdata.txt"
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
    string name, fname, lname, user, email;
    char fini;
    int end, diff;
    const string domain = "@riaztrucking.com";

    ifstream inhires;
    inhires.open("newhires.txt");
    ofstream outhires;
    outhires.open("hiringdata.txt");

    for (int i = 0 ; i < 20 ; i++) {
        getline(inhires, name);
        end = name.find(' ');
        fname = name.substr(0, end);
        fini = fname.at(0);
        lname = name.substr(end + 1, 20);

        user = fini + lname;

        diff = 6 - user.length();
        while (diff > 1) {
            diff = 6 - user.length();
            user += '0';
        }
        email = user + domain;
        outhires << name << ' ' << user << ' ' << email << endl;        
    }



    return 0;
}