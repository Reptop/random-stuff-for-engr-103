#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>


int main() {
  
  //random seed
  srand(time(NULL));

  bool run = true;
  int input;
  int randomNum = rand() % 100;

  int guessLimit = 0;

  printf("Welcome to Guessing Game!\n");
  printf("Guess a number between 0 and 100\n");
  printf("\n");

  while (run && guessLimit < 6) {
    printf("Enter your guess: ");

    if (scanf("%d", &input) != 1) {
      fflush(stdin);
      printf("Invalid Input.\n");
    }

    else if (0 < input && input < 100 && input < randomNum) {
      printf("Your guess is too low\n");
      printf("\n");
      guessLimit++;
    }
    else if (0 < input && input < 100 && input > randomNum) {
      printf("Your guess is too high\n");
      printf("\n");
      guessLimit++;
    }
    else if(input < 0 || input > 100) {
      printf("Your guess is out of range.\n"); 
      printf("Please input a number between 0 and 100\n");
      printf("\n");
      //guessLimit++;
    }
    else if (input == randomNum) {
      printf("You guessed the correct number!\n");
      printf("The correct number was %d", randomNum);
      printf("\n");
      exit(0);
    }
  }
  printf("You ran out of guesses!\n");
  printf("The correct number was: %d", randomNum);
  exit(0);
  return 0;
}
