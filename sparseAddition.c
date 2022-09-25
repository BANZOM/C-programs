#include <stdio.h>
// Program to implement sparse matrix addition using arrays in c
int main()
{
    int rows1, cols1, trip1;
    printf("Enter no. of rows and columns:\n");
    scanf("%d%d,&rows1,&cols1");
    printf("No. of non-zero triples: ");
    scanf("%d", &trip1);

    int sparse1[rows1][cols1];
    int spRow1[trip1], spCol1[trip1], spVal1[trip1];

    for (int i = 0, k = 0; i < trip1; i++, k++)
    {
        printf("Enter the triples(row,column,value): ");
        scanf("%d %d %d", spRow1[k], spCol1[k], spVal1[k]);
    }

    return 0;
}