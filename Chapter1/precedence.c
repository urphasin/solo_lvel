#include <stdio.h>

int main() {
  int a = 1, b = 2, c = 3, d = 4, ans;

  ans = a & b == c; 
  printf("ans = a & b == c;  = %d\n", ans);

  ans = (a & b) == c;
  printf("ans = (a & b) == c; = %d\n", ans);

  ans = a & (b == c);
  printf("ans = a & (b == c); = %d\n", ans);
  
}