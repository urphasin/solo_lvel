#include<stdio.h>
#include<stdlib.h> // for abs()
#include<math.h> // for fabs()

int main() {
  printf("abs(-5) = %d\n", abs(-5));
  printf("fabsf(-77.52) = %f\n", fabsf(-77.52f));
  printf("fabs(-77.52) = %lf\n", fabs(-77.52));
  printf("labs(-20) = %ld\n", labs(-20L));
  printf("llabs(-42000) = %lld\n", llabs(-42000LL));

  return 0;
}