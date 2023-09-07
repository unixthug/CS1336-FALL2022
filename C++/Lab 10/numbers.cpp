/*
Adam Jones 
11-1-2022
Program reads in integers from a data file
Program then runs a while loop to check integers for relation to 100
Program counts and prints out the totals of checked relations
*/


#include <iostream>
#include <fstream>

using namespace std;
int main() 
{
    int num, lcount, ecount, gcount;
    lcount = 0;
    ecount = 0;
    gcount = 0;
    int i = 0;
    ifstream input;
    input.open("numbers.dat");
    while (i < 50) {
        input >> num;
        if (num < 100) {
            lcount++;
        } else if (num == 100) {
            ecount++;
        } else if (num > 100) {
            gcount++;
        }
        i++;
    }


    input.close();

    cout << lcount << " numbers were less than 100" << endl;
    cout << ecount << " numbers were equal to 100" << endl;
    cout << gcount << " numbers were greater than 100" << endl;

    return 0;
}