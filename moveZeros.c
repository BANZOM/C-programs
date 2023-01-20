// 5
// 0 2 0 2 0
// Before: 0 2 0 2 0 
// After: 2 2 0 0 0 
// Move zeros to back

#include <stdio.h>
void print(int a[], int n) {
  for (int i = 0; i < n; i++)
    printf("%d ", a[i]);
  printf("\n");
}
int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  printf("Before: ");
  print(arr, n);

  // logic to move 0 to end;
  moveZeros(arr, n);

  printf("After: ");
  print(arr, n);

  // free(arr);
  return 0;
}
