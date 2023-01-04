#include <stdio.h>
#include <stdlib.h>
void print(int *a, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", *(a + i));
}
void iOT(int *a, int indx)
{
    if (*(a + indx) == -9)
    {
        return;
    }
    else
    {
        iOT(a, 2 * indx + 1);
        printf("%d ", *(a + indx));
        iOT(a, 2 * indx + 2);
    }
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
        scanf("%d", tree + i); // -9 for NULL
    }

    iOT(tree,0);
    // print(tree, n);

    printf("\n");
    return 0;
}
