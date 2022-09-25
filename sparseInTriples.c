#include <stdio.h>

int main()
{
    int row, column;
    printf("Enter the size of matrix (rows, columns): ");
    scanf("%d%d", &row, &column);
    int array[row][column];
    printf("Enter elements of matrix\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("[%d][%d]:", i, j);
            scanf("%d", &array[row][column]);
        }
    }

    return 0;
}