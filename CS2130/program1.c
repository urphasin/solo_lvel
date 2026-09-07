#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

/*constraint of size elements in each array, the algorithms breaks if the number of elements
instantiated is less than the capacity of the array.
the number of elements that are in it.
*/
enum {
  sizeA = 5,
  sizeB = 5
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
int* set_union(const int *A, size_t sizeA, const int *B, size_t sizeB,
               size_t* resultSize) 
{
  
  printf("set_union: ");
  
  *resultSize = 0;
  int *r = malloc((sizeA + sizeB) * sizeof(int));
  
  for (int i = 0; i < sizeA; i++) {
    if(!contains(A[i], r, *resultSize)) {
      r[(*resultSize)++] = A[i];
    }
  }

  for (int i = 0; i < sizeB; i++) {
    if(!contains(B[i], r, *resultSize)) {
      r[(*resultSize)++] = B[i];
    } 
  }

  return r;
}

int* set_intersection(const int *A, size_t sizeA, const int *B, size_t sizeB, 
                      size_t* resultSize) 
{
  printf("set_intersection: ");
  int bufferSize = 0;
  int b[100];

  *resultSize = 0;
  int *r = malloc((sizeA + sizeB) * sizeof(int));

  for (int i = 0; i < sizeA; i++) {
    if (!contains(A[i], b, bufferSize)) {
      b[bufferSize++] = A[i];
    }
  }

  for (int i = 0; i < bufferSize; i++) {
    if(contains(B[i], b, bufferSize)) {
      r[(*resultSize)++] = B[i];
    }
  }

  return r;
}

int* set_symmetric_difference(const int *A, size_t sizeA, const int *B, size_t sizeB, 
                              size_t* resultSize) 
{
  printf("set_symmetric_difference: ");

  int *ab_union;
  int ab_union_sz = 0;



  int *ab_intersection; 
  int ab_intersection_sz = 0;

  *resultSize = 0;
  int r[100];
  for (int i = 0; i < ab_union_sz; i++) {
    if (!contains(ab_union[i], ab_intersection, ab_intersection_sz)) {
      r[*(resultSize)++] = ab_union[i];
    }
  }
  print_array(r, resultSize);
}



int main() {
  int set1[sizeA] = { 1, 3, 5, 6, 8 };
  int set2[sizeB] = { 2, 3, 4, 7, 9 };

  int resultSize;
  int *R1 = set_union(set1, sizeA, set2, sizeB, &resultSize);
  print_array(R1, resultSize);
  free(R1);

  // int *R2 = set_intersection(set1, sizeA, set2, sizeB, &resultSize);
  // print_array(set_intersection, resultSize);
  // free(R2);


  // int *R3 = set_symmetric_difference(set1, sizeA, set2, sizeB, &resultSize);
  // print_array(R3, resultSize);


  // printf("\n\x1b[1;94motito\x1b[0m\n");
}