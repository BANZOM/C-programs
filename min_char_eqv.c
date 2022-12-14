#include <stdio.h>

long int smallestNum(char *str)
{
    int nums[100] = {0}, n=0,i=0;
    while (*str != '\0')
    {
        char c = *str;
        printf("%c\n", c);

        
        str++;
    }

    // return 0;
}
int main()
{
    char *string, str[100];
    string = str;
    printf("Enter the string: ");
    scanf(" %s", string);

    // printf("%s\n",str);   // prints the input string

    printf("Smallest number = %ld\n", smallestNum(str));

    return 0;
}
