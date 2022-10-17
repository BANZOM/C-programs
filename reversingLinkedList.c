#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} * head;
typedef struct node *NODE;

NODE createNode()
{
    NODE temp;
    temp = (NODE)malloc(sizeof(struct node));
    temp->next = NULL;
    return temp;
}
int main()
{

    return 0;
}