#include <stdio.h>

int isFound(int n, int *a, int key) {
    for (int i = 0; i < n; i++) {
        if (a[i] == key)
            return 1;
    }
    return 0;
}
int fifo_pgFault(int n, int *s, int frame)
{
    int pgFaults = 0;
    int frames[frame];
    // set it to -1
    for(int i=0; i<frame; i++)
        frames[i] = -1;
    int currentPos = -1;
    
    // for (int i = 0; i < frame; i++) {
    //     printf("%d", frames[i]);
    // }
    
    for (int i = 0; i < n; i++) {
        for (int i = 0; i < frame; i++) {
            printf("%d", frames[i]);
        }
        printf("\n");
        if(isFound(frame, frames, s[i])) {
            continue;
        }
        else {
            frames[(currentPos+1)%frame] = s[i];
            currentPos++;
            pgFaults++;
            // printf("page fault at i = %d, val = %d\n", i, s[i]);
        }
    }
    return pgFaults;
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
    
    pgFault=fifo_pgFault(n,sequence,frame);
    printf("No of Page Faults: %d\n", pgFault);
}