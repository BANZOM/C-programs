#include <stdio.h>
// Program to implement sparse matrix addition using arrays in c

int LinearSearch(int element, int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int rows1, cols1, trip1;
    printf("Enter no. of rows and columns:\n");
    scanf("%d%d", &rows1, &cols1);

    printf("No. of non-zero triples: ");
    scanf("%d", &trip1);

    int sparse1[rows1][cols1];
    int spRow1[trip1], spCol1[trip1], spVal1[trip1];

    for (int i = 0; i < trip1; i++)
    {
        printf("Enter the triples(row,column,value): ");
        scanf("%d %d %d", &spRow1[i], &spCol1[i], &spVal1[i]);
    }

    // creating a sparse matrix 1 from triples 1;
    int colFound, rowFound, elementFound, index;

    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            rowFound = LinearSearch(i, spRow1, trip1);
            colFound = LinearSearch(j, spCol1, trip1);

            if (colFound && rowFound)
            {
                index = ;
                elementFound = spVal1[index];
                sparse1[i][j] = elementFound;
            }
            else
            {
                sparse1[i][j] = 0;
            }
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