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
        sortarr( arr, i+1);
        if((i+1)%2 == 0)
        {
            mid= ( arr[(i)/2]+arr[((i)/2)+1] ) /2.0;
        }
        else
            mid= arr[i/2];
            
        
        printf("mid is %.1f \n", mid);
        
    }

    return 0;
}

void sortarr( int arr[], int n )
{
    int temp;
    for (int i = 0; i < n ; i++) {

        for (int j = 0; j < n-1-i; j++) {
           
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
}

