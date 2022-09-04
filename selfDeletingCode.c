/******************************************************************************

Self Destruction Code: a program that delete itself

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main( int c , char *argv[] )
{
    printf("SELF DESTRUCTION, When you compile it, and run a.out file.");
    remove( argv[0] );

    return 0;
}
