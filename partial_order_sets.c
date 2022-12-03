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
            printf("%d ", powerSet[i][j]);
        }
        printf("\n");
    }

    // setting up the reference array for finding the partial relations
    for (int i = 0; i < n_powerSet - 1; i++)
    {
        int ref[3] = {0};
        for (int j = i + 1; j < n_powerSet - 1; j++)
        {
            // printf("**%d,%d,%d",powerSet[j][0],powerSet[j][1],powerSet[j][2]);
            for (int k = j + 1; k < n_powerSet - 1; k++)
            {
                // printf("**%d,%d,%d", powerSet[k][0], powerSet[k][1], powerSet[k][2]);
                for (int m = k+1; m < n_powerSet - 1; m++)
                {
                    ref[0] = (powerSet[j][0] + powerSet[k][0] + powerSet[m][0]);
                    ref[1] = (powerSet[j][1] + powerSet[k][1] + powerSet[m][1]);
                    ref[2] = (powerSet[j][2] + powerSet[k][2] + powerSet[m][2]);
                    if ((powerSet[j][0] + powerSet[k][0] + powerSet[m][0]) == set[0] && (powerSet[j][1] + powerSet[k][1] + powerSet[m][1]) == set[1] && (powerSet[j][2] + powerSet[k][2] + powerSet[m][2]) == set[2])
                    {
                        printf("%d,%d,%d\n", ref[0], ref[1], ref[2]);
                    }
                }
            }
        }
    }
}