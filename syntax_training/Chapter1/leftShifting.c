#include <stdio.h>

int main() {
  u_int16_t x = 0b0000000010110101; // 181

  x = x << 1; // x * 2^k provided no overflow occurs
  // 0b0000000101101010 = 362


  printf("x = %d\n", x);
  printf("y = %d\n", 0b0000000101101010);
  
  return 0;
}