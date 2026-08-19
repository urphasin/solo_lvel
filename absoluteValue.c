#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
  printf("abs(-5) = %d\n", abs(-5));
  printf("fabsf(-77.52) = %d\n", fabsf(-77.52f));
  printf("fabs(-77.52) = %d\n", fabsf(-77.52));
  printf("labs(-20) = %ld\n", labs(-20L));
  printf("llabs(-42000) = %lld\n", labs(-42000LL));

  return 0;
}