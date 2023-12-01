# codsoft-C-Task-1

# Number Guessing Game 

Welcome to the Number Guessing Game! This simple C++ program allows users to guess a randomly generated number within a specified range.

## How to Play

1. Clone the repository to your local machine.

    ```bash
    git clone https://github.com/your-username/number-guessing-game.git
    ```

2. Compile the program using a C++ compiler (e.g., g++).

    ```bash
    g++ number_guessing_game.cpp -o number_guessing_game
    ```

3. Run the compiled executable.

    ```bash
    ./number_guessing_game
    ```

4. Follow the instructions to guess the correct number within a given range.

# Program Overview

- The program generates a random number between 1 and 100.
- You have 10 attempts to guess the correct number.
- After each guess, the program provides feedback on whether the guess is too high or too low.
- The game ends when you guess the correct number or run out of attempts.

# Implementation Details

- The random number is generated using the `generate_random_number` function.
- Input validation is implemented in the `guess_the_number` function to handle invalid inputs.
- The game loop in the `main` function iterates until the correct number is guessed or the player runs out of attempts.

# Sample Gameplay

Welcome to the Number Guessing Game!
You have 10 attempts to guess the number between 1 and 100.

Enter your guess: 50
Too high! Try again 50
You have 9 attempt(s) left.

Enter your guess: 25
Too low! Try again 25
You have 8 attempt(s) left.

...

Congratulations! You guessed the correct number. You win!
Thank you for playing the Number Guessing Game!

# screenshots
![guessing1](https://github.com/Srivarthaniselvam/codsoft-C-Task-1/assets/151417502/2b3bae78-072d-42bc-bbec-67ae8e06ba79)
![guessing2](https://github.com/Srivarthaniselvam/codsoft-C-Task-1/assets/151417502/4eaef30c-14a0-4262-ac6f-f3aa2dd894b2)
![guessing3](https://github.com/Srivarthaniselvam/codsoft-C-Task-1/assets/151417502/867be339-ae9c-4d77-ad19-b266d0e625cf)
![guessing4](https://github.com/Srivarthaniselvam/codsoft-C-Task-1/assets/151417502/6062459d-ae28-4c6b-aa21-2ff485181729)

