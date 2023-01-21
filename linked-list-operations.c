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

int main(void) {
  int choice;
  
  printf("Functions:\n1. Insertion from beginning\n2. Deletion from Beginning\n3. Traversing the list\n4. Finding length of the list\n5. Insert at last\n6. Delete from last\n7. Insert after position\n8. Delete at position\n0. Exit\n");
  printf("Choose and input any one option: ");
  scanf("%d",&choice);
}
