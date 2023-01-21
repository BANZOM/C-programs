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


