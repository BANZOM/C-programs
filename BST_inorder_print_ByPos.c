#include <stdio.h>
#include <stdlib.h>
void print(int *a, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", *(a + i));
}
int main()
{
    int n;
    int *tree, *inorder;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    // memory allocation
    tree = malloc(n * sizeof(int));
    inorder = calloc(n, sizeof(int));
    
    printf("Enter the data in BST order: ");
    // read
    for (int i = 0; i < n; i++)
    {
        scanf(" %d", tree + i);
    }

    print(tree, n);

    printf("\n");
    return 0;
}
