#include <stdio.h>
#include <stdlib.h>

typedef int* IntegerPointer;
int main() {
  IntegerPointer A = (IntegerPointer)malloc(sizeof(int));

  printf("sizeof(int) = %lu\n", sizeof(int));
  printf("sizeof(IntegerPointer) = %lu\n", sizeof(IntegerPointer));

  free(A);
}