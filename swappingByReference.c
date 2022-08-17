#include <stdio.h>
//swapping of two numbers using call by reference;
void swap( int *x, int *y)
{
    int temp;
    
    temp= *x;
    *x= *y;
    *y= temp;
  return;
}
int main() 
{
    int a=108,b=17;
    printf("%d\t%d",a,b);
    swap(&a,&b);
    printf("\n%d\t%d",a,b);
    return 0;
}

