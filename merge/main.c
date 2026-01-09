#include <stdio.h>
#include <stdlib.h>

// Функция должна выделить память под новый массив,
// заполнить его и вернуть указатель на него.
int *merge(int *a, int sizeA, int *b, int sizeB) {
  int newSize = sizeA + sizeB;
  int *result = malloc(newSize * sizeof(int));
  int k = 0;

  int i = 0;
  int j = 0;
  while (i < sizeA || j < sizeB) {
    if (i < sizeA && (*(a + i) < *(b + j))) {
      result[k] = *(a + i);
      k++;
      i++;
    } else if (j < sizeB) {
      result[k] = *(b + j);
      k++;
      j++;
    }
  }

  return result;
}

int main() {
  int arr1[] = {1, 3, 5, 7};
  int arr2[] = {2, 4, 6, 8, 10};

  int n1 = sizeof(arr1) / sizeof(arr1[0]);
  int n2 = sizeof(arr2) / sizeof(arr2[0]);

  // Вызываем твою функцию
  int *result = merge(arr1, n1, arr2, n2);

  if (result == NULL) {
    printf("Ошибка выделения памяти или функция не реализована!\n");
    return 1;
  }

  // Вывод результата
  printf("Результат слияния: ");
  for (int i = 0; i < n1 + n2; i++) {
    printf("%d ", result[i]);
  }
  printf("\n");

  free(result);

  return 0;
}
