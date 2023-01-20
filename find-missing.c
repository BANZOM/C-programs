// Consider an array (assume unsorted) having positive numbers. Your task is to find out the smallest missing number from the given array.
// If the array has no such elements, then print the next element in sorted order.

// Input:  1 4 2 6 5
// Output: 3

#include <stdio.h>

int main(void) {
  int n;
  n = 5;
  int arr[5];
  
   for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  int map[6] = {0};

  for (int i = 0; i < n; i++) {
    map[arr[i] - 1] = 1;
  }

  for (int i = 0; i < 6; i++)
    if (map[i] == 0) {
      printf("%d\n", i + 1);
      break;
    }
  return 0;
}
