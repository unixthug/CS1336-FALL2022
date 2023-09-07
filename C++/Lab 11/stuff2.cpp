#include <iostream>

using namespace std;

void AverageNumbers(double, double, double);

int main()
{
    double num1, num2, num3;

    cout << "Please enter 3 numbers : " << endl;
    cin >> num1 >> num2 >> num3;

    AverageNumbers(num1, num2, num3);

    return 0;
}

void AverageNumbers(double n1, double n2, double n3) 
{
    double avg;
    avg = (n1 + n2 + n3) / 3;

    cout << "The average of your 3 numbers is : " << avg << endl;
}