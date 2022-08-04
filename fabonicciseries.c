//FEBONICCI SERIES  0,1,1,2,3,5,8,13......
#include <stdio.h>
#include <conio.h>

void main()
{
    int n,s=0,i,n1=1,n0=0;
    clrscr();
    printf ("Input The Number: ");
    scanf("%d",&n);
    printf ("FEBONICCI series are follows: \n");
    for(i=0;i<=n;i++)
    {
         printf("%d,",s);
          n0=n1;
        n1=s;
        s=n1+n0;
    }
    getch();
}

