#include <stdio.h>
int main(int argc, char const *argv[])
{
    // code to find the trasitive closure
    int n, a[10][10];
    // input the no. of nodes/ row size
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    return 0;
}
