// toss of coin;
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

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
    int coin;

    toss(coin);
}