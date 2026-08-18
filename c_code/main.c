#include "stdio.h"

int main() {
  printf("Hello, World!\n");


  int arr[4] = { 1, 2, 3 };
  int value = 0;

  for (int i = 3; i > 0; --i) {
    arr[i] = arr[i - 1];
  }
  arr[0] = value;

  int a[3] = { 1, 2, 3 };
  for (int i = 0; i < 3; i++) {
    printf("a[%d] = %d\n", i, a[i]);
  }
  return 0;
}