/******************************************************************************

Writing multiplication table on a file

*******************************************************************************/
#include <stdio.h>

int main()
{
    FILE* fl; //generating a file pointer
    int num;
    fl = fopen("TABLE.txt", "w"); //w means Writing
    
    printf("Enter a Number you want table of upto 10: ");
    scanf("%d",&num);
    
    for (int i = 0; i < 10 ; i++) {
        fprintf(fl, "%d X %d = %d\n", num, (i+1) , num * (i+1));
    }
    
    fclose(fl); //closing the file is a good deed
    
    printf("SUCESSFULLY GENERATED");

    return 0;
}