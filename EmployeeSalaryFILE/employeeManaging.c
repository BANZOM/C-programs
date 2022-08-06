#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    FILE *fl;                    // fl is name of the file pointer, necessary for a file
    fl = fopen("data.txt", "w"); // this line brings the file address to the file pointer
    if (fl != NULL)              // if file is available
    {
        char name[10];
        int salary;

        printf("ENTER THE NAME and THE SALARY: \n");

        for (int i = 0; i < 2; i++)
        {
            printf("\n");
            printf("PERSON %d\nNAME: ", i + 1);
            scanf("%s", &name);
            printf("SALARY: ");
            scanf("%d", &salary);

            fprintf(fl, "%s , %d\n", name, salary); // fprint(file pointer, lines to print);
        }

        fclose(fl);
    }

    else
        printf("COULDN'T OPEN THE FILE");

    return 0;
}