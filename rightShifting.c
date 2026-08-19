#include <stdio.h>

int main() {
  u_int16_t x = 0b0000000010110110; // 182

  x = x >> 1;

  printf("x = %d\n", x);
  
  return 0;
}