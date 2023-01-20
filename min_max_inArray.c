// minimum and maximum in an 1D-array
// we'll give argument of variables to store min and max value in main function;

#include<stdio.h>

void main()
{
    int n; 
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    
    int min,max;
    returnMinMax(arr,&min,&max,n);
    printf("%d\n%d",min,max);
}
