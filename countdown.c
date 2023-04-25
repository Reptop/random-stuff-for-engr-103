#include <stdio.h>
#include <time.h>
#include<unistd.h>


struct node {
  int data;
  struct node *next;
};

int main() {

  for (int i = 10; i >= 0; i--) {
    printf("%d", i);
    fflush(stdin);

    sleep(1);
    printf("\n");
    fflush(stdin);
  }

  struct node *head = NULL;
  //head->next = new node();
  struct node list[10];


  return 0;
}
