#include "stdio.h"

int main() {
  printf("Hello, World!\n");


  int a[3] = {1, 2, 3};
  for (int i = 0; i < 3; i++) {
    printf("a[%d] = %d\n", i, a[i]);
  }
  return 0;
}