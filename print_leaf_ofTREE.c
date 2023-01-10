#include <stdio.h>

int main()
{
    int tree[1000],n;
    printf("TREE IS IN ARRAY REPRESENTATION\nEnter number of data to be store: ");
    scanf("%d",&n);
    printf("Enter the elements of tree (-9 for NULL): ");
    
    for (int i = 0; i < n; i++)
        scanf("%d",&tree[i]);
    

    return 0;
}
