#include <stdio.h>
#include <stdlib.h>

typedef int* IntegerPointer;
int main() {
  IntegerPointer A = malloc(sizeof(int));
  *A = 50;

  printf("sizeof(int) = %lu bytes\n", sizeof(int));

  printf("sizeof(IntegerPointer) = %lu bytes\n", sizeof(IntegerPointer));

  printf("*A = %d\n", *A);

  printf("A = %p\n", A);

  printf("&A = %p\n", &A);


  free(A);
}