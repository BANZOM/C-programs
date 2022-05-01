#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int randomnum(int *com)
{

    srand(time(NULL));
    *com = rand() % (3);
    return *com;
}
int main()
{
    int score1 = 0, score2 = 0, c1;
    int c2;

    for (int i = 0; i < 5; i++)
    {
        printf("Chance No. %d: ", i + 1);
        scanf("%d", &c1);
        if (c1 < 1 || c1 > 3)
        {
            printf("You choose a Invalid Choice. Restart the Game.");
            break;
        }
        else
        {

            randomnum(&c2);
            printf("Computer chooses: %d\n", c2 + 1);
        }
    }
}

// rough code;
if (c1 == 1 && c2 == 1)
{
    score1 += 1;
    score2 += 1;
}
else if (c1 == 1 && c2 == 2)
{
    // score1 += 1;
    score2 += 1;
}
else if (c1 == 1 && c2 == 3)
{
    score1 += 1;
    // score2 += 1;
}
else if (c1 == 2 && c2 == 1)
{
    score1 += 1;
    score2 += 1;
}
else if (c1 == 2 && c2 == 1)
{
    score1 += 1;
    score2 += 1;
}