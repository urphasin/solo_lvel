#include <stdio.h>
#include <math.h>

int main() {
  u_int16_t x = 0b0000000001010101;

  printf("0b0000000001010101;\n");
  printf("x = %d\n", x);

  printf("~x + 1; = %d\n", ~x + 1);

  printf("x << 3; = %d\n", x << 3);
  printf("x >> 3; = %d\n", x >> 3);

  printf("unsigned_bit 2^16 = %lg values\n", pow(2, 16));

  printf("x = %d\n", x);

  // cast so no promotion to int before doing operation
  printf("(x << 3) | (x >> (W_fixed_bit_width - 3)) = %d\n", (u_int16_t)((x >> 3) | (x << 13)) );

  
  return 0;
}