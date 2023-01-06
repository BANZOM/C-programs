#include <stdio.h>
#include <stdlib.h>

int c =0; // call by reference is not working so declaring global variable

void print(int *a, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", *(a + i));
}

// inoder traversal in arrays
void iOT(int *a, int indx, int n, int inorder[])
{
    if (*(a + indx) == -99 || indx >= n)
    {
        return;
    }
    else
    {
        iOT(a, 2 * indx + 1, n, inorder);
        printf("%d (%d)\n", *(a + indx),c);
        c++;
        iOT(a, 2 * indx + 2, n, inorder);
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

    // inorder traversal and store into array 'inorder'
    iOT(tree, 0, n, inorder);

    // print(inorder, &c);

    printf("\n");
    free(tree);
    free(inorder);
    return 0;
}
