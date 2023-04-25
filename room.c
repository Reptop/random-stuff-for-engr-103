#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

  srand(time(NULL));
  int total = 0;

  int room[10];

  for (int i = 0; i < 10; ++i) {
    room[i] = rand() % 5;
  }

  for (int i = 0; i < 10; ++i) {
    total += room[i];
  }

  for (int i = 0; i < 10; ++i) {
    printf("# of People in in room number %d is: ", i);
    printf("%d", room[i]);
    printf("\n");
  }
  
  printf("\n");
  printf("Total occupancy %d", total);

  return 0;
}
