// rock paper scissor game
// srand take seed as an input and is defined in stdlib.h
// printf("%d",  randomnum());
//have some important concepts
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
int randomnum()
{
    srand(time(NULL));
    return rand() % (3);
}

void rules()
{
    printf("HOW TO PLAY: \n");

    printf("\t1. Choose Stone, Paper, Scissor by pressing '1' , '2' and '3' respectively.\n\t2. Choose only when it is asked to.\n\t3. Winner will be Declared at the End.\n\t4. Enjoy the Game.\n\t5. Dont forget to share it with your friends. ");
}

int toss(int coin)
{
    printf("\n\n\t\t~~TOSS TIME~~\n");
    coin = (rand() % (2));
    int choice;
    printf("Enter 0 for 'HEADS or 1 for 'TAILS' :");
    scanf("%d", &choice);
    char str[] = "                                        ";
    for (int i = 0; i <= 40; i++)
    {
        printf("\r[%s]", str);
        str[i] = '>';
        Sleep(150);
    }
    printf("\n");
    if (coin == choice)
    {
        printf(" * YOU WON THE TOSS, Ist chance is yours *\n");
    }

    else
        printf(" * YOU LOSE THE TOSS , Ist chance is not yours ");

    return 0;
}

int main()
{
    char name[15];
    int score1 = 0, score2 = 0, coin;

    printf("\t\t***WELCOME TO ROCK PAPER SCISSOR GAME***\n~This is Single Player game\n~IT IS A GAME OF 5 CHANCES\n\nEnter your Name:");
    scanf("%s", name);

    printf("\nWELCOME %s,\n\n", strupr(name));

    rules();

    toss(coin);

    return 0;
}
