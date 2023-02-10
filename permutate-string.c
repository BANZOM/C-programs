// C Program to Permute All Letters of Input String
// Enter a string: abc
// Output:
// abc
// acb
// bac
// bca
// cba
// cab

#include<stdio.h>
#include<string.h>

void swap(char* a, char* b);
void permute(char* str, int l, int r);

void main()
{
    char a[4];
    scanf("%s",a);
    int n = strlen(a);
    permute(a, 0, n - 1);
}

void swap(char* a, char* b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void permute(char* str, int l, int r) {
    if (l == r) {
        printf("%s\n", str);
    } else {
        for (int i = l; i <= r; i++) {
            swap((str + l), (str + i));
            permute(str, l + 1, r);
            swap((str + l), (str + i));
        }
    }
}
