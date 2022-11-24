#include <stdio.h>

void main()
{
    // Prepare a script in C to convert adjacency matrix to a relation.
    char alpha[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'}; // we don't need more as of now

    // input nodes
    int n, a[10][10];
    scanf("%d", &n);

    // input the node matrix/ sq. matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}