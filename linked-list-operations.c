// operations:
/*
1. Insertion from beginning
2. Deletion from Beginning
3. Traversing the list
4. Finding length of the list
5. Insert at last
6. Delete from last
7. Insert after position
8. Delete at position
*/

#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
};

typedef struct node *NODE;
NODE head = NULL;

NODE insertAtBeg(){ }
NODE deleteFromBeg(){ }
NODE traverse(){ }
int findLen(){ }
NODE insertAtLast() { }
NODE deleteFromLast(){ }
NODE insertAfterPosition() { }
NODE deleteAtPosition() { }

int main(void) {
  int choice;
  
  do {
  printf("Functions:\n1. Insertion from beginning\n2. Deletion from Beginning\n3. Traversing the list\n4. Finding length of the list\n5. Insert at last\n6. Delete from last\n7. Insert after position\n8. Delete at position\n0. Exit\n");
  printf("Choose and input any one option: ");
  scanf("%d",&choice);
  
  switch (choice) {
    case 0:
      printf("Quitting\n");
      exit(0);
    case 1:
      insertAtBeg();
      break;
    case 2:
      deleteFromBeg();
      break;
    case 3:
      traverse();
      break;
    case 4:
      printf("Current length= %d\n", findLen());
      break;
    case 5:
      insertAtLast();
      break;
    case 6:
      deleteFromLast();
      break;
    case 7:
      insertAfterPosition();
      break;
    case 8:
      deleteAtPosition();
      break;
    default:
      printf("Wrong Input, Enter 0 to exit.\n\n");
  }
  } while (1);
  return 0;
}
