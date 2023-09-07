//adam z jones
//9/14/2022
//program calculates and prints out the area of a triangle
/* algorithm
    1. takes input to find the base & height
    2. calculates the area
    3. prints out all three values (to 3 decimals)
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //variables
    float base, height, area;

    //input
    cout << "Welcome to the Triangle Calculator! Please input the base of your triangle : " << endl;
    cin >> base;
    cout << "Input the height : " << endl;
    cin >> height;

    //calculations
    area = (base * height) / 2;

    //output
    cout << "The base of the triangle is \n" << base << endl;
    cout << "The height of the triangle is \n" << height << endl;
    
    cout << fixed << setprecision(3) << "The area of the triangle is \n" << area << endl;
    
    return 0;
}