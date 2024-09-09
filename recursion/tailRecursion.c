#include <stdio.h>

int printN(int n);

int main() {
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	printN(num);
	return 0;
}

int printN(int n) {
	if(n < 0) {
		return 0;
	}
	printf("%d ", n);
	printN(n-1);
}
