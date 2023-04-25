#include <stdio.h>

int main() {
  int a = 2; 
  double b = 5; 
  long long c = 12;

  int aBytes = sizeof(a);
  int bBytes = sizeof(b);
  int cBytes = sizeof(c);

  printf("int a has: " "%d" " bytes", aBytes);
  printf("\n");
  printf("int b has: " "%d" " bytes", bBytes);
  printf("\n");
  printf("int c has: " "%d" " bytes", cBytes);
  printf("\n");

  printf("address of a is: " "%p", &a);
  printf("\n");
  printf("address of b is: " "%p", &b);
  printf("\n");
  printf("address of c is: " "%p" , &c);
  printf("\n");



  return 0;
}
