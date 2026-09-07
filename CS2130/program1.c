#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

// A ∪ B
// A ∩ B
// A - B

// Constraint of max size of 1000 elements in each array.
const int SIZE = 1000;

// utitlities
bool contains(int target, const int arr[], int size) {
  for (int i = 0; i < size; i++) {
    if (target == arr[i]) {
      return true;
    }
  }
  return false;
}

void print_array(const int* arr, size_t size) {
  for (int i = 0; i < size; i++) {
    if (i != size - 1) {
      printf("%d, ", arr[i]);
    } else {
      printf("%d", arr[i]);
    }
  }
  printf("\n");
}

void set_union(const int *A, size_t sizeA, const int *B, size_t sizeB) {
  int resultSize = 0;
  int r[2000];
  
  for (int i = 0; i < sizeA; i++) {
    if(!contains(A[i], r, resultSize)) {
      r[resultSize++] = A[i];
    }
  }

  for (int i = 0; i < resultSize; i++) {
    if(!contains(B[i], r, resultSize)) {
      r[resultSize++] = B[i];
    } 
  }

  print_array(r, resultSize);
}
void set_intersection(int *A, int *B, size_t size) {

}
void set_symmetric_difference(int *A, int *B, size_t size) {}

int main() {
  int set1[SIZE] = { 1, 3, 5, 7, 9 };
  int set2[SIZE] = { 1, 2, 4, 6, 7, 8, 10 };

  set_union(set1, SIZE, set2, SIZE);
  // set_intersection(set1, set2, SIZE);
  // set_symmetric_difference(set1, set2, SIZE);

  printf("\n\x1b[1;94motito\x1b[0m\n");
  
}