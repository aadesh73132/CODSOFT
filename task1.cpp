// Create a program that generates a random number and asks the
// user to guess it. Provide feedback on whether the guess is too
// high or too low until the user guesses the correct number.

#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

int main() {
    // Seed the random number generator with the current time
    std::srand(std::time(0)); 

    // Generate a random number between 1 and 100
    int randomNumber = std::rand() % 100 + 1;
    int userGuess = 0;

    std::cout << "Welcome to the Number Guessing Game!\n";
    std::cout << "I have selected a random number between 1 and 100. Can you guess it?\n";

    // Loop until the user guesses the correct number
    while (true) {
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;

        // Check if the user's guess is correct, too high, or too low
        if (userGuess < randomNumber) {
            std::cout << "Too low! Try again.\n";
        } else if (userGuess > randomNumber) {
            std::cout << "Too high! Try again.\n";
        } else {
            std::cout << "Congratulations! You guessed the correct number: " << randomNumber << "\n";
            break; // Exit the loop as the correct number is guessed
        }
    }

    std::cout << "Thank you for playing!\n";
    return 0;
}
