#include <stdio.h>
#include <stdlib.h>

void print(int *a, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", *(a + i));
}

// inoder traversal in arrays
void iOT(int *a, int indx, int n)
{
    if (*(a + indx) == -99 || indx >= n)
    {
        return;
    }
    else
    {
        iOT(a, 2 * indx + 1, n);
        printf("%d ", *(a + indx));
        iOT(a, 2 * indx + 2, n);
    }
}
int main()
{
    int n;     // num of nodes
    int c = 0; // for inorder traverse;

    int *tree, *inorder;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    // memory allocation
    tree = (int *)malloc(n * sizeof(int));
    inorder = (int *)calloc(n, sizeof(int));

    // input the tree
    printf("Enter the data in BST order (-99 for NULL): ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tree[i]); // -99 for NULL
    }

    // inorder traversal
    iOT(tree, 0, n);

    // print(inorder, &c);

    printf("\n");
    free(tree);
    free(inorder);
    return 0;
}
