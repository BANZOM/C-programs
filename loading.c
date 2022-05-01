#include <stdio.h>
#include <windows.h>
int main()
{
    int i;
    char str[] = "                                         ";
    for (i = 0; i <= 40; i++)
    {
        printf("\r[%s]", str);
        str[i] = '/';
        Sleep(70);
    }

    return 0;
}