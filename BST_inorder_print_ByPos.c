#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    char *tree;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    tree = calloc(n, sizeof(char));

    return 0;
}
