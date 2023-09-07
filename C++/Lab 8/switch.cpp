#include <iostream>

using namespace std;

int main() {

int num;
string day;

cout << "Please enter what day of the week it is (1-7) : " << endl;
cin >> num;

switch (num) {
    case 1:
        cout << "Today is Sunday";
        break;
    case 2:
        cout << "Today is Monday";
        break;
    case 3:
        cout << "Today is Tuesday";
        break;
    case 4:
        cout << "Today is Wednesday";
        break;
    case 5:
        cout << "Today is Thursday";
        break;
    case 6:
        cout << "Today is Friday";
        break;
    case 7:
        cout << "Today is Saturday";
        break;
    default:
        cout << "Please enter a value from 1-7!";
        break;

}


















return 0;

}