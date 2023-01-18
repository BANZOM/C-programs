#include<stdio.h>

void main()
{
    static int a[3][3] = {
                        2,4,3,6,8,5,3,5,1
    }

    printf("%d,%d,%d",a,a[2],a[2][2]);
}