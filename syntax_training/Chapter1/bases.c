#include <stdio.h>

// 0b00001000; 

void print_binary_16(u_int16_t val) {
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

int main() {

  u_int16_t a = 21607;
  print_binary_16(a);
}