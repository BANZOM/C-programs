/******************************************************************************

reading integers from file

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    
    FILE *ptr;
    
    ptr = fopen("File1.txt", "r");
    
    fscanf(ptr,"%d %d %d",&a,&b,&c);
    printf("%d %d %d", a,b,c);
    
//    fclose(*prt);

    return 0;
}