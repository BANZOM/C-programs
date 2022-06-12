#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,sum=0;
    scanf("%d",&n);
    while(n>0||sum>9){
        if(n==0){
            n=sum;
            sum=0;
        }
        sum+=n%10;
        n/=10;

    }
    printf("%d",sum);
   
 
    return 0;
}



/******************************************************************************

We define Digital_Sum of an integer using the following rules:

Given an integer, we need to find the Digital_Sum of the integer.

If x has only 1 digit, then its Digital_Sum is x. Otherwise, the Digital_Sum of x is equal to the Digital_Sum of the sum of the digits of x. For example, the Digital_Sum of 9875 will be calculated as:

Digital_Sum(9875)       9+8+7+5 = 29 
Digital_Sum(29)     2 + 9 = 11
Digital_Sum(11)     1 + 1 = 2
Digital_Sum(2)      = 2  
Input Format

given a number defined by n.

Constraints

Constraints

1<=n<=100000

Output Format

Sum of digit until unit digit.

Sample Input 0

123
Sample Output 0

6

*******************************************************************************/
