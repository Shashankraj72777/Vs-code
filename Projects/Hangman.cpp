#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to check if the guessed letter is in the word
bool isLetterInWord(char letter, const string& word) {
    for (char c : word) {
        if (c == letter) {
            return true;
        }
    }
    return false;
}

// Function to update the display of the word with correct guesses
void updateWordDisplay(char letter, const string& word, string& display) {
    for (size_t i = 0; i < word.length(); ++i) {
        if (word[i] == letter) {
            display[i] = letter;
        }
    }
}

int main() {
    // List of words to choose from
    vector<string> words = {"hangman", "programming", "computer", "cplusplus", "developer"};

    // Seed for random number generation
    srand(static_cast<unsigned int>(time(nullptr)));

    // Select a random word from the list
    string selectedWord = words[rand() % words.size()];

    // Display to show the progress of the player
    string display(selectedWord.length(), '_');

    // Number of incorrect guesses allowed
    const int maxIncorrectGuesses = 6;
    int incorrectGuesses = 0;

    // Set of letters guessed by the player
    string guessedLetters;

    // Main game loop
    while (incorrectGuesses < maxIncorrectGuesses && display != selectedWord) {
        // Display current progress
        cout << "Word: " << display << endl;
        cout << "Guessed Letters: " << guessedLetters << endl;

        // Get a letter guess from the player
        char guess;
        cout << "Enter a letter guess: ";
        cin >> guess;

        // Check if the letter has already been guessed
        if (guessedLetters.find(guess) != string::npos) {
            cout << "You already guessed that letter. Try again." << endl;
            continue;
        }

        // Add the letter to the guessed letters set
        guessedLetters += guess;

        // Check if the letter is in the word
        if (isLetterInWord(guess, selectedWord)) {
            updateWordDisplay(guess, selectedWord, display);
            cout << "Correct guess!" << endl;
        } else {
            cout << "Incorrect guess." << endl;
            ++incorrectGuesses;
        }
    }

    // Display the result
    if (display == selectedWord) {
        cout << "Congratulations! You guessed the word: " << selectedWord << endl;
    } else {
        cout << "Sorry, you ran out of guesses. The word was: " << selectedWord << endl;
    }

    return 0;
}
