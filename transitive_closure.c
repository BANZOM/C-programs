#include <stdio.h>
int main(int argc, char const *argv[])
{
    // code to find the trasitive closure
    int n, a[10][10];
    // input the no. of nodes/ row size
    scanf("%d", &n);

    // input the array matrix of n*n
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // logic of the transitive closure
    for (int iteration = 0; iteration < n; iteration++)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i][iteration])
            {
                for (int j = 0; j < n; j++)
                {
                    if (a[iteration][j])
                    {
                        a[i][j] = 1;
                    }
                }
            }
        }
    }

    // print the final answer
    printf("The final answer is as follows:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
