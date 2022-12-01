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
        printf("%d", set[i]);
        if (i + 1 != n)
            printf(",");
    }
    printf("}\n");

    // creating a power set
    int n_powerSet;
    n_powerSet = pow(2, n);
    int powerSet[100][100] = {0};
    for (int i = 0; i < n_powerSet; i++)
    {
        for (int j = 0, k = 0; j < n, k < n; j++, k++)
        {
            if (i & 1 << j)
            {
                // printf("%d ", set[j]);
                powerSet[i][k] = set[j];
            }
        }
        // printf("\n");
    }

    // printing the power set
    for (int i = 0; i < n_powerSet; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",powerSet[i][j]);
        }
        printf("\n");
        
    }
    
}