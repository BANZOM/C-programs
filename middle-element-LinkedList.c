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

NODE insertAtLast(NODE head, int data)
{
    NODE new = createNode(data);
    NODE nd = head;
    if (head == NULL)
    {
        return new;
    }

    while (nd->next)
    {
        nd = nd->next;
    }
    nd->next = new;

    return head;
}
void traverse(NODE head)
{
    if (head == NULL)
        printf("List is empty\n");
    else
    {
        NODE nd = head;
        while (nd)
        {
            printf("%d->", nd->data);
            nd = nd->next;
        }
        printf("NULL\n");
    }
}

int main(void)
{
    NODE head = NULL;
    // input format: enter numbers and enter -1 to stop;
    printf("Enter the data: ");
    int data;
    while (1)
    {
        scanf("%d", &data);
        if (data == -1)
            break;
        head = insertAtLast(head, data);
    }

    printf("\n");
    printf("The List is : ");
    traverse(head);
    printf("\n");

    return 0;
}