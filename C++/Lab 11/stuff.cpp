#include <iostream>

using namespace std;

//Function Declaration
//Global Declaration
double Sum(double, double);

int main()
{
    double num1, num2, answer;
    
    cout << "Enter 2 numbers : " << endl;
    cin >> num1 >> num2;

    //function call
    answer = Sum(num1, num2);

    //print result
    cout << "The sum of the two numbers is : " << answer << endl;
    return 0;
}

double Sum(double n1, double n2)
{
    double sum;
    sum = n1 + n2;

    return sum;
}
