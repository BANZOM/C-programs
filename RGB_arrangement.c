#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void arrayModi( char arr[], int n)
{
    char temp;
    int low=0,mid=0,high=n-1;
    
    while( mid <= high)
    {
        if( arr[mid] == 'G')
        {
            mid++;
        }
        else if ( arr[mid] == 'R' )
        {
            temp= arr[mid] ;
            arr[mid]=arr[low];
            arr[low] = temp;
            low++;
            mid++;
        }
        
        else if ( arr[mid] == 'B' )
        {
            temp= arr[mid] ;
            arr[mid]=arr[high];
            arr[high] = temp;
            high--;
        }   
    }   
}
int main() {
    int n;
    scanf("%d",&n);
    char arr[n];
    for(int i=0; i<n; i++)
    {
        scanf(" %c",&arr[i]);
    }
    arrayModi(arr,n);
    for(int i=0; i<n; i++)
    {
        printf("%c ",arr[i]);
    }
    return 0;
}
