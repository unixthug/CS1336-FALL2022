//Code author Adam Jones || 11-21-22 || CS1336 || Frizell
//Program reads in a character amd determines if it is a vowel or not


#include <iostream>

using namespace std;

bool isVowel(char);
char input;
bool isVow;
int main()
{
    cout << "Please input a character : " << endl;
    cin >> input;

    isVowel(input);
    if (isVow == true)
        cout << "The character is a vowel" << endl;
    else
        cout << "The character is not a vowel" << endl;

}

bool isVowel(char c) {
    if (c == 'a' || c == 'A')
        isVow = true;
    else if(c == 'e' || c == 'E')
        isVow = true;
    else if(c == 'i' || c == 'I')
        isVow = true;
    else if(c == 'o' || c == 'O')
        isVow = true;
    else if(c == 'u' || c == 'U')
        isVow = true;
    else 
        isVow = false;
    return isVow;
}