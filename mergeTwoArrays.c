// Given two sorted arrays of size M and of size N. Merge the two arrays into one array (Sorted) without using any extra array.

#include <stdio.h>

void rightShift(int a[], int m, int n) {
  for (int i = n; i >= m; i--)
    a[i + 1] = a[i];
}

void merge(int a[], int m, int b[], int n) {
  int i, j;
  // merging b into a
  for (j = 0; j < n; j++) {
    for (i = 0; i < m; i++)
      if (b[j] < a[i])
        break;

    rightShift(a, i, m);

    a[i] = b[j];
    m++;
  }
}

int main() {
  int m, n, a[100], b[100];
  scanf("%d%d", &m, &n);

  for (int i = 0; i < m; i++) {
    scanf("%d", &a[i]);
  }
  for (int i = 0; i < n; i++) {
    scanf("%d", &b[i]);
  }

  // merge
  merge(a, m, b, n);

  for (int i = 0; i < m + n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
  return 0;
}
