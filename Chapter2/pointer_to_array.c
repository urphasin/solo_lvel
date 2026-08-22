#include <stdio.h>
#include <stdlib.h>


int main() {
  int arr[] = {1, 2, 3, 4, 5};
  
  int (*ptr)[5] = &arr;

  for(int i = 0; i < 5; i++) {
    printf("arr[%d] = %d\n",i,  (*ptr)[i]);
  }
}