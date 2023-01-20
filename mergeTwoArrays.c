// Given two sorted arrays of size M and of size N. Merge the two arrays into one array (Sorted) without using any extra array.

#include<stdio.h>

void mergeArray(int a[], int b[], int m, int n){
    
}

void main(){
    int m,n;
    scanf("%d%d",&m,&n);
    
    int arr1[100],arr2[100];
    
    for(int i=0; i<m; i++)
        scanf("%d",&arr1[i]);
    
    for(int i=0; i<n; i++)
        scanf("%d",&arr2[i]);
        
    mergeArray(arr1,arr2,m,n);
    
    for(int i=0; i<m+n; i++)
        printf("%d ",arr1[i]);
}
