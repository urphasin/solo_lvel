#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// A ∪ B
// A ∩ B
// A - B

const int SIZE = 100;

void Union(int* A, int* B, size_t size) {
  int r[size];
  for (int i = 0; i < size; i++) {
    
    r[i] = A[i];

    for(int j = 0; j < size; j++) {

      for(int k = 0; k < size; k++) {
        if(B[k] = r[j]) {
          continue;
        }

      }

    }

  }

}
void Intersection(int* A, int* B, size_t size) {}
void SymmetricDifference(int* A, int* B, size_t size) {}

int main() {
  int set1[SIZE] = {1, 3, 5, 7, 9};
  int set2[SIZE] = {1, 2, 4, 6, 7, 8, 10};

  Union(set1, set2, SIZE);
  Intersection(set1, set2, SIZE);
  SymmetricDifference(set1, set2, SIZE);
}