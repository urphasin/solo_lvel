#include <stdio.h>
#include <math.h>

int main() {
  int16_t x = 0b0000000001010101;

  printf("0b0000000001010101;\n");
  printf("x = %d\n", x);

  printf("~x + 1; = %d\n", ~x + 1);

  printf("x << 3; = %d\n", x << 3);
  printf("2^16 - 1 = %lg\n", (pow(2, 16) - 1));

  printf("(x << 3) || (x >> (W_fixed_bit_width - 3)) = %d\n", (x << 3) || (x >> (16 - 3)));

  
  return 0;
}