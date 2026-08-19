#include <stdio.h>

int main() {
  u_int16_t x = 0b0000000010110101; // 181

  x = x << 1; // x * 2^k

  printf("x = %d\n", x);
  
  return 0;
}