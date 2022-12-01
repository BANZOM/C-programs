#include <stdio.h>
#include <math.h>

void main()
{
    // no. of elements in a set and read the elements
    int n, set[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &set[i]);
    }

    // print the set
    printf("A={");
    for (int i = 0; i < n; i++)
    {
        printf("%d",set[i]);
        if(i+1 != n)
            printf(",");
    }
    printf("}\n");
    
}