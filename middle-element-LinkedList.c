// Searching middle element of a Linked List

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node *NODE;

NODE createNode(int data)
{
    NODE node = (NODE)malloc(sizeof(struct node));
    node->data = data;
    node->next = NULL;
    return node;
}

int main(void)
{
    NODE head = NULL;
}