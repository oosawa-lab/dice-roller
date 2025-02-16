/* -----------------------------------------------------------------------------*/
/* Copyright (c) 2025 Chikoo Oosawa, Kyushu Institute of Technology             */
/* This project is licensed under the MIT License.                              */
/* You can find the full license at: https://opensource.org/licenses/MIT        */
/*                                                                              */
/* Repository: https://github.com/oosawa-lab/dice-roller/                       */
/* -----------------------------------------------------------------------------*/
/* dice-02.c */
/* A program to simulate rolling a dice multiple times */
/* 
   Description:
   This program simulates rolling a six-sided dice a specified number of times.
   The number of rolls is passed as a command-line argument.
   Each roll result is printed with its corresponding roll number.
   The random number generator is seeded using the current time.
*/

#include<stdio.h>  // Standard input/output library, used for printf
#include<time.h>   // Time library, used for time(NULL) to seed the random number generator
#include<math.h>   // Math library (not used in this program, but included by default)
#include<stdlib.h> // Standard library, used for functions like srand() and rand()

int main(int argc, char *argv[])
{  
  // Initialize the random number generator using the current time
  srand((unsigned)time(NULL));
  
  int i;

  // Roll the dice the number of times specified in the command-line argument
  for(i = 0; i < atoi(argv[1]); i++)  // argv[1] contains the number of rolls
    {
      // Print the roll number and the result of the dice roll
      // rand() % 6 + 1 generates a random number between 1 and 6
      printf("%d\t%d\n", (i + 1), rand() % 6 + 1);
    }

  // Return 0 to indicate normal termination
  return(0);
}
