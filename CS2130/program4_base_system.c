#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

// 0b00001000; 
/*
Convert between bases manually.  Start with base 10 and convert to bases 8, 16, 2.  Do NOT use built-in conversion methods for the conversion.  You must do your own math to compute the values.  Input the value to be converted, and this should be the only input for this program. 
Watch output, it needs to be correct for base 16.
*/


void print_base_2_fixed16bits( val) {
  int width = 16;

  for (int i = width-1; i>=0; i--) {

    u_int16_t bit = (val >> i) & 1;

    printf("%d", bit);

    if(i % 4 == 0) {
      printf(" ");
    }
  }
  printf("\n");
}

void print_base_8(int val) {

}


int main() {

  u_int16_t a = 40'000;
  print_base_2_fixed16bits(a);
}