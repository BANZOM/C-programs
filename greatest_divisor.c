#include <stdio.h>
#include <math.h>
#include <string.h>
void compute(int num1, int num2)
{
    int divisor, smallnum = num1;
    // N1 represents big and N2 represents small number;
    //    printf("----%d--%d----", num1, num2);
    if (num1 > num2)
    {
        /* code */
        smallnum = num2;
    }

    for (int i = 1; i <= smallnum; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            divisor = i;
            //            printf("+++%d\n", divisor);
        }
    }
    printf("%d\n", divisor);
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        compute(arr[i][0], arr[i][1]);
    }

    return 0;
}
