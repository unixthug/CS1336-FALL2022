#include <iostream>
using namespace std;
int main()
{
    int input[3], small;
    cout << "Enter 3 numbers" << endl;
    for (int i = 0; i < 3 ; i++) {
        cin >> input[i];
    }
    small = input[0];
    for (int i = 0; i < 3 ; i++) {
        if(input[i] < small) {
            small = input[i];
        }
    }
    cout << "The smallest number is : \n" << small;




    return 0;
}