/******************************************************************************

union of the sets 

*******************************************************************************/
#include<stdio.h>

void swap(int *a,int *b )
{
    int temp = *b;
    *b= *a;
    *a = *b;
}

void sort(int a[],int len)
{
    for(int i=0; i<len-1; i++)
    {
        for(int j=0; j<len-1-i; j++)
        {
            if(a[i]>a[i+1])
                swap(&a[i],&a[i+1]);
        }
    }
}
void main()
{
   int a[20],b[20],i,c[20],j,k=0,n1,n2;

   // taking input set 1

   printf("Enter number of  elements in first set: ");
   scanf("%d",&n1);
   printf("Enter the elements: ");
   for(i=0;i<n1;i++)
      scanf("%d",&a[i]);

    // taking input set 2

   printf("Enter number of  elements in second set: ");
   scanf("%d",&n2);
   printf("Enter the elements: ");
   for(i=0;i<n2;i++)
     scanf("%d",&b[i]);

 
 /*logic for calculate union*/

    // copy the element of set 1 in set 3
   for(i=0;i<n1;i++)
   {
       // repeted element is not allowed so we check is any value repeted
      for(j=0;j<k;j++)
        {
         if(c[j]==a[i]) 
            break;
        }
       if(j==k) //if not repeated then store value in set c 
       {
          c[k]=a[i];
          k++;
       }
    }
    
    // copy element of set 2 in set 3
   for(i=0;i<n2;i++)
   {
       // check for repeted element
      for(j=0;j<k;j++)
      {
         if(c[j]==b[i])
           break;
      }
     if(j==k) // if element is not repeted then store in set 3
     {
       c[k]=b[i];
       k++;
     }
   }

   // printing of union of set 3 that is the union.
   printf("Union of set A and B is:-\n");
   sort(c,k);
    for(i=0;i<k;i++)
      printf("%d ",c[i]);
}
