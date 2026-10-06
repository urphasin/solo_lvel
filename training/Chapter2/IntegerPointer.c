#include <stdio.h>
#include <stdlib.h>

typedef int *IntegerPointer;
int main()
{
  IntegerPointer A = (void *)malloc(sizeof(int)); // optional to cast to IntegerPointer/int*
  *A = 50;
  printf("A = %d\n", *A);
  printf("sizeof(int) = %lu bytes\n", sizeof(int));
  printf("sizeof(IntegerPointer) = %lu bytes\n", sizeof(IntegerPointer));

  char char_name_1 = 'A';
  char char_name_2 = 'B';
  char *names[2] = { &char_name_1, &char_name_2 };

  int numbers[3] = { 1234, 5431, 2026 };

  char *food_c_array[] = { "yam", "eggs" };
  char *(*food)[2] = &food_c_array;

  free(A);
}