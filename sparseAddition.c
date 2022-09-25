#include <stdio.h>
// Program to implement sparse matrix addition using arrays in c

int main()
{
    int rows1, cols1, trip1;
    printf("Enter no. of rows and columns:\n");
    scanf("%d%d", &rows1, &cols1);

    printf("No. of non-zero triples: ");
    scanf("%d", &trip1);

    int sparse1[rows1][cols1];
    int spInput[trip1][3];

    for (int i = 0; i < trip1; i++)
    {
        printf("Enter the triples(row,column,value): ");
        scanf("%d %d %d", &spInput[i][0], &spInput[i][1], &spInput[i][2]);
    }

    // creating a sparse matrix 1 from triples 1;
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            // if (i ==)
            // sparse1[i][j] =
        }
    }

    // entry for second array
    int rows2, cols2, trip2;

    printf("Enter no. of rows and columns:\n");
    scanf("%d%d", &rows2, &cols2);

    printf("No. of non-zero triples: ");
    scanf("%d", &trip2);

    int sparse2[rows2][cols2];
    int spRow2[trip2], spCol2[trip2], spVal2[trip2];

    for (int i = 0, k = 0; i < trip2; i++, k++)
    {
        printf("Enter the triples(row,column,value): ");
        scanf("%d %d %d", &spRow2[k], &spCol2[k], &spVal2[k]);
    }

    return 0;
}