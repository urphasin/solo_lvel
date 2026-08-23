#include <stdio.h>

int main() {
  int a = 1, b = 2, c = 3, d = 4, e = 5, ans;

  //
  ans = a & b == c; // problem
  printf("ans = a & b == c;  = %d\n", ans);

  ans = (a & b) == c; // wrong
  printf("ans = (a & b) == c; = %d\n", ans);

  ans = a & (b == c); // correct
  printf("ans = a & (b == c); = %d\n", ans);

  //
  ans = a * b + c << d; // problem
  printf("ans = a * b + c << d; = %d\n", ans);

  ans = (a * b) + (c << d); // wrong
  printf("ans = (a * b) + (c << d); = %d\n", ans);

  ans = ((a * b) + c) << d; // correct
  printf("ans = ((a * b) + c) << d; = %d\n", ans);

  //
  ans = a && b | c ^ d & e; // problem
  printf("ans = a && b | c ^ d & e;  = %d\n", ans);

  ans = a && (b | (c ^ (d & e))); // correct
  printf("ans = a && (b | (c ^ (d & e)));  = %d\n", ans);

  //
  ans = a + b > c + d && e; // problem
  printf("ans = a + b > c + d && e;  = %d\n", ans);

  ans = (((a + b) > c) == d) && e; // correct
  printf("ans = (((a + b) > c) == d) && e;  = %d\n", ans);
  
}