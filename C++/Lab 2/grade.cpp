#include <iostream>

using namespace std;

int main() 
{
    //variables
    double g1, g2, g3, avg;
    char grd;
    
    //user input
    cout << "This program can calculate the average of your 3 exam grades!" << endl;
    cout << "Input Exam 1 Grade: " << endl;
    cin >> g1;
    cout << "Input Exam 2 Grade: " << endl;
    cin >> g2;
    cout << "Input Exam 3 Grade: " << endl;
    cin >> g3;

    //average calculation
    avg = (g1 + g2 + g3) / 3;

    //Letter grade conversion
    if (avg > 89.5) {
        grd = 'A';
    } else if (avg < 89.5 && avg > 79.5) {
        grd = 'B';
    } else if (avg < 79.5 && avg > 69.5) {
        grd = 'C';
    } else if (avg < 69.5 && avg > 59.5) {
        grd = 'D';
    } else {
        grd = 'F';
    }

    //output
    cout << "Your average is : " << avg << endl;
    cout << "Which is the letter grade " << grd << endl;

}