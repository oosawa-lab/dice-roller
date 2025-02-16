# dice-roller
# Dice Roller Program

## Description

This C program simulates rolling a six-sided dice a specified number of times. The number of rolls is passed as a command-line argument. For each roll, the program outputs the roll number along with the result (a random number between 1 and 6).

The program uses the `rand()` function to generate random numbers and seeds the random number generator using the current system time to ensure different results on each execution.

## Features

- Simulates dice rolls.
- Prints the roll number and the result of each roll.
- Accepts the number of rolls as a command-line argument.
- Uses the `rand()` function and current time as the seed for randomness.

## Prerequisites

- A C compiler (e.g., GCC).
- A terminal or command-line interface to run the program.

## Compilation and Usage

gcc code.c
./a.out <number_of_rolls>

In the above output:
- The first column represents the roll number.
- The second column represents the result of the dice roll (random number between 1 and 6).

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
