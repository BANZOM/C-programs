#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *darray;
    darray = (int *)malloc(5 * (sizeof(int))); // allocating 5 int size array
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &darray[i]);
    }
    printf("here are the allocated array items:");
    for (int i = 0; i < 5; i++)
    {
        printf("%d,", darray[i]);
    }

    darray = realloc(darray, 10 * (sizeof(int))); // reallocating the array

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &darray[i]);
    }
    printf("here are the reallocated array items:");
    for (int i = 0; i < 10; i++)
    {
        printf("%d,", darray[i]);
    }
    return 0;
}