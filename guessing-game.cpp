#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int number, guess;

    srand(time(0));
    number = rand() % 100 + 1; // random number between 1-100

    cout << "Guess the number (1 to 100)\n";

    while(true) {
        cout << "Enter your guess: ";
        cin >> guess;

        if(guess > number)
            cout << "Too high!\n";
        else if(guess < number)
            cout << "Too low!\n";
        else {
            cout << "Correct! You guessed it 🎉\n";
            break;
        }
    }
}