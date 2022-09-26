#include <stdio.h>

void display(int n, int m, int a[][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int rows1, cols1, trip1;
    printf("Enter no. of rows and columns:\n");
    scanf("%d%d", &rows1, &cols1);
    int sparse1[rows1][cols1];

    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
            sparse1[i][j] = 0;
    }

    printf("No. of non-zero triples: ");
    scanf("%d", &trip1);

    int r, c, val = 0;

    for (int i = 0; i < trip1; i++)
    {
        printf("Enter the triples(row,column,value): ");
        // scanf("%d %d %d", &spRow1[i], &spCol1[i], &spVal1[i]);
        scanf("%d %d %d", &r, &c, &val);
        sparse1[r][c] = val;
    }
    // display(rows1, cols1, sparse1);

    // entry for second array
    int rows2, cols2, trip2;

    printf("Enter no. of rows and columns:\n");
    scanf("%d%d", &rows2, &cols2);
    int sparse2[rows2][cols2];
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols2; j++)
            sparse2[i][j] = 0;
    }

    printf("No. of non-zero triples: ");
    scanf("%d", &trip2);

    for (int i = 0; i < trip2; i++)
    {
        printf("Enter the triples(row,column,value): ");
        // scanf("%d %d %d", &spRow2[k], &spCol2[k], &spVal2[k]);
        scanf("%d %d %d", &r, &c, &val);
        sparse2[r][c] = val;
    }

    // display(rows2, cols2, sparse2);

    // Addition of matrix;
    int count = 0;
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            sparse1[i][j] += sparse2[i][j];
            if (sparse1[i][j] != 0)
                count++;
        }
    }

    // display(rows1, cols1, sparse1);

    // sparse representation;
    printf("row\tcolumn\tvalue\n");
    // printf("%d", count);
    int sparse[count][3], k = 0;
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            if (sparse1[i][j] != 0)
            {
                sparse[k][0] = i;
                sparse[k][1] = j;
                sparse[k][2] = sparse1[i][j];
                k++;
            }
        }
    }

    for (int i = 0; i < count; i++)
    {
        printf("%d\t%d\t%d\n", sparse[i][0], sparse[i][1], sparse[i][2]);
    }

    return 0;
}
