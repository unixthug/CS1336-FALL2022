//adam z jones
//9/14/2022
//program calculates the area and circumference of a circle given the radius
/* algorithm
    1. reads the radius from user input
    2. calculates the area and circumference from given radius
    3. prints results to console

*/

#include <iostream>

using namespace std;
int main()
{
    const float pi = 3.14159;
    float rad, area, circum;
    cout << "Welcome to the Circle Calculator! Please input radius : " << endl;
    cin >> rad;
    area = pi * (rad * rad);
    circum = 2 * pi * rad;

    cout << "The area of the circle is " << area << "\nThe circumference is " << circum << endl;

    return 0;
}