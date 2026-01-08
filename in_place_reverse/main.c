#include <stdio.h>

void reverseArray(int arr[], int size) {
  for (int i = 0; i < size / 2; i++) {
    arr[i] = arr[size - i - 1] - arr[i];
    arr[size - i - 1] = arr[size - i - 1] - arr[i];
    arr[i] = arr[i] + arr[size - i - 1];
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
