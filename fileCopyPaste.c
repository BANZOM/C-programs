/******************************************************************************

copying one file context into other file twice

*******************************************************************************/
#include <stdio.h>

int main()
{
    FILE *f1, *f2;
    f1 = fopen ("aimFile.txt", "r");
    f2 = fopen ("targetFile.txt", "w");
    
    char c= fgetc(f1);
    
    while( c != EOF)
    {
        fputc(c, f2);
        fputc(c,f2);
        
        c= fgetc(f1);
    }
    
    fclose(f1,f2);
    
    printf("DONE");
    
    return 0;
}
