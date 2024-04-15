#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(0)));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;

    cout << "Welcome to the Guess the Number Game!" << endl;

    do {
        // Get a guess from the user
        cout << "Enter your guess (1-100): ";
        cin >> guess;

        // Increment the attempts count
        attempts++;

        // Check if the guess is correct, too high, or too low
        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the correct number in " << attempts << " attempts." << endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Too low! Try again." << endl;
        }

    } while (guess != secretNumber);

    return 0;
}
