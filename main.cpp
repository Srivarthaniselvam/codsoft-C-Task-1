#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

int generate_random_number() {
    const int MIN_NUMBER = 1;
    const int MAX_NUMBER = 100;

    srand(time(0));
    return rand() % (MAX_NUMBER - MIN_NUMBER + 1) + MIN_NUMBER;
}

bool check_if_equal(int correct_number, int guess) {
    bool correct = false;

    if (guess == correct_number) {
        correct = true;
    } else if (guess > correct_number) {
        std::cout << "Too low! Try again " << guess << std::endl;
    } else if (guess < correct_number) {
        std::cout << "Too high! Try again " << guess << std::endl;
    }

    return correct;
}

int guess_the_number() {
    int guess = 0;

    std::cout << std::endl << "Enter your guess: ";
    std::cin >> guess;

    while (std::cin.fail()) {
        std::cout << "Invalid input. Please enter a valid number." << std::endl;
        std::cin.clear(); // Clear the error flag
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
        std::cout << "Enter your guess: ";
        std::cin >> guess;
    }

    return guess;
}

int main() {
    int random_number = generate_random_number();

    std::cout << "Welcome to the Number Guessing Game!\n";
    std::cout << "You have 10 attempts to guess the number between 1 and 100.\n";

    int attempts = 10;
    bool correct = false;

    while (attempts > 0 && !correct) {
        int guess = guess_the_number();
        correct = check_if_equal(random_number, guess);

        attempts--;

        if (attempts > 0 && !correct) {
            std::cout << "You have " << attempts << " attempt(s) left." << std::endl;
        }
    }

    if (!correct) {
        std::cout << std::endl << "You lose! The correct number was: " << random_number << std::endl;
    } else {
        std::cout << std::endl << "Congratulations!You guessed the correct number You win!" << std::endl;
    }
    
     std::cout << "Thank you for playing the Number Guessing Game!\n";
    return 0;
}
