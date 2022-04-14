#include <stdio.h>

int main()
{

    FILE *f;
    int n, odd = 3;
    f = fopen("num.txt", "w");

    printf("How many odd num you want: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        fprintf(f, "%d\n", odd);
        odd += 2;
    }

    fclose(f);
    return 0;
}
