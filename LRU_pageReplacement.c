#include <stdio.h>

int lru_pfFault(int n, int *s, int frame) {
    
}

void main()
{
    int n, frame,pgFault=0;
    printf("Enter size of reference string: ");
    scanf("%d",&n);
    int sequence[n];
    printf("Enter the reference string: ");
    for(int i=0; i<n; i++)
        scanf("%d",&sequence[i]);
        
    printf("Enter No of Frames:");
    scanf("%d",&frame);
    
    pgFault=lru_pgFault(n,sequence,frame);
    printf("No of Page Faults: %d\n", pgFault);
}