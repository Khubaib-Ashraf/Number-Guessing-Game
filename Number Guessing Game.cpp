#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int guess, attempts = 0;

    cout << "Guess the number between 1 and 100!" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            cout << "Too low!" << endl;
        } else if (guess > secretNumber) {
            cout << "Too high!" << endl;
        } else {
            cout << "Congratulations! You guessed it in " << attempts << " attempts." << endl;
        }
    } while (guess != secretNumber);

    return 0;
}
