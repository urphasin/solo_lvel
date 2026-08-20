#include <stdio.h>

// 0b00001000; 

void print_binary_8(u_int8_t val) {
  int width = 8;

  for (int i = width-1; i>=0; i--) {

    u_int8_t bit = (val >> i);

    printf("%d", bit);
  }
}

int main() {

  u_int8_t a = 0b1;

  printf("1 & 1 = %d\n", (u_int8_t)(a & 1));
}