#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node *NODE;

NODE head = NULL;

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
        NODE ptr = createNode();
        head = ptr;
        for (int i = 0; i < length; i++)
        {
            scanf("%d", &num);
            ptr->data = num;
            if (i + 1 < length)
                ptr->next = createNode();
            ptr = ptr->next;
        }
    }
}

void reverse()
{
    NODE prev = NULL;
    NODE current = head;
    NODE next;
    while (current != NULL)
    {
        next = current->next;

        current->next = prev;

        prev = current;
        current = next;
    }
    head = prev;
}
void traverse()
{
    NODE ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    // printf("NULL");
}

int main()
{
    int lengthOfList;
    printf("Enter the no. of nodes: ");
    scanf("%d", &lengthOfList);
    printf("Enter the data: ");
    createList(lengthOfList);
    reverse();
    traverse();
    return 0;
}