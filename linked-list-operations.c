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

void create_node() {
  NODE new = (NODE)malloc(sizeof(struct node));
  printf("Enter the data: ");
  scanf("%d",&new->data);
  new->next = NULL;
  return new;
}

void insertAtBeg(){
  NODE new = create_node();
  new->next = head;
  head = new;
}

void deleteFromBeg(){
  struct node *temp;
  if (head == NULL) {
    printf("Nothing to delete, List is empty.\n");
    return;
  }
  temp = head;
  head = head->next;
  free(temp);
}

void traverse(){
  if (head == NULL)
    printf("List is empty\n");
  else {
    NODE nd = head;
    while (nd) {
      printf("%d->", nd->data);
      nd = nd->next;
    }
    printf("NULL\n");
  }
}

int findLen(){
 NODE nd = head;
  int len = 1;
  if (head == NULL)
    return 0;

  while (nd->next) {
    len++;
    nd = nd->next;
  }
  return len
}

void insertAtLast() { 
  NODE new = create_node();
  
  NODE nd = head;
  if (head == NULL) {
    head = new;
    return;
  }

  while (nd->next) {
    nd = nd->next;
  }
  nd->next = new;
}

void deleteFromLast(){ 
  NODE nd = head, target = head;
  if (head == NULL)
    printf("Nothind to delete\n");
  else if (head->next == NULL) {
    target = head;
    head = NULL;
    free(target);
  } else {
    while (nd->next->next != NULL) {
      nd = nd->next;
      target = nd;
    }
    nd = target->next;
    target->next = NULL;
    free(nd);
  }
}

void insertAfterPosition() { }
void deleteAtPosition() { }

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
