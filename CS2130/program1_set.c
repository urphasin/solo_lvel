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
  size_t ab_union_sz = 0;
  int *ab_union = set_union(A, sizeA, B, sizeB, &ab_union_sz);



  size_t ab_intersection_sz = 0;
  int *ab_intersection = set_intersection(A, sizeA, B, sizeB, &ab_intersection_sz);

  *resultSize = 0;
  int *r = malloc((sizeA + sizeB) * sizeof(int));

  for (int i = 0; i < ab_union_sz; i++) {
    if (!contains(ab_union[i], ab_intersection, ab_intersection_sz)) {
      r[(*resultSize)++] = ab_union[i];
    }
  }

  free(ab_union);
  free(ab_intersection);

  return r;
}


int main() {
  int set1[sizeA] = { 1, 3, 5, 6, 8 };
  int set2[sizeB] = { 2, 3, 4, 7, 9 };

  size_t resultSize;

  int *R1 = set_union(set1, sizeA, set2, sizeB, &resultSize);
  printf("set_union: ");
  print_array(R1, resultSize);
  free(R1);

  int *R2 = set_intersection(set1, sizeA, set2, sizeB, &resultSize);
  printf("set_intersection: ");
  print_array(R2, resultSize);
  free(R2);


  int *R3 = set_symmetric_difference(set1, sizeA, set2, sizeB, &resultSize);
  printf("set_intersection: ");
  print_array(R3, resultSize);
  free(R3);


  printf("\n\x1b[1;94motito amuga\x1b[0m\n");
}


