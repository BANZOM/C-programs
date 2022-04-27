#include <stdio.h>
// Moving median;
void sortarr( int arr[], int n );
//here in this function n represent the number of elements in the array;
int main()
{
    int arr[100];
    float mid;
    for (int i = 0; i < 100; i++) 
    {
        
        scanf("%d",&arr[i]);
        sortarr( arr, i);
        if(i%2 == 0)
        {
            mid= ( arr[(i+1)/2]+arr[((i+1)/2)+1] ) /2;
        }
        else
            mid= arr[i/2];
            
        
        printf("mid is %.1f \n ", mid);
        
    }

    return 0;
}

void sortarr( int arr[], int n )
{
    
}
