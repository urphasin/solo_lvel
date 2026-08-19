#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
  int x = 2010214;
  x = (x & 0x55555555) + ((x >> 1) & 0x55555555);
  x = (x & 0x33333333) + ((x >> 2) & 0x33333333);
  x = (x & 0x0F0F0F0F) + ((x >> 4) & 0x0F0F0F0F);
  x = (x & 0x00FF00FF) + ((x >> 8) & 0x00FF00FF);
  x = (x & 0x0000FFFF) + ((x >> 16) & 0x0000FFFF);

  printf("x = %d\n", x);
  printf("abs(-5) = %d\n", abs(-5));
  printf("fabsf(-77.52) = %d\n", fabsf(-77.52f));
  printf("fabs(-77.52) = %d\n", fabsf(-77.52));
  printf("labs()")

  return 0;
}