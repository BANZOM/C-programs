#include <stdio.h>
#include <stdlib.h>
void print(char *a, int n)
{
    for (int i = 0; i < n; i++)
        printf("%c ", *(a+i));
}
int main()
{
    int n;
    char *tree;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    tree = calloc(n, sizeof(char));
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", tree + i);
    }

    print(tree, n);
    printf("\n");
    return 0;
}
