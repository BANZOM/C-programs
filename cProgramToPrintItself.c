/******************************************************************************

c program that print itself

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("%s",__FILE__);
    FILE *F;
    F = fopen(__FILE__ , "r");
    char alpha;
    alpha = getc(F);
    while( alpha!= EOF )
    {
        printf("%c",alpha);
        alpha = getc(F);
    }

    return 0;
}