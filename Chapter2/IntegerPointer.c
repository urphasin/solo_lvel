#include <stdio.h>
#include <stdlib.h>

typedef int* IntegerPointer;
int main() {
  IntegerPointer A = (char*)malloc(sizeof(int)); // optional to cast to IntegerPointer/int*
  *A = 50;

  printf("A = %d\n", *A);
  
  printf("sizeof(int) = %lu bytes\n", sizeof(int));

  printf("sizeof(IntegerPointer) = %lu bytes\n", sizeof(IntegerPointer));

  

  free(A);
}