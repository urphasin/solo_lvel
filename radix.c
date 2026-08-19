#include <stdio.h>
#include <math.h>

int main() {
  int16_t x = 0b1000000010110101;

  printf("0b1000000010110101;\n");
  printf("x = %d\n", x);
  printf("2^16 - 1 = %lg\n\n", (pow(2, 16) - 1));

  x = ~x + 1;
  printf("x = ~x + 1\n");
  printf("x = -%d\n", x);

  
  return 0;
}