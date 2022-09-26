// C implementation to print the counter clock wise spiral traversal of matrix
#include <stdio.h>

void counterClockspiralPrint(int m, int n, int arr[m][n])
{
    int i, k = 0, l = 0;

    int count = 0;

    int total = m * n;

    while (k < m && l < n)
    {
        if (count == total)
            break;

        // Print the first column from the remaining columns
        for (i = k; i < m; ++i)
        {
            printf("%d ", arr[i][l]);
            count++;
        }
        l++;

        if (count == total)
            break;

        // Print the last row from the remaining rows
        for (i = l; i < n; ++i)
        {
            printf("%d ", arr[m - 1][i]);
            count++;
        }
        m--;

        if (count == total)
            break;

        // Print the last column from the remaining columns
        if (k < m)
        {
            for (i = m - 1; i >= k; --i)
            {
                printf("%d ", arr[i][n - 1]);
                count++;
            }
            n--;
        }

        if (count == total)
            break;

        // Print the first row from the remaining rows
        if (l < n)
        {
            for (i = n - 1; i >= l; --i)
            {
                printf("%d ", arr[k][i]);
                count++;
            }
            k++;
        }
    }
}

int main()
{
    int R;
    scanf("%d", &R);
    int arr[R][R];
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < R; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    counterClockspiralPrint(R, R, arr);
    return 0;
}
