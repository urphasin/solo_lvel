#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

/*
Generate the sequence aaaaabbbbbaaaabbbbaaabbbaabbab

Special rules:
1 - Do not use switch or if statements, and don't manipulate loops to make them match
		if statements either.
2 - Do not use more than 4 for/do while/while loops in any combination.
*/

void print(char *sq) {
	char x = sq[0];
	char y = sq[1];

	for (int i = 4; i > 0; i--) {
		for(int j = i; j > 0; j--) {
			printf("%c",x);
		}
		for(int k = i; k > 0; k--) {
			printf("%c",y);
		}
	}
	printf("\n");
}

int main() {
	char *sq = "ab";
	print(sq);
}