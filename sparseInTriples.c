#include <stdio.h>

// function to pass 2D array in C

int noOfNonZeros(int rows, int cols, int array[rows][cols])
{
    int nonZeros = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            // printf("%d,  ", array[i][j]);
            if (array[i][j] > 0 || array[i][j] < 0)
            {
                nonZeros++;
            }
        }
        // printf("\n");
    }
    return nonZeros;
}

int main()
{
    int row, column, count;
    printf("Enter the size of matrix (rows, columns): ");
    scanf("%d %d", &row, &column);
    int array[row][column];
    printf("Enter elements of matrix\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("[%d][%d]:", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    printf("Sparse form - list of 3 triples\n");

    // count of non zero numbers
    count = noOfNonZeros(row, column, array);

    // printf("**%d**", count); // to check if the count works perfectly

    int whichRow[count], whichColumn[count], whichNum[count];

    int k = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (array[i][j] > 0 || array[i][j] < 0)
            {
                whichRow[k] = i;
                whichColumn[k] = j;
                whichNum[k] = array[i][j];
                k++;
            }
        }
    }

    // printing into triples
    printf("%d\t%d\t%d\n", row, column, count);
    for (int i = 0; i < count; i++)
    {
        printf("%d\t%d\t%d\n", whichRow[i], whichColumn[i], whichNum[i]);
    }

    return 0;
}