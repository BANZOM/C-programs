#include <stdio.h>
struct info
{
    char name[10];
    char mail[25];
    long int phone;
};

int main()
{
    struct info people[3];
    int i;
    for (i = 0; i < 2; i++)
    {
        printf("%d:\n", i + 1);
        printf("Full name: ");
        fgets(people[i].name, 10, stdin);
        printf("Mail: ");
        fgets(people[i].mail, 25, stdin);
        printf("Phone Number: ");
        scanf("%ld", &people[i].phone);
    }
    printf("Users:\n");
    for (i = 0; i < 3; i++)
    {
        printf("%d:\n", i + 1);
        printf("Full name: %s\n", people[i].name);
        printf("Mail: %s\n", people[i].mail);
        printf("Phone Number: %ld\n", people[i].phone);
    }

    return 0;
}
