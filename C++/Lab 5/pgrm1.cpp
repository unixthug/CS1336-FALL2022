/*
Adam Jones
Frizell CS1336
11-7-2022
Program picks a random number from 0-100
Program prompts user to input a number from 0-1oo to try to guess the random one
Program determines correctness and if incorrect will prompt again 4 more times
Program will return a game over message if no correct answer is given
*/

#include <iostream>
#include <ctime>

using namespace std;
int main() 
{
    //variables
    int num, guess;
    char end;
    bool play = true;
    bool replay = false;
    bool ran = false;

    //change rand function so it's not so boring -_-
    srand(time(0));

    //random int from 0-100 stored in num
    num = rand() % 100;
    
    //counter
    int i = 0;

    //Intro
    cout << "Welcome to the number guessing game! Please guess a number from 0-100 : " << endl;

    //guess loop
    while (play) {
        if(replay) {
            i = 0;
            ran = false;
        }

        do
        {
            cin >> guess;
            if (guess == num) {
                cout << "You guessed correctly!!" << endl;
                play = false;
            } 
            if (guess == num && replay) {
              cout << "Hey, that's cheating!" << endl;
              exit(0);
            } else {
                cout << "Wrong answer " << 4 - i << " guesses remaining." << endl;
                play = false;
                i++;
            }
        } while (i < 5);
        
        if (i >= 5) {
            cout << "You failed to guess the number." << endl;
            cout << "The number was " << num << endl;
            play = false;
        }

        while(!play && !ran) {
            cout << "Do you want to play again? (Y/N)" << endl; 
            ran = true;
            cin >> end;
            if (end == 'Y' || end == 'y') {
                cout << "Welcome to the number guessing game! Please guess a number from 0-100 : " << endl;
                play = true;
                replay = true;
            } else if (end == 'N' || end == 'n') {
                play = false;
                exit(0);
            }
    }
      }
    return 0;
}