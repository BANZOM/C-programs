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
    int lenghtOfList;
    printf("Enter the no. of nodes: ");
    scanf("%d", &lengthOfList);
    printf("Enter the data: ");

    return 0;
}