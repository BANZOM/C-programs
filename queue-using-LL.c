#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int data;
    struct queue *next;
};

struct queue *create_queue(int element)
{
    struct queue *new = (struct queue *)malloc(sizeof(struct queue));
    new->data = element;
    new->next = NULL;
    return new;
}

void enqueue() {}
void dequeue() {}
void traverse() {}

int main()
{
    int c;
    while (1)
    {
        printf("\n1. Enqueue\n2. Dequeue\n3. Traverse\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            traverse();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}
