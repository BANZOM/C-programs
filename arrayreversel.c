#include <stdio.h>
int main()
{
    int arr[10], rev[10];
    printf("Enter the int array: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    // reverse of array
    for (int i = 0; i < 10; i++)
    {
        rev[10 - i - 1] = arr[i];
    }
    printf("REv of array is: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d", rev[i]);
    }   

    return 0;
}