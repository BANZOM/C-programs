#include <stdio.h>
#define MAX_WALL_SIZE 50000

int count = 0;
int left_traverse(int wall[], int start, int end, int key);
int right_traverse(int wall[], int start, int end, int key)
{
    int s = start, e = end;
    while (s != e + 1 && s != MAX_WALL_SIZE)
    {
        if (wall[s] == key)
            return s;
        if (s == start)
            count++;
        s++;
    }
    if (s == MAX_WALL_SIZE)
    {
        return -1;
    }
    return left_traverse(wall, end, start - 1, key);
}

int left_traverse(int wall[], int start, int end, int key)
{
    int s = start, e = end;
    while (s != e - 1 && s != 0)
    {
        if (wall[s] == key)
        {
            return s;
        }
        if (s == start)
            count++;
        s--;
    }
    if (s == 0)
    {
        return -1;
    }
    return right_traverse(wall, end, start + 1, key);
}

int main(int argc, char const *argv[])
{
    int wall[MAX_WALL_SIZE];
    int key, index, manPosition;

    printf("Enter the gate name (any integer): ");
    scanf("%d", &key);

    printf("Enter the index where to place that gate in the wall (under %d): ", MAX_WALL_SIZE);
    scanf("%d", &index);
    wall[index] = key;

    // printf("**%d\n%d\n%d**\n", wall[index],index,wall[index+1]);

    printf("Enter the position of man: ");
    scanf("%d", &manPosition);

    int ans;
    ans = right_traverse(wall, manPosition, manPosition+1, key);

    if (ans != -1)
    {
        printf("The gate found at position = %d\n", ans);
        printf("Total number of rounds= %d\n",count);
    }
    else
        printf("NOT FOUND!\n");

    return 0;
}
