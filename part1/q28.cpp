#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Seed the random number generator
    int target = rand() % 100 + 1; // Random number between 1 and 100
    int attempts = 7; // Number of attempts allowed
    int guess;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100. You have " << attempts << " attempts to guess it." << endl;

    while (attempts > 0) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess == target) {
            cout << "Congratulations! You guessed the number correctly." << endl;
            break;
        } else if (guess < target) {
            cout << "Too low!" << endl;
        } else {
            cout << "Too high!" << endl;
        }

        attempts--;

        if (attempts == 0) {
            cout << "Sorry, you've used all your attempts. The number was " << target << "." << endl;
        } else {
            cout << "You have " << attempts << " attempts left." << endl;
        }
    }

    return 0;
}