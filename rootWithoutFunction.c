/******************************************************************************

program to find the sq. root without using builtin function

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    float i;
    for (i = 0; i*i <= num ; i+=0.1);
    printf("Root is %.1f.",i);

    return 0;
}
