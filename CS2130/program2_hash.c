#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

void hash(char sentence[]) {
  int hash_aggregate = 0, hash_value = 0;
  for (int i = 0; sentence[i] != '\0'; i++) {
    // printf("ascii #: %c -> %d\n", sentence[i], (int)sentence[i]);

    int alphabetNumber = (int)(tolower(sentence[i])) - 96;
    // printf("alphabet: %c -> %d\n", sentence[i], alphabetNumber);
    hash_aggregate += alphabetNumber;
  }
  hash_value = hash_aggregate % 31;
  printf("HASH VALUE -> %d\n", hash_value);
}

int main() {
  char sentence[] = "abc";
  hash(sentence);

  printf("\n\x1b[1;94motito amuga\x1b[0m\n");
}