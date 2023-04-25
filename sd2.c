#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>

//testing logic for checking num
bool isNum(int v) {
    if (scanf("%d", &v) == 1) {
        return true;
    }
    return false;
}


void logic() {
//for(;;) {
  
  int input1;
  int input2; 

  printf("gooohoohee eheee putt in a two numbys \n");

    printf("gooheee numby 1: ");
    printf("\n");

    if (scanf("%d", &input1) != 1) {
      printf("dude what");
      printf("\n");
      fflush(stdin);
      printf("Try again");
      printf("\n");
      logic();
    }

    printf("numby numby 1: " "%d", input1);
    printf("\n");
    printf("\n");

    printf("putta in da numby 2: ");

    if (scanf("%d", &input2) != 1) {
      printf("nuh uh uh");
      printf("\n");
      fflush(stdin);
      printf("Try again");
      printf("\n");
      logic();
    }

    printf("ahaha numby 2 shit the fuck up: " "%d", input2);
    printf("\n");
    printf("\n");

    int sum = input1 + input2; 
    int difference = input1 - input2; 
    int modulus = input1 % input2;

    printf("The sum is: " "%d", sum);
    printf("\n");

    printf("The difference is: " "%d", difference);
    printf("\n");

    printf("The modulus: " "%d", modulus);
    printf("\n");

    exit(0);
  //}
  
}

int main() {

  logic();

  return 0; 
}
