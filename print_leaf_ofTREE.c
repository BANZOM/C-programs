#include <stdio.h>

void printLeaves(int *tree, int n, int p)
{
    // NULL
    if (p <= n)
    {

        if (tree[p] == 0)
        {
            return;
        }

        // no left or right child
        if (tree[2 * p + 1] == 0 && tree[2 * p + 2] == 0)
        {
            printf("%d ", tree[p]);
        }

        // have left
        if (tree[2 * p + 1] != 0)
        {
            printLeaves(tree, n, 2 * p + 1);
        }

        // have right
        if (tree[2 * p + 2] != 0)
        {
            printLeaves(tree, n, 2 * p + 2);
        }
    }
}
int main()
{
    int tree[1000] = {0}, n;
    printf("TREE IS IN ARRAY REPRESENTATION\nEnter number of data to be store: ");
    scanf("%d", &n);
    printf("Enter the elements of tree (-9 for NULL): ");

    for (int i = 0; i < n; i++)
        scanf("%d", &tree[i]);

    printf("The Leaves of tree are: ");
    printLeaves(tree, n, 0);
    return 0;
}
