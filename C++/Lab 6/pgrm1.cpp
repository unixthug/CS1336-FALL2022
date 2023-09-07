//Code author Adam Jones || 11-21-22 || CS1336 || Frizell
//Program reads in a character and determines if it is a vowel or not

#include <iostream>

using namespace std;

void isVowel(char);
char input;
int main()
{
    cout << "Please input a character : " << endl;
    cin >> input;

    isVowel(input);

}

void isVowel(char c) {
    if (c == 'a' || c == 'A')
        cout << "The character is a vowel" << endl;
    else if(c == 'e' || c == 'E')
        cout << "The character is a vowel" << endl;
    else if(c == 'i' || c == 'I')
        cout << "The character is a vowel" << endl;
    else if(c == 'o' || c == 'O')
        cout << "The character is a vowel" << endl;
    else if(c == 'u' || c == 'U')
        cout << "The character is a vowel" << endl;
    else 
        cout << "The character is not a vowel" << endl;
}