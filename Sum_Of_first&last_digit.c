#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void sumrequired(int num)
{
    int temp=0;
    int first=0,last=0;
    
    temp= num;
    last= temp%10;
    //for first digit
    while( temp != 0 ) { 
        first= temp%10;
        temp/=10;       
    }
    printf("%d\n",first+last);
}
int main() {

    int n;
    scanf("%d",&n);
    int num;
    for ( int i=0; i<n; i++) 
    {
        scanf("%d",&num);
        sumrequired(num);  
    }
    return 0;
}
