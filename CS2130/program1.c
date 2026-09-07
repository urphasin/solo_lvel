#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

// constraint of size of 1000 elements in each array.
enum {
  sizeA = 1000,
  sizeB = 1000
};

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


// program requirement
void set_union(const int *A, size_t sizeA, const int *B, size_t sizeB) {
  printf("set_union: ");
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

void set_intersection(const int *A, size_t sizeA, const int *B, size_t sizeB) {
  printf("set_intersection: ");
  int bufferSize = 0;
  int b[2000];

  int resultSize = 0;
  int r[2000];

  for (int i = 0; i < sizeA; i++) {
    if (!contains(A[i], b, bufferSize)) {
      b[bufferSize++] = A[i];
    }
  }

  int intersection_exists = 0;
  for (int i = 0; i < sizeB; i++) {
    if(contains(B[i], b, bufferSize)) {
      r[resultSize++] = B[i];
      intersection_exists++;
    }
  }

  print_array(r, intersection_exists);
}

void set_symmetric_difference(const int *A, size_t sizeA, const int *B, size_t sizeB) {
  printf("set_symmetric_difference: ");

}



int main() {
  int set1[sizeA] = { 1, 3, 5, 6, 8 };
  int set2[sizeB] = { 2, 3, 4, 7, 9 };

  // set_union(set1, sizeA, set2, sizeB);
  set_intersection(set1, sizeA, set2, sizeB);
  // set_symmetric_difference(set1, sizeA, set2, sizeB);

  // printf("\n\x1b[1;94motito\x1b[0m\n");
}