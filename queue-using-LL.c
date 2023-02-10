#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int data;
    struct queue *next;
};

struct queue *front = NULL, *rear = NULL;
struct queue *create_queue(int element)
{
    struct queue *new = (struct queue *)malloc(sizeof(struct queue));
    if (new == NULL)
    {
        printf("Cannot Locate memory. Exiting.....\n");
        exit(0);
    }
    new->data = element;
    new->next = NULL;
    return new;
}

void enqueue()
{
    printf("Enter the element to be enqueued: ");
    int element;
    scanf("%d", &element);
    struct queue *new = create_queue(element);

    if (rear == NULL)
    {
        front = rear = new;
    }
    else
    {
        rear->next = new;
        rear = new;
    }
}
void dequeue()
{
    if (front == NULL)
    {
        printf("Queue is empty.\n");
        return;
    }
    else
    {
        struct queue *temp = front;
        printf("Dequeued element is: %d\n", front->data);
        front = front->next;
        if(front == NULL)
            rear = NULL;
        free(temp);
    }
}
void traverse()
{
    if (front == NULL)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        struct queue *ptr = front;
        printf("Front --> ");
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
        printf("<-- Rear\n");
    }
}

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
