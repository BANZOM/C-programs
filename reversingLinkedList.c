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

void createList(int length)
{
    if (length == 0)
    {
        printf("Length must be greater than zero. PROGRAM EXIT");
        exit(0);
    }
    else
    {
        int num;
        NODE ptr = head, newNode = createNode();
        for (int i = 0; i < length; i++)
        {
            scanf("%d", &num);
            newNode->data = num;
            ptr = newNode;
        }
    }
}

int main()
{
    int lengthOfList;
    printf("Enter the no. of nodes: ");
    scanf("%d", &lengthOfList);
    printf("Enter the data: ");
    createList(lengthOfList);
    return 0;
}