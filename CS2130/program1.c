#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
  double atoms = (180/2.2) * 0.7 * (1000/18) * pow(10, 24);
  printf("atoms: %e\n", atoms);
}