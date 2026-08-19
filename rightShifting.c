#include <stdio.h>

int main() {
  u_int16_t x = 0b0000000010110110; // 182

  x = x >> 1; // |_(x / 2^k)_|  x = 0b0000000001011011

  printf("x = %d\n", x);
  printf("y = %d\n", 0b0000000001011011);
  
  return 0;
}