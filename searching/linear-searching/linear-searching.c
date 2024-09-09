//linear searching

#include <stdio.h>

void linearSearch(int arr[], int range, int key);

int main() {
	int n, item;
	printf("Enter the range of the array: ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter the elements in the array: ");
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	printf("Enter an item to search: ");
	scanf("%d", &item);
	
	linearSearch(arr, n, item);
	return 0;
}

void linearSearch(int arr[], int range, int key) {
	int flag = 0;
	for(int i = 0; i < range; i++) {
		if(arr[i] == key) {
			flag = 1;
			break;
		}
	}
	
	if(flag == 1) {
		printf("Search found at index %d", );
	} else {
		printf("Search not found");
	}
}
