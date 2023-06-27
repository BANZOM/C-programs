#include<stdio.h>
int diff(int a, int b)
{
    if(a>b)
        return a-b;
    else
        return b-a;
}

int main()
{
    int blocks,S[100],M[100],moves=0;
    printf("Enter the number of blocks:\n");
    scanf("%d",&blocks);
    printf("Enter the sequence of blocks:\n");
    for(int i=0;i<blocks;i++){
        scanf("%d",&S[i]);
    }
    printf("Enter the current block of the head:\n");
    scanf("%d",&M[0]);

    for (int i = 0; i < blocks; i++)
    {
        int min_diff = 9999;
        int min_index = 0;
        for (int j = 0; j < blocks; j++)
        {
            min_diff = diff(M[i], S[j]) < min_diff ? diff(M[i], S[j]) : min_diff;
            if (min_diff == diff(M[i], S[j]))
                min_index = j;
        }
        M[i+1] = S[min_index];
        moves += min_diff;
        S[min_index] = 9999;
    }
    printf("Sequence of head movement:\n");
    for (int i = 0; i < blocks+1; i++)
    {
        printf("%d ",M[i]);
    }

    printf("\nTotal head movements: %d\n",moves);
    return 0;

}