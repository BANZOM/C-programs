/******************************************************************************

variour array and pointer outputs

*******************************************************************************/
#include <stdio.h>

int main()
{
    int *p, a[]= {1,2,3};
    
    p=a;
    printf("%d,%d,%d,%d,%d",p,&p,*p,p+1,*(p+1));

    return 0;
}