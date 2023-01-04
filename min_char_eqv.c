#include <stdio.h>

int maxOfArr(int nums[])
{
    int i = 0, max = nums[0];
    while (nums[i] != 0)
    {
        if (max > nums[i])
        {
            max = nums[i];
        }
        i++;
    }
    return max;
}
long int smallestNum(char *str)
{
    int nums[100] = {0}, n = 0, i = 0, count = 1;
    while (*str != '\0')
    {
        count = 1;
        while (*str == 'D' || *str != 'I' && *str != '\0')
        {
            count++;
            str++;
        }
        printf("%d*\n", count);
        while (count != 0)
        {
            int temp = maxOfArr(nums) + count;
            nums[i++] = temp--;
            count--;
        }

        str++;
    }

    for (int i = 0; i < 100; i++)
    {
        if (nums[i] == 0)
        {
            break;
        }
        printf("%d", nums[i]);
    }
    printf("\n");
    // return 0;
}
int main()
{
    char *string, str[100];
    string = str;
    printf("Enter the string: ");
    scanf(" %s", string);

    // printf("%s\n",str);   // prints the input string

    printf("Smallest number = %ld\n", smallestNum(str));

    return 0;
}
