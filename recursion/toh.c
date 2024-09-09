#include <stdio.h>

void toh(int n, char A, char B, char C);

void main() {
	int n;
	printf("Enter number of discs: ");
	scanf("%d", &n);
	toh(n, 'O', 'D', 'I');
}

void toh(int n, char A, char B, char C) {
	if(n > 0) {
		toh(n-1, A, C, B);
		printf("Move disc %d from %c to %c\n", n, A, B);
		toh(n-1, C, B, A);
	}
}
