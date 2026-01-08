#include <stdio.h>

void reverseArray(int arr[], int size) {
  int *left = arr;
  int *right = left + size - 1;
  int temp = 0;

  while (left < right) {
    temp = *left;
    *left = *right;
    *right = temp;
    left++;
    right--;
  }

  return;
}

int main() {
  printf("%d\n", 3 / 2);

  int myNumbers[] = {10, 20, 30, 40, 50};
  int n = sizeof(myNumbers) / sizeof(myNumbers[0]);

  printf("Исходный массив: ");
  for (int i = 0; i < n; i++)
    printf("%d ", myNumbers[i]);

  reverseArray(myNumbers, n);

  printf("\nРазвернутый массив: ");
  for (int i = 0; i < n; i++)
    printf("%d ", myNumbers[i]);

  return 0;
}
