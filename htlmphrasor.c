#include <stdio.h>
#include <string.h>
char edit(char p[], int n)
{
    int pr, first = 0;
    for (int i = 0; i < n; i++)
    {
        if (p[i] == '<')
        {
            pr = 0;
            continue;
        }

        else if (p[i] == '>')
        {
            pr = 1;
            continue;
        }

        if (pr == 1)
        {
            p[first] = p[i];
            first++;
        }
    }
    p[first] = '\0';
    while (p[0] == ' ')
    {
        for (int i = 0; i < strlen(p); i++)
        {
            p[i] = p[i + 1];
        }
    }

    puts(p);
}

int main()
{
    char p[100] = "<h1>   Hello Aditya    </h1>";
    int n;
    // p[] = "<h1>   Hello Aditya  </h1>";
    printf("before edit:\n");
    puts(p);
    printf("After edit:\n");
    n = (int)sizeof(p) / sizeof(p[0]);
    edit(p, n);

    // printf("\n%d",n);
    return 0;
}

/*
input is like;
<h1>   Hello Aditya  </h1>

o/p
Hello Aditya

*/
