#include <stdio.h>

int replace(int frames[], int current_pos, int seq[], int frameSize)
{
    int target_indx = 0;
    int time[frameSize];

    for (int i = 0; i < frameSize; i++)
    {
        // find the smallest index element
        if (frames[i] == -1)
        {
            target_indx = i;
            break;
        }
        else
        {
            for (int j = current_pos; j>=0 ; j--)
            {
                if (seq[j] == frames[i])
                {
                    time[i] = j;
                    break;
                }
            }
            
        }
    }
    
    int min = time[0];
    for (int i = 1; i < frameSize; i++)
    {
        if (time[i] < min)
        {
            min = time[i];
            target_indx = i;
        }
    }

    // for (int i = 0; i < frameSize; i++)
    // {
    //     printf("%d, ", time[i]);
    // }
    // printf("\n");

    
    return target_indx;
}
int isFound(int n, int *a, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
            return 1;
    }
    return 0;
}

int lru_pgFault(int n, int *s, int frameSize)
{
    int faults = 0;
    int frames[frameSize];
    for (int i = 0; i < frameSize; i++)
    {
        frames[i] = -1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < frameSize; j++)
        {
            printf("%d, ", frames[j]);
        }
        printf("\n");
        if (isFound(frameSize, frames, s[i]))
        {
            continue;
        }    // if found in frames, continue
        else // if not found in frames, replace
        {
            int target_indx = replace(frames, i, s, frameSize);
            frames[target_indx] = s[i];
            faults++;
        }
    }

    return faults;
}

void main()
{
    int n, frames, pgFault = 0;
    printf("Enter size of reference string: ");
    scanf("%d", &n);
    int sequence[n];
    printf("Enter the reference string: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &sequence[i]);

    printf("Enter No of Frames: ");
    scanf("%d", &frames);

    pgFault = lru_pgFault(n, sequence, frames);
    printf("No of Page Faults: %d\n", pgFault);
}