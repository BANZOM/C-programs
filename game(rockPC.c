// rock paper scissor game
// srand take seed as an input and is defined in stdlib.h
// printf("%d",  randomnum());
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
int randomnum(int *com)
{

    srand(time(NULL));
    *com = rand() % (3);
    return *com;
}

void rules()
{
    printf("HOW TO PLAY: \n");

    printf("\t1. Choose Stone, Paper, Scissor by pressing '1' , '2' and '3' respectively.\n\t2. Choose only when it is asked to.\n\t3. Winner will be Declared at the End.\n\t4. Enjoy the Game.\n\t5. Dont forget to share it with your friends. ");
}
void loading()
{
    int i;
    char str[] = "                                        ";
    for (i = 0; i <= 40; i++)
    {
        printf("\r[%s]", str);
        str[i] = '/';
        Sleep(200);
    }
}
int main()
{
    char name[15];
    int score1 = 0, score2 = 0, c1;
    int c2, d, again, error = 0;
repeat:
    printf("\n\t\t***WELCOME TO ROCK PAPER SCISSOR GAME***\n~This is Single Player game\n~IT IS A GAME OF 5 CHANCES\n\nEnter your Name: ");
    scanf("%s", name);

    printf("\nWELCOME %s,\n\n", strupr(name));

    rules();

    printf("Now the Game Begins:\n");

    printf("~~~The Remainder: Choose Rock, Paper, Scissor by pressing '1' , '2' and '3' respectively.~~~\n");
    printf("Choose:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Chance No. %d: ", i + 1);
        scanf("%d", &c1);
        if (c1 < 1 || c1 > 3)
        {
            printf("You choose a Invalid Choice. Restart the Game.");
            error = 1;
            break;
        }
        else
        {
            randomnum(&c2);
            printf("Computer chooses: %d\n", c2 + 1);

            if (c1 == 1)
            {
                if (c2 == 1)
                {
                    score1 += 1;
                    score2 += 1;
                }
                else if (c2 == 2)
                {
                    // score1 += 1;
                    score2 += 1;
                }
                else if (c2 == 3)
                {
                    score1 += 1;
                    // score2 += 1;
                }
            }
            else if (c1 == 2)
            {
                if (c2 == 1)
                {
                    score1 += 1;
                    // score2 += 1;
                }
                else if (c2 == 2)
                {
                    score1 += 1;
                    score2 += 1;
                }
                else if (c2 == 3)
                {
                    // score1 += 1;
                    score2 += 1;
                }
            }
            else if (c1 == 3)
            {
                if (c2 == 1)
                {
                    // score1 += 1;
                    score2 += 1;
                }
                else if (c2 == 2)
                {
                    score1 += 1;
                    // score2 += 1;
                }
                else if (c2 == 3)
                {
                    score1 += 1;
                    score2 += 1;
                }
            }
        }
    }
    if (error == 0)
    {
        printf("\nGAME UP: TIME TO CHECK WHOSE THE WINNER\n");
        loading();
        if (score1 > score2)
        {
            printf("\nCONGRATULATIONS, YOU WON\n");
        }
        else if (score1 == score2)
        {
            printf("\nTIE MATCH\n");
        }

        else
        {
            printf("\nSORRY, YOU LOSE\nDO BEST NEXT TIME\n");
        }

        printf("Want to Play Again, Enter 9: ");
        scanf("%d", &again);
        if (again == 9)
        {
            goto repeat;
        }
        else
            printf("\nTHANK YOU!!");
    }

    return 0;
}