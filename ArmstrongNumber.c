/******************************************************************************
ARMSTRONG NUMBER    153 = 1^3 + 5^3 + 3^3 
*******************************************************************************/
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int n,terms=0,temp1,temp2,sum=0,A;
    clrscr();
    printf("Enter any NUMBER: ");
    scanf ("%d", &n);
    temp1=temp2=n;
    while (n!=0)
      { 
        terms=terms+1;  //check number of terms
        n=n/10;
      }
    while (temp1!=0)
      {
          A=temp1%10;
          temp1=temp1/10;
          sum=sum + pow(A,terms);
      }
      
    if (sum==temp2)
      {
          printf ("It is an  Angstrom Number,%d",sum);
      }
    else printf("It is Not an Angstrom Number,%d",sum);

    return 0;
}



