#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator with the current time
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    // Generate a random number between 1 and 100
    int randomNumber = std::rand() % 100 + 1;

    int userGuess;
    int attempts = 0;

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I've picked a random number between 1 and 100. Try to guess it!" << std::endl;

    // Start a loop to allow the user to make guesses
    do {
        // Prompt the user to enter their guess
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;
        attempts++; // Increment the number of attempts

        // Check if the guess is too low, too high, or correct
        if (userGuess < randomNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (userGuess > randomNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            // The guess is correct
            std::cout << "Congratulations! You guessed the correct number (" << randomNumber << ") in " << attempts << " attempts." << std::endl;
        }
    } while (userGuess != randomNumber); // Continue the loop until the guess is correct

    return 0;
}